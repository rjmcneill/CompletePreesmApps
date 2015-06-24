################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Code6678/package/preesm6678/package/package_preesm6678.c 

OBJS += \
./Code6678/package/preesm6678/package/package_preesm6678.o 

C_DEPS += \
./Code6678/package/preesm6678/package/package_preesm6678.d 


# Each subdirectory must supply rules for building sources it contributes
Code6678/package/preesm6678/package/%.o: ../Code6678/package/preesm6678/package/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


