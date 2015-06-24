################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Code6678/generated/Core0.c \
../Code6678/generated/Core1.c \
../Code6678/generated/Core2.c \
../Code6678/generated/Core3.c \
../Code6678/generated/Core4.c \
../Code6678/generated/Core5.c \
../Code6678/generated/Core6.c \
../Code6678/generated/Core7.c 

OBJS += \
./Code6678/generated/Core0.o \
./Code6678/generated/Core1.o \
./Code6678/generated/Core2.o \
./Code6678/generated/Core3.o \
./Code6678/generated/Core4.o \
./Code6678/generated/Core5.o \
./Code6678/generated/Core6.o \
./Code6678/generated/Core7.o 

C_DEPS += \
./Code6678/generated/Core0.d \
./Code6678/generated/Core1.d \
./Code6678/generated/Core2.d \
./Code6678/generated/Core3.d \
./Code6678/generated/Core4.d \
./Code6678/generated/Core5.d \
./Code6678/generated/Core6.d \
./Code6678/generated/Core7.d 


# Each subdirectory must supply rules for building sources it contributes
Code6678/generated/%.o: ../Code6678/generated/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


