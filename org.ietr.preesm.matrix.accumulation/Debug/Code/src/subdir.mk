################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Code/src/accumulateMatrices.c \
../Code/src/displayMatrix.c \
../Code/src/generateMatrices.c \
../Code/src/main.c 

OBJS += \
./Code/src/accumulateMatrices.o \
./Code/src/displayMatrix.o \
./Code/src/generateMatrices.o \
./Code/src/main.o 

C_DEPS += \
./Code/src/accumulateMatrices.d \
./Code/src/displayMatrix.d \
./Code/src/generateMatrices.d \
./Code/src/main.d 


# Each subdirectory must supply rules for building sources it contributes
Code/src/%.o: ../Code/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


