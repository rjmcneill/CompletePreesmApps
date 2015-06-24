################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Code/generated/Core0.c \
../Code/generated/Core1.c \
../Code/generated/Core2.c \
../Code/generated/Core3.c \
../Code/generated/Core4.c \
../Code/generated/Core5.c \
../Code/generated/Core6.c \
../Code/generated/Core7.c 

OBJS += \
./Code/generated/Core0.o \
./Code/generated/Core1.o \
./Code/generated/Core2.o \
./Code/generated/Core3.o \
./Code/generated/Core4.o \
./Code/generated/Core5.o \
./Code/generated/Core6.o \
./Code/generated/Core7.o 

C_DEPS += \
./Code/generated/Core0.d \
./Code/generated/Core1.d \
./Code/generated/Core2.d \
./Code/generated/Core3.d \
./Code/generated/Core4.d \
./Code/generated/Core5.d \
./Code/generated/Core6.d \
./Code/generated/Core7.d 


# Each subdirectory must supply rules for building sources it contributes
Code/generated/%.o: ../Code/generated/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -I"/mnt/hgfs/Ubuntu Dev/workspace/crossCoreMultiplication/Code/include" -I"/mnt/hgfs/Ubuntu Dev/workspace/crossCoreMultiplication/Code/src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


