################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Code6678/src/cache.c \
../Code6678/src/communication.c \
../Code6678/src/displayMatrix.c \
../Code6678/src/dump.c \
../Code6678/src/fifo.c \
../Code6678/src/generateMatrices.c \
../Code6678/src/main.c \
../Code6678/src/memory.c \
../Code6678/src/multiplyMatrices.c \
../Code6678/src/semaphore6678.c \
../Code6678/src/sumResults.c \
../Code6678/src/transposeMatrix.c \
../Code6678/src/utils.c 

OBJS += \
./Code6678/src/cache.o \
./Code6678/src/communication.o \
./Code6678/src/displayMatrix.o \
./Code6678/src/dump.o \
./Code6678/src/fifo.o \
./Code6678/src/generateMatrices.o \
./Code6678/src/main.o \
./Code6678/src/memory.o \
./Code6678/src/multiplyMatrices.o \
./Code6678/src/semaphore6678.o \
./Code6678/src/sumResults.o \
./Code6678/src/transposeMatrix.o \
./Code6678/src/utils.o 

C_DEPS += \
./Code6678/src/cache.d \
./Code6678/src/communication.d \
./Code6678/src/displayMatrix.d \
./Code6678/src/dump.d \
./Code6678/src/fifo.d \
./Code6678/src/generateMatrices.d \
./Code6678/src/main.d \
./Code6678/src/memory.d \
./Code6678/src/multiplyMatrices.d \
./Code6678/src/semaphore6678.d \
./Code6678/src/sumResults.d \
./Code6678/src/transposeMatrix.d \
./Code6678/src/utils.d 


# Each subdirectory must supply rules for building sources it contributes
Code6678/src/%.o: ../Code6678/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


