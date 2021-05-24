#include <string>
#include <vector>
#include <map>
#include <sstream>
#include "PascalBaseVisitor.h"
#include "antlr4-runtime.h"

#include "intermediate/symtab/Predefined.h"
#include "Compiler.h"
#include "StatementGenerator.h"


namespace backend { namespace compiler {

using namespace std;
using namespace intermediate;

void StatementGenerator::emitAssignment(PascalParser::AssignmentStatementContext *ctx)
{
    PascalParser::VariableContext *varCtx  = ctx->lhs()->variable();
    PascalParser::ExpressionContext *exprCtx = ctx->rhs()->expression();
    SymtabEntry *varId = varCtx->entry;
    Typespec *varType  = varCtx->type;
    Typespec *exprType = exprCtx->type;

    // The last modifier, if any, is the variable's last subscript or field.
    int modifierCount = varCtx->modifier().size();
    PascalParser::ModifierContext *lastModCtx = modifierCount == 0
                            ? nullptr : varCtx->modifier()[modifierCount - 1];

    // The target variable has subscripts and/or fields.
    if (modifierCount > 0)
    {
        lastModCtx = varCtx->modifier()[modifierCount - 1];
        compiler->visit(varCtx);
    }

    // Emit code to evaluate the expression.
    compiler->visit(exprCtx);

    // float variable := integer constant
    if (   (varType == Predefined::realType)
        && (exprType->baseType() == Predefined::integerType)) emit(I2F);

    // Emit code to store the expression value into the target variable.
    // The target variable has no subscripts or fields.
    if (lastModCtx == nullptr) emitStoreValue(varId, varId->getType());

    // The target variable is a field.
    else if (lastModCtx->field() != nullptr)
    {
        emitStoreValue(lastModCtx->field()->entry, lastModCtx->field()->type);
    }

    // The target variable is an array element.
    else
    {
        emitStoreValue(nullptr, varType);
    }
}

//void StatementGenerator::emitScreenSize(PascalParser::ScreenSizeStatementContext *ctx){
//
//}
//void StatementGenerator::emitScreenLayout(PascalParser::ScreenLayoutStatementContext *ctx){
//
//}
//void StatementGenerator::emitScreenVisibilty(PascalParser::ScreenVisibiltyStatementContext *ctx){
//
//}
void StatementGenerator::emitIf(PascalParser::IfStatementContext *ctx)
{
    /***** Complete this member function. *****/

	//var
	//var
	//cmp
	Label *start = new Label();
	Label *end = new Label();

	compiler->visit(ctx->expression());
	emit(IFEQ, start);
	compiler->visit(ctx->trueStatement());

	PascalParser::FalseStatementContext *false1 = ctx->falseStatement();
	if(false1 != nullptr){

		emit(GOTO, end);
		emitLabel(start);
		compiler->visit(ctx->falseStatement());
		emitLabel(end);
	}
	else{
		emitLabel(start);
	}


}



void StatementGenerator::emitScreen(PascalParser::ScreenStatementContext *ctx){
//	emit(NEW,'javax/swing/JFrame');
//	emit(DUP);
//	emit(INVOKESPECIAL,'javax/swing/JFrame/<init>()V');
//	emit(ASTORE_1);
//	emitNewValue(ctx->variable()->variableIdentifier()->entry);
//	emit(DUP);
//	emitInvokeSpecialValue(ctx->variable()->variableIdentifier()->entry);
//	emit(ASTORE_1);

	if(ctx->ADDGRAPHICS()){
		emit(NEW,programName);
		emit(DUP);
		compiler->visit(ctx->expression(0));
		compiler->visit(ctx->expression(1));
		string o = programName;
		o = o + "/<init>(II)V";
		emit(INVOKESPECIAL,o);
		emit(ASTORE_1);
		emit(NEW,"javax/swing/JFrame");
		emit(DUP);
		emit(INVOKESPECIAL,"javax/swing/JFrame/<init>()V");
		emit(ASTORE_2);
		emit(ALOAD_2);
		emit(INVOKEVIRTUAL,"javax/swing/JFrame/getContentPane()Ljava/awt/Container;");
		emit(ALOAD_1);
		emit(INVOKEVIRTUAL,"java/awt/Container/add(Ljava/awt/Component;)Ljava/awt/Component;");
		emit(POP);
		emit(ALOAD_2);
		emit(INVOKEVIRTUAL,"javax/swing/JFrame/pack()V");
		emit(ALOAD_2);
		emit(ICONST_3);
		emit(INVOKEVIRTUAL,"javax/swing/JFrame/setDefaultCloseOperation(I)V");
		emit(ALOAD_2);
		emit(ICONST_1);
		emit(INVOKEVIRTUAL,"javax/swing/JFrame/setLocationByPlatform(Z)V");
		emit(ALOAD_2);
		emit(ICONST_1);
		emit(INVOKEVIRTUAL,"javax/swing/JFrame/setVisible(Z)V");


	}


}
void StatementGenerator::emitGraphics(PascalParser::GraphicsStatementContext *ctx){
//	emit(NEW,'javax/swing/JFrame');
//	emit(DUP);
//	emit(INVOKESPECIAL,'javax/swing/JFrame/<init>()V');
//	emit(ASTORE_1);
	string x = "javax/swing/JPanel/paintComponent(Ljava/awt/Graphics;)V";
	emit(ALOAD_0);
	emit(ALOAD_1);
	emit(INVOKESPECIAL,x);
	x="java/awt/Graphics/getColor()Ljava/awt/Color;";
	emit(ALOAD_1);
	emit(INVOKEVIRTUAL,x);
	emit(ASTORE_2);
	//emitNewValue(ctx->variable()->variableIdentifier()->entry);

}

void StatementGenerator::emitColor(PascalParser::ColorStatementContext *ctx){
//	emit(NEW,'javax/swing/JFrame');
//	emit(DUP);
//	emit(INVOKESPECIAL,'javax/swing/JFrame/<init>()V');
//	emit(ASTORE_1);
	PascalParser::ExpressionContext *hig = ctx->expression();
	string sethig = hig->getText();
	string x = "java/awt/Color/"+sethig+" Ljava/awt/Color;";
	emit(ALOAD_1);
	emit(GETSTATIC,x);
	x = "java/awt/Graphics/setColor(Ljava/awt/Color;)V";
	emit(INVOKEVIRTUAL,"java/awt/Graphics/setColor(Ljava/awt/Color;)V");

}

void StatementGenerator::emitFill(PascalParser::FillStatementContext *ctx){
//	emit(NEW,'javax/swing/JFrame');
//	emit(DUP);
//	emit(INVOKESPECIAL,'javax/swing/JFrame/<init>()V');
//	emit(ASTORE_1);
	emit(ALOAD_1);
	emit(ALOAD_2);
	emit(INVOKEVIRTUAL," java/awt/Graphics/setColor(Ljava/awt/Color;)V");

}



void StatementGenerator::emitShapes(PascalParser::ShapesStatementContext *ctx){
//	emit(NEW,'javax/swing/JFrame');
//	emit(DUP);
//	emit(INVOKESPECIAL,'javax/swing/JFrame/<init>()V');
//	emit(ASTORE_1);
	string x = "javax/swing/JPanel/paintComponent(Ljava/awt/Graphics;)V";
	emit(ALOAD_1);
	PascalParser::FactorContext *posx = ctx->factor();
	string setposx = posx->getText();
	int positionX = stoi(setposx);
	emit(BIPUSH,positionX);
	PascalParser::ExpressionContext *posy = ctx->expression(0);
	string setposy = posy->getText();
	int positionY = stoi(setposy);
	emit(BIPUSH,positionY);
	PascalParser::ExpressionContext *wid = ctx->expression(1);
	string setwid = wid->getText();
	int WIDTH = stoi(setwid);
	emit(BIPUSH,WIDTH);
	PascalParser::ExpressionContext *hig = ctx->expression(2);
	string sethig = hig->getText();
	int height = stoi(sethig);
	emit(BIPUSH,height);
	if(ctx->RECTANGLE()){
		x="java/awt/Graphics/fillRect(IIII)V";
		emit(INVOKEVIRTUAL,x);
	}
	else if(ctx->CIRCLE()){
		x="java/awt/Graphics/fillOval(IIII)V";
		emit(INVOKEVIRTUAL,x);
	}

	//emitNewValue(ctx->variable()->variableIdentifier()->entry);

}

void StatementGenerator::emitFor(PascalParser::ForStatementContext *ctx)
{

	Label *loop  = new Label();
	Label *next  = new Label();
	compiler->visit(ctx->expression(0));
	emitStoreValue(ctx->variable()->variableIdentifier()->entry,ctx->variable()->variableIdentifier()->type);
	emitLabel(loop);
	emitLoadValue(ctx->variable()->variableIdentifier()->entry);
	compiler->visit(ctx->expression(1));

	emit(IF_ICMPGT, next);


	compiler->visit(ctx->statement());
	emitLoadValue(ctx->variable()->variableIdentifier()->entry);
	emit(ICONST_1);

	emit(IADD);


	emitStoreValue(ctx->variable()->variableIdentifier()->entry,ctx->variable()->variableIdentifier()->type);
	emit(GOTO, loop);
	emitLabel(next);
}

void StatementGenerator::emitProcedureCall(PascalParser::ProcedureCallStatementContext *ctx)
{
	SymtabEntry *name = ctx->procedureName()->entry;
	int y = 0;
	string x = "";
	if (ctx->argumentList() > 0){
		for(PascalParser::ArgumentContext *arg :ctx->argumentList()->argument()){
			y++;
		}
		for(PascalParser::ArgumentContext *arg :ctx->argumentList()->argument()){
		    compiler->visit(arg->expression());
		    y --;
		}

	}
	if(ctx->argumentList() != nullptr){
		emitCall(name,ctx->argumentList());
	}
	else{
		emitCall(name,ctx->argumentList());
	}
}

void StatementGenerator::emitFunctionCall(PascalParser::FunctionCallContext *ctx)
{
    /***** Complete this member function. *****/
	SymtabEntry *name = ctx->functionName()->entry;
	string x = "";
	int y = 0;
	if (ctx->argumentList()){
		for(PascalParser::ArgumentContext *arg :ctx->argumentList()->argument()){
			y++;
		}
		for(PascalParser::ArgumentContext *arg :ctx->argumentList()->argument()){
		    compiler->visit(arg->expression());
		    y --;
		}
	}
	if(ctx->argumentList() != nullptr){
		emitCall(name,ctx->argumentList());
	}
	else{
		emitCall(name,ctx->argumentList());
	}

}

void StatementGenerator::emitCall(SymtabEntry *routineId,
                                  PascalParser::ArgumentListContext *argListCtx)
{
	string routineName = routineId->getName();
	vector<SymtabEntry *> *parmIds = routineId->getRoutineParameters();
	string header(programName + '/' +routineName + "(");
	int y = 0;
    if (parmIds != nullptr)
    {
    	string parm1ID = "";
    	string input1ID = "";
    	int x = 0;
    	int z = 0;
        for (SymtabEntry *parmId : *parmIds)
        {
            header += typeDescriptor(parmId);
            parm1ID = typeDescriptor(parmId);
            y++;
        }
        if(y <= 0){
        	goto jump;
        }
    	for(PascalParser::ArgumentContext *arg :argListCtx->argument()){
    		Typespec *type = arg->expression()->type->baseType();
    		input1ID = CodeGenerator::typeDescriptor(type);
        }

    	if(parm1ID != input1ID){
    		if(input1ID == "I" && parm1ID == "F" && x==0){
    			emit(I2F);
    			x++;
    		}
    		if(input1ID == "F" && parm1ID == "I" &&  x==0){
    			x++;
    			emit(F2I);
    		}
    	}
    }
    jump:
	header += ")" + typeDescriptor(routineId);
	emit(INVOKESTATIC,header);
}

void StatementGenerator::emitWrite(PascalParser::WriteStatementContext *ctx)
{
    emitWrite(ctx->writeArguments(), false);
}

void StatementGenerator::emitWriteln(PascalParser::WritelnStatementContext *ctx)
{
    emitWrite(ctx->writeArguments(), true);
}

void StatementGenerator::emitWrite(PascalParser::WriteArgumentsContext *argsCtx,
                      bool needLF)
{
    emit(GETSTATIC, "java/lang/System/out", "Ljava/io/PrintStream;");

    // WRITELN with no arguments.
    if (argsCtx == nullptr)
    {
        emit(INVOKEVIRTUAL, "java/io/PrintStream.println()V");
        localStack->decrease(1);
    }

    // Generate code for the arguments.
    else
    {
        string format;
        int exprCount = createWriteFormat(argsCtx, format, needLF);

        // Load the format string.
        emit(LDC, format);

        // Emit the arguments array.
       if (exprCount > 0)
        {
            emitArgumentsArray(argsCtx, exprCount);

            emit(INVOKEVIRTUAL,
                        string("java/io/PrintStream/printf(Ljava/lang/String;")
                      + string("[Ljava/lang/Object;)")
                      + string("Ljava/io/PrintStream;"));
            localStack->decrease(2);
            emit(POP);
        }
        else
        {
            emit(INVOKEVIRTUAL,
                 "java/io/PrintStream/print(Ljava/lang/String;)V");
            localStack->decrease(2);
        }
    }
}

int StatementGenerator::createWriteFormat(
                                PascalParser::WriteArgumentsContext *argsCtx,
                                string& format, bool needLF)
{
    int exprCount = 0;
    format += "\"";

    // Loop over the write arguments.
    for (PascalParser::WriteArgumentContext *argCtx : argsCtx->writeArgument())
    {
        Typespec *type = argCtx->expression()->type;
        string argText = argCtx->getText();

        // Append any literal strings.
        if (argText[0] == '\'') format += convertString(argText, true);

        // For any other expressions, append a field specifier.
        else
        {
            exprCount++;
            format.append("%");

            PascalParser::FieldWidthContext *fwCtx = argCtx->fieldWidth();
            if (fwCtx != nullptr)
            {
                string sign = (   (fwCtx->sign() != nullptr)
                               && (fwCtx->sign()->getText() == "-")) ? "-" : "";
                format += sign + fwCtx->integerConstant()->getText();

                PascalParser::DecimalPlacesContext *dpCtx =
                                                        fwCtx->decimalPlaces();
                if (dpCtx != nullptr)
                {
                    format += "." + dpCtx->integerConstant()->getText();
                }
            }

            string typeFlag = type == Predefined::integerType ? "d"
                            : type == Predefined::realType    ? "f"
                            : type == Predefined::booleanType ? "b"
                            : type == Predefined::charType    ? "c"
                            :                                  "s";
            format += typeFlag;
        }
    }

    format += needLF ? "\\n\"" : "\"";

    return exprCount;
}

void StatementGenerator::emitArgumentsArray(
                    PascalParser::WriteArgumentsContext *argsCtx, int exprCount)
{
    // Create the arguments array.
    emitLoadConstant(exprCount);
    emit(ANEWARRAY, "java/lang/Object");

    int index = 0;

    // Loop over the write arguments to fill the arguments array.
    for (PascalParser::WriteArgumentContext *argCtx :
                                                argsCtx->writeArgument())
    {
        string argText = argCtx->getText();
        PascalParser::ExpressionContext *exprCtx = argCtx->expression();
        Typespec *type = exprCtx->type->baseType();

        // Skip string constants, which were made part of
        // the format string.
        if (argText[0] != '\'')
        {
            emit(DUP);
            emitLoadConstant(index++);

            compiler->visit(exprCtx);

            Form form = type->getForm();
            if (    ((form == SCALAR) || (form == ENUMERATION))
                 && (type != Predefined::stringType))
            {
                emit(INVOKESTATIC, valueOfSignature(type));
            }

            // Store the value into the array.
            emit(AASTORE);
        }
    }
}

void StatementGenerator::emitRead(PascalParser::ReadStatementContext *ctx)
{
    emitRead(ctx->readArguments(), false);
}

void StatementGenerator::emitReadln(PascalParser::ReadlnStatementContext *ctx)
{
    emitRead(ctx->readArguments(), true);
}

void StatementGenerator::emitRead(PascalParser::ReadArgumentsContext *argsCtx,
                                  bool needSkip)
{
    int size = argsCtx->variable().size();

    // Loop over read arguments.
    for (int i = 0; i < size; i++)
    {
        PascalParser::VariableContext *varCtx = argsCtx->variable()[i];
        Typespec *varType = varCtx->type;

        if (varType == Predefined::integerType)
        {
            emit(GETSTATIC, programName + "/_sysin Ljava/util/Scanner;");
            emit(INVOKEVIRTUAL, "java/util/Scanner/nextInt()I");
            emitStoreValue(varCtx->entry, nullptr);
        }
        else if (varType == Predefined::realType)
        {
            emit(GETSTATIC, programName + "/_sysin Ljava/util/Scanner;");
            emit(INVOKEVIRTUAL, "java/util/Scanner/nextFloat()F");
            emitStoreValue(varCtx->entry, nullptr);
        }
        else if (varType == Predefined::booleanType)
        {
            emit(GETSTATIC, programName + "/_sysin Ljava/util/Scanner;");
            emit(INVOKEVIRTUAL, "java/util/Scanner/nextBoolean()Z");
            emitStoreValue(varCtx->entry, nullptr);
        }
        else if (varType == Predefined::charType)
        {
            emit(GETSTATIC, programName + "/_sysin Ljava/util/Scanner;");
            emit(LDC, "\"\"");
            emit(INVOKEVIRTUAL,
                 string("java/util/Scanner/useDelimiter(Ljava/lang/String;)") +
                 string("Ljava/util/Scanner;"));
            emit(POP);
            emit(GETSTATIC, programName + "/_sysin Ljava/util/Scanner;");
            emit(INVOKEVIRTUAL, "java/util/Scanner/next()Ljava/lang/String;");
            emit(ICONST_0);
            emit(INVOKEVIRTUAL, "java/lang/String/charAt(I)C");
            emitStoreValue(varCtx->entry, nullptr);

            emit(GETSTATIC, programName + "/_sysin Ljava/util/Scanner;");
            emit(INVOKEVIRTUAL, "java/util/Scanner/reset()Ljava/util/Scanner;");

        }
        else  // string
        {
            emit(GETSTATIC, programName + "/_sysin Ljava/util/Scanner;");
            emit(INVOKEVIRTUAL, "java/util/Scanner/next()Ljava/lang/String;");
            emitStoreValue(varCtx->entry, nullptr);
        }
    }

    // READLN: Skip the rest of the input line.
    if (needSkip)
    {
        emit(GETSTATIC, programName + "/_sysin Ljava/util/Scanner;");
        emit(INVOKEVIRTUAL, "java/util/Scanner/nextLine()Ljava/lang/String;");
        emit(POP);
    }
}

}} // namespace backend::compiler
