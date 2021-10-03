#ifndef SOC_H
#define SOC_H
#define SYSTEM_PLIC_SYSTEM_CPU_EXTERNAL_INTERRUPT 0
#define SYSTEM_PLIC_ 1
#define SYSTEM_CLINT_HZ 25000000
#define SYSTEM_UART_A_PARAMETER_UART_CTRL_CONFIG_DATA_WIDTH_MAX 8
#define SYSTEM_UART_A_PARAMETER_UART_CTRL_CONFIG_CLOCK_DIVIDER_WIDTH 12
#define SYSTEM_UART_A_PARAMETER_UART_CTRL_CONFIG_PRE_SAMPLING_SIZE 1
#define SYSTEM_UART_A_PARAMETER_UART_CTRL_CONFIG_SAMPLING_SIZE 3
#define SYSTEM_UART_A_PARAMETER_UART_CTRL_CONFIG_POST_SAMPLING_SIZE 1
#define SYSTEM_UART_A_PARAMETER_UART_CTRL_CONFIG_CTS_GEN 0
#define SYSTEM_UART_A_PARAMETER_UART_CTRL_CONFIG_RTS_GEN 0
#define SYSTEM_UART_A_PARAMETER_UART_CTRL_CONFIG_RX_SAMPLE_PER_BIT 5
#define SYSTEM_UART_A_PARAMETER_INIT_CONFIG_BAUDRATE 115200
#define SYSTEM_UART_A_PARAMETER_INIT_CONFIG_DATA_LENGTH 7
#define SYSTEM_UART_A_PARAMETER_INIT_CONFIG_PARITY NONE
#define SYSTEM_UART_A_PARAMETER_INIT_CONFIG_STOP ONE
#define SYSTEM_UART_A_PARAMETER_BUS_CAN_WRITE_CLOCK_DIVIDER_CONFIG 0
#define SYSTEM_UART_A_PARAMETER_BUS_CAN_WRITE_FRAME_CONFIG 0
#define SYSTEM_UART_A_PARAMETER_TX_FIFO_DEPTH 16
#define SYSTEM_UART_A_PARAMETER_RX_FIFO_DEPTH 16
#define SYSTEM_CPU_D_BUS 0x0
#define SYSTEM_RAM_A_CTRL 0x80000000
#define SYSTEM_BMB_PERIPHERAL_BMB 0xf0000000
#define SYSTEM_PLIC_CTRL 0xf0c00000
#define SYSTEM_CLINT_CTRL 0xf0b00000
#define SYSTEM_GPIO_A_CTRL 0xf0000000
#define SYSTEM_UART_A_CTRL 0xf0010000
#endif
