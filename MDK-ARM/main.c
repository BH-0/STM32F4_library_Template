#include "main.h"

int main(void)
{
    /***********************��ʼ������***********************/
    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); // ����ϵͳ�ж����ȼ�����2
    delay_init(168);                                // ��ʱ��ʼ��
    uart1_Init(115200);                             // ����1��ʼ��
    SEGGER_RTT_Init();  //��ʼ�� RTT ���ƿ顣
    usmart_init(168);   //usmart��ʼ��
    /***********************��ʼ�����***********************/

    char *buf1 = "HI!";
    while (1)
    {
        RTT_printf(1, "[error]:%s\r\n",buf1);

        RTT_printf(2, "[a]:11\r\n");

        delay_ms(1000);
    }
}
