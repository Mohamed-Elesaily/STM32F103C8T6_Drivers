/***************************************************/
/**
 * Author   :   Mohamed Elesaily
 * Date :   19/8/2020
 * Version  :   V01
*/


/***************************************************/





#ifndef NVIC_PRIVATE_H
#define NVIC_PRIVATE_H

#define NVIC_ADDRESS 0xE000E100

#define NVIC_ISER0 (*(volatile u32 *)(NVIC_ADDRESS + 0x000)) /* Enable external interrupt from  0 to 31*/
#define NVIC_ISER1 (*(volatile u32 *)(NVIC_ADDRESS + 0x004))  /* Enable external interrupt from  32 to 63*/
#define NVIC_ISER2 (*(volatile u32 *)(NVIC_ADDRESS + 0x008))

#define NVIC_ICER0 (*(volatile u32 *)(NVIC_ADDRESS + 0x080))
#define NVIC_ICER1 (*(volatile u32 *)(NVIC_ADDRESS + 0x084))
#define NVIC_ICER2 (*(volatile u32 *)(NVIC_ADDRESS + 0x088))

#define NVIC_ISPR0 (*(volatile u32 *)(NVIC_ADDRESS + 0x100))
#define NVIC_ISPR1 (*(volatile u32 *)(NVIC_ADDRESS + 0x104))
#define NVIC_ISPR2 (*(volatile u32 *)(NVIC_ADDRESS + 0x108))

#define NVIC_ICPR0 (*(volatile u32 *)(NVIC_ADDRESS + 0x180))
#define NVIC_ICPR1 (*(volatile u32 *)(NVIC_ADDRESS + 0x184))
#define NVIC_ICPR2 (*(volatile u32 *)(NVIC_ADDRESS + 0x188))

#define NVIC_IABR0 (*(volatile u32 *)(NVIC_ADDRESS + 0x200))
#define NVIC_IABR1 (*(volatile u32 *)(NVIC_ADDRESS + 0x204))
#define NVIC_IABR2 (*(volatile u32 *)(NVIC_ADDRESS + 0x208))

#define NVIC_IPR    ((volatile u8 *)(NVIC_ADDRESS + 0x300))



#define NVIC_GROUP_4_SUB_0  0x05fa0300
#define NVIC_GROUP_3_SUB_1	0x05fa0400
#define NVIC_GROUP_2_SUB_2	0x05fa0500
#define NVIC_GROUP_1_SUB_3	0x05fa0600
#define NVIC_GROUP_0_SUB_4	0x05fa0700








#endif