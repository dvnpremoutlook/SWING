################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../target/generated-sources/antlr4/PascalBaseVisitor.cpp \
../target/generated-sources/antlr4/PascalLexer.cpp \
../target/generated-sources/antlr4/PascalParser.cpp \
../target/generated-sources/antlr4/PascalVisitor.cpp 

OBJS += \
./target/generated-sources/antlr4/PascalBaseVisitor.o \
./target/generated-sources/antlr4/PascalLexer.o \
./target/generated-sources/antlr4/PascalParser.o \
./target/generated-sources/antlr4/PascalVisitor.o 

CPP_DEPS += \
./target/generated-sources/antlr4/PascalBaseVisitor.d \
./target/generated-sources/antlr4/PascalLexer.d \
./target/generated-sources/antlr4/PascalParser.d \
./target/generated-sources/antlr4/PascalVisitor.d 


# Each subdirectory must supply rules for building sources it contributes
target/generated-sources/antlr4/%.o: ../target/generated-sources/antlr4/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -I"/home/dood/eclipse-workspace/Assign05" -I/usr/local/include/antlr4-runtime -I"/home/dood/eclipse-workspace/Assign05/target/generated-sources/antlr4" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


