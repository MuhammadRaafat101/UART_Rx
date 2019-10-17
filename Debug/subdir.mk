################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../AGILE_REQ1.c \
../DIO.c \
../DIO_cnfg.c \
../LCD.c \
../UART.c \
../UART_Confg.c \
../keypad.c 

OBJS += \
./AGILE_REQ1.o \
./DIO.o \
./DIO_cnfg.o \
./LCD.o \
./UART.o \
./UART_Confg.o \
./keypad.o 

C_DEPS += \
./AGILE_REQ1.d \
./DIO.d \
./DIO_cnfg.d \
./LCD.d \
./UART.d \
./UART_Confg.d \
./keypad.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


