################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Code6678/Debug/configPkg/package/package_configPkg.c 

OBJS += \
./Code6678/Debug/configPkg/package/package_configPkg.o 

C_DEPS += \
./Code6678/Debug/configPkg/package/package_configPkg.d 


# Each subdirectory must supply rules for building sources it contributes
Code6678/Debug/configPkg/package/%.o: ../Code6678/Debug/configPkg/package/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


