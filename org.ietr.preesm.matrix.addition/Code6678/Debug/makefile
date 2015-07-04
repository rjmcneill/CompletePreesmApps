################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccsv5/tools/compiler/c6000_7.3.4

ORDERED_OBJS += \
$(GEN_CMDS__FLAG) \
"./generated/Core7.obj" \
"./generated/Core6.obj" \
"./generated/Core5.obj" \
"./generated/Core4.obj" \
"./generated/Core3.obj" \
"./generated/Core2.obj" \
"./generated/Core1.obj" \
"./generated/Core0.obj" \
"./src/utils.obj" \
"./src/semaphore6678.obj" \
"./src/memory.obj" \
"./src/main.obj" \
"./src/generateMatrices.obj" \
"./src/fifo.obj" \
"./src/dump.obj" \
"./src/displayMatrix.obj" \
"./src/communication.obj" \
"./src/cache.obj" \
"./src/addMatrices.obj" \
-l"libc.a" \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include src/subdir_vars.mk
-include generated/subdir_vars.mk
-include subdir_rules.mk
-include src/subdir_rules.mk
-include generated/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: crossCoreAddition.out

# Tool invocations
crossCoreAddition.out: $(OBJS) $(GEN_CMDS)
	@echo 'Building target: $@'
	@echo 'Invoking: C6000 Linker'
	"C:/ti/ccsv5/tools/compiler/c6000_7.3.4/bin/cl6x" -mv6600 -g --display_error_number --diag_warning=225 --abi=eabi -z -m"crossCoreAddition.map" --warn_sections --display_error_number -i"C:/ti/ccsv5/tools/compiler/c6000_7.3.4/lib" -i"C:/ti/ccsv5/tools/compiler/c6000_7.3.4/include" --reread_libs --rom_model -o "crossCoreAddition.out" $(ORDERED_OBJS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(GEN_SRCS__QUOTED)$(GEN_MISC_FILES__QUOTED)$(C6000_EXECUTABLE_OUTPUTS__QUOTED)$(GEN_OPTS__QUOTED)$(GEN_CMDS__QUOTED) "crossCoreAddition.out"
	-$(RMDIR) $(GEN_MISC_DIRS__QUOTED)
	-$(RM) "src\addMatrices.pp" "src\cache.pp" "src\communication.pp" "src\displayMatrix.pp" "src\dump.pp" "src\fifo.pp" "src\generateMatrices.pp" "src\main.pp" "src\memory.pp" "src\semaphore6678.pp" "src\utils.pp" "generated\Core0.pp" "generated\Core1.pp" "generated\Core2.pp" "generated\Core3.pp" "generated\Core4.pp" "generated\Core5.pp" "generated\Core6.pp" "generated\Core7.pp" 
	-$(RM) "src\addMatrices.obj" "src\cache.obj" "src\communication.obj" "src\displayMatrix.obj" "src\dump.obj" "src\fifo.obj" "src\generateMatrices.obj" "src\main.obj" "src\memory.obj" "src\semaphore6678.obj" "src\utils.obj" "generated\Core0.obj" "generated\Core1.obj" "generated\Core2.obj" "generated\Core3.obj" "generated\Core4.obj" "generated\Core5.obj" "generated\Core6.obj" "generated\Core7.obj" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
