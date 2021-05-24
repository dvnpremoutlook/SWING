################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../backend/converter/CodeGenerator.cpp \
../backend/converter/Converter.cpp 

OBJS += \
./backend/converter/CodeGenerator.o \
./backend/converter/Converter.o 

CPP_DEPS += \
./backend/converter/CodeGenerator.d \
./backend/converter/Converter.d 


# Each subdirectory must supply rules for building sources it contributes
backend/converter/%.o: ../backend/converter/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -I"/home/dood/eclipse-workspace/Assign05" -I/usr/local/include/antlr4-runtime -I"/home/dood/eclipse-workspace/Assign05/target/generated-sources/antlr4" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


