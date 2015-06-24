################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Code6678/src/subdir.mk
-include Code6678/package/preesm6678/package/subdir.mk
-include Code6678/generated/subdir.mk
-include Code6678/Debug/src/subdir.mk
-include Code6678/Debug/generated/subdir.mk
-include Code6678/Debug/configPkg/package/cfg/subdir.mk
-include Code6678/Debug/configPkg/package/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: liborg.ietr.preesm.matrix.multiplication.using.addition.so

# Tool invocations
liborg.ietr.preesm.matrix.multiplication.using.addition.so: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GCC C Linker'
	gcc -shared -o "liborg.ietr.preesm.matrix.multiplication.using.addition.so" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(LIBRARIES) liborg.ietr.preesm.matrix.multiplication.using.addition.so
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
