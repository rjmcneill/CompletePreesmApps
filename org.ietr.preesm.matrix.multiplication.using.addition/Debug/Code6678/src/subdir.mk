################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Code6678/src/cache.c \
../Code6678/src/communication.c \
../Code6678/src/dump.c \
../Code6678/src/fifo.c \
../Code6678/src/main.c \
../Code6678/src/memory.c \
../Code6678/src/semaphore6678.c \
../Code6678/src/utils.c 

OBJS += \
./Code6678/src/cache.o \
./Code6678/src/communication.o \
./Code6678/src/dump.o \
./Code6678/src/fifo.o \
./Code6678/src/main.o \
./Code6678/src/memory.o \
./Code6678/src/semaphore6678.o \
./Code6678/src/utils.o 

C_DEPS += \
./Code6678/src/cache.d \
./Code6678/src/communication.d \
./Code6678/src/dump.d \
./Code6678/src/fifo.d \
./Code6678/src/main.d \
./Code6678/src/memory.d \
./Code6678/src/semaphore6678.d \
./Code6678/src/utils.d 


# Each subdirectory must supply rules for building sources it contributes
Code6678/src/%.o: ../Code6678/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -I"/mnt/hgfs/Ubuntu Dev/workspace/crossCoreMultiplication/Code/include" -I"/mnt/hgfs/Ubuntu Dev/workspace/crossCoreMultiplication/Code/src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


