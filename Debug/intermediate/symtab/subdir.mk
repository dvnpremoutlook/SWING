################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../intermediate/symtab/Predefined.cpp 

OBJS += \
./intermediate/symtab/Predefined.o 

CPP_DEPS += \
./intermediate/symtab/Predefined.d 


# Each subdirectory must supply rules for building sources it contributes
intermediate/symtab/%.o: ../intermediate/symtab/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -I"/home/dood/eclipse-workspace/Assign05" -I/usr/local/include/antlr4-runtime -I"/home/dood/eclipse-workspace/Assign05/target/generated-sources/antlr4" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


