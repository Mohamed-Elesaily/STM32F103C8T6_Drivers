/***************************************************/
/**
 * Author   :   Mohamed Elesaily
 * Date :   19/8/2020
 * Version  :   V01
*/


/***************************************************/


#include"STD_TYPES.h"
#include"BIT_MATH.h"
#include"NVIC_interface.h"
#include"NVIC_private.h"
#include"NVIC_config.h"

void NVIC_voidInit(void){
#define SCB_AIRCR *((volatile u32 *)(0xE000ED00 + 0x0c))
	SCB_AIRCR = NVIC_GROUP_SUB_DISTREBUTION;

}
void NVIC_voidSetPriority(u8 Copy_PeripheralID ,u8 Copy_u8Priority){
	if(Copy_PeripheralID < 60){
		NVIC_IPR[Copy_PeripheralID] = Copy_u8Priority;
	}else{

	}
}
void MNVIC_voidEnableInterrupt(u8 Copy_u8IntNumber){

    if(Copy_u8IntNumber <= 31 ){

        NVIC_ISER0 =( 1 << Copy_u8IntNumber);
    }else if(Copy_u8IntNumber <= 59){
        Copy_u8IntNumber -= 32;
         NVIC_ISER1 =( 1 << Copy_u8IntNumber);
    }else{
        // return error
    }
}
void MNVIC_voidDisableInterrupt(u8 Copy_u8IntNumber){
      if(Copy_u8IntNumber <= 31 ){

        NVIC_ICER0 =( 1 << Copy_u8IntNumber);
    }else if(Copy_u8IntNumber <= 59){
        Copy_u8IntNumber -= 32;
        NVIC_ICER1 =( 1 << Copy_u8IntNumber);
    }else{
        // return error
    } 
}

void MNVIC_voidSetPendingFlag(u8 Copy_u8IntNumber){

    if(Copy_u8IntNumber <= 31 ){

    	NVIC_ISPR0 =( 1 << Copy_u8IntNumber);
    }else if(Copy_u8IntNumber <= 59){
        Copy_u8IntNumber -= 32;
        NVIC_ISPR1 =( 1 << Copy_u8IntNumber);
    }else{
        // return error
    }
}


void MNVIC_voidClearPendingFlag(u8 Copy_u8IntNumber){

    if(Copy_u8IntNumber <= 31 ){

        NVIC_ICPR0 =( 1 << Copy_u8IntNumber);
    }else if(Copy_u8IntNumber <= 59){
        Copy_u8IntNumber -= 32;
         NVIC_ICPR1 =( 1 << Copy_u8IntNumber);
    }else{
        // return error
    }
}

u8 MNVIC_u8GetActiveFlag(u8 Copy_u8IntNumber){
u8 localResult;

  if(Copy_u8IntNumber <= 31 ){

        localResult   = GET_BIT(NVIC_IABR0,Copy_u8IntNumber);
    }else if(Copy_u8IntNumber <= 59){
    	Copy_u8IntNumber -= 32;
        localResult   = GET_BIT(NVIC_IABR1,Copy_u8IntNumber);

    }else{
        // return error
    }
  return localResult;
}

//
//void MNVIC_voidSetPriority(s8 Copy_s8IntID, u8 Copy_u8GroupPriority, u8 Copy_u8SubPriority, u32 Copy_u32Group){
//
//    // core peripheral
//    u8 Local_u8Priority = Copy_u8SubPriority | (Copy_u8GroupPriority<<((Copy_u8Group - 0X05FA0300)/256));
//
//    //external peripheral
//    if(Copy_s8IntID >= 0){
//        NVIC_IPR[Copy_s8IntID] = Local_u8Priority << 4;
//
//    }else if(Copy_s8IntID < 0){
//
//    }
//    SCB_AIRCR = Copy_u32Group;
//}
