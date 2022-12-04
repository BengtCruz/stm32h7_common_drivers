################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/gpioh.c \
../Src/main.c \
../Src/syscalls.c \
../Src/sysmem.c 

OBJS += \
./Src/gpioh.o \
./Src/main.o \
./Src/syscalls.o \
./Src/sysmem.o 

C_DEPS += \
./Src/gpioh.d \
./Src/main.d \
./Src/syscalls.d \
./Src/sysmem.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o Src/%.su: ../Src/%.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DNUCLEO_H745ZI_Q -DSTM32 -DSTM32H745ZITx -DSTM32H7DUAL -DSTM32H7 -DCORE_CM4 -DCORE_CM7 -c -I../Inc -I"C:/ST/STM32Cube_FW_H7_V1.10.0/Drivers/CMSIS/Device/ST/STM32H7xx/Include" -I"C:/ST/STM32Cube_FW_H7_V1.10.0/Drivers/CMSIS/Include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src

clean-Src:
	-$(RM) ./Src/gpioh.d ./Src/gpioh.o ./Src/gpioh.su ./Src/main.d ./Src/main.o ./Src/main.su ./Src/syscalls.d ./Src/syscalls.o ./Src/syscalls.su ./Src/sysmem.d ./Src/sysmem.o ./Src/sysmem.su

.PHONY: clean-Src

