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

void MNVIC_voidEnableInterrupt(u8 Copy_u8IntNumber){

    if(Copy_u8IntNumber <= 31 ){

        NVIC_ISER0 =( 1 << Copy_u8IntNumber);
    }else if(Copy_u8IntNumber <= 59){
        Copy_u8IntNumber -= 32;
         NVIC_ISER0 =( 1 << Copy_u8IntNumber);
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

        NVIC_ICER0 =( 1 << Copy_u8IntNumber);
    }else if(Copy_u8IntNumber <= 59){
        Copy_u8IntNumber -= 32;
         NVIC_ICER1 =( 1 << Copy_u8IntNumber);
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
        localResult -= 32;
        localResult   = GET_BIT(NVIC_IABR1,Copy_u8IntNumber);
    }else{
        // return error
    }
}