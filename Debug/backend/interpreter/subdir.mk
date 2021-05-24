################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../backend/interpreter/Executor.cpp 

OBJS += \
./backend/interpreter/Executor.o 

CPP_DEPS += \
./backend/interpreter/Executor.d 


# Each subdirectory must supply rules for building sources it contributes
backend/interpreter/%.o: ../backend/interpreter/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -I"/home/dood/eclipse-workspace/Assign05" -I/usr/local/include/antlr4-runtime -I"/home/dood/eclipse-workspace/Assign05/target/generated-sources/antlr4" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


