#include "main.h"

int main(void)
{
    /***********************初始化代码***********************/
    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); // 设置系统中断优先级分组2
    delay_init(168);                                // 延时初始化
    uart1_Init(115200);                             // 串口1初始化
    SEGGER_RTT_Init();  //初始化 RTT 控制块。
    usmart_init(168);   //usmart初始化
    /***********************初始化完成***********************/

    char *buf1 = "HI!";
    while (1)
    {
        RTT_printf(1, "[error]:%s\r\n",buf1);

        RTT_printf(2, "[a]:11\r\n");

        delay_ms(1000);
    }
}
