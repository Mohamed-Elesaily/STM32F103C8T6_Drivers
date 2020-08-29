/***************************************************/
/**
 * Author   :   Mohamed Elesaily
 * Date :   19/8/2020
 * Version  :   V01
*/


/***************************************************/





#ifndef NVIC_INTERFACE_H
#define NVIC_INTERFACE_H
void NVIC_voidInit(void);
void NVIC_voidSetPriority(u8 Copy_PeripheralID ,u8 Copy_u8Priority);
void MNVIC_voidEnableInterrupt(u8 Copy_u8IntNumber);
void MNVIC_voidDisableInterrupt(u8 Copy_u8IntNumber);
void MNVIC_voidSetPendingFlag(u8 Copy_u8IntNumber);
void MNVIC_voidClearPendingFlag(u8 Copy_u8IntNumber);
u8 MNVIC_u8GetActiveFlag(u8 Copy_u8IntNumber);
//void MNVIC_voidSetPriority(s8 Copy_s8IntID, u8 Copy_u8GroupPriority, u8 Copy_u8SubPriority, u32 Copy_u32Group);

#define GROUP3  0X05FA0300  // 4 bits for group (IPR) => group
#define GROUP4  0X05FA0400  // 3 bits for group and 1 bit for sub
#define GROUP5  0X05FA0500  // 2 bits for group and 2 bit for sub
#define GROUP6  0X05FA0600  // 1 bits for group and 3 bit for sub
#define GROUP7  0X05FA0700  // 0 group and 4 bits for sub
#endif
