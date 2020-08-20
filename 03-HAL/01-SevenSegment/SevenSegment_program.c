/* ************************************************************************** */
/***
 * Author   :   Mohamed Elesaily
 * Date     :   8/15/2020       
 * Description :SevenSegment driver for stm32    
*/
/* ************************************************************************** */
#include"STD_TYPES.h"
#include"BIT_MATH.h"
#include"RCC_interface.h"
#include"GPIO_interface.h"
#include"SevenSegment_interface.h"
void display(u8 Copy_u8Type, Digit Copy_u8Digit){
    RCC_voidEnableClock(RCC_APB2, 2);
    GPIO_voidSetPinDirection(GPIOA, PIN0, OUTPUT_SPEED_2MHZ_PP);
    GPIO_voidSetPinDirection(GPIOA, PIN1, OUTPUT_SPEED_2MHZ_PP);
    GPIO_voidSetPinDirection(GPIOA, PIN2, OUTPUT_SPEED_2MHZ_PP);
    GPIO_voidSetPinDirection(GPIOA, PIN3, OUTPUT_SPEED_2MHZ_PP);
    GPIO_voidSetPinDirection(GPIOA, PIN4, OUTPUT_SPEED_2MHZ_PP);
    GPIO_voidSetPinDirection(GPIOA, PIN5, OUTPUT_SPEED_2MHZ_PP);
    GPIO_voidSetPinDirection(GPIOA, PIN6, OUTPUT_SPEED_2MHZ_PP);

    if(Copy_u8Type == 'C'){

    GPIO_voidSetPinValue(GPIOA, PIN0,  GET_BIT(Copy_u8Digit, PIN0));
    GPIO_voidSetPinValue(GPIOA, PIN1,  GET_BIT(Copy_u8Digit, PIN1));
    GPIO_voidSetPinValue(GPIOA, PIN2,  GET_BIT(Copy_u8Digit, PIN2));
    GPIO_voidSetPinValue(GPIOA, PIN3,  GET_BIT(Copy_u8Digit, PIN3));
    GPIO_voidSetPinValue(GPIOA, PIN4,  GET_BIT(Copy_u8Digit, PIN4));
    GPIO_voidSetPinValue(GPIOA, PIN5,  GET_BIT(Copy_u8Digit, PIN5));
    GPIO_voidSetPinValue(GPIOA, PIN6,  GET_BIT(Copy_u8Digit, PIN6));

}else if(Copy_u8Type == 'A'){
    GPIO_voidSetPinValue(GPIOA, PIN0,  GET_BIT(~(Copy_u8Digit), PIN0));
    GPIO_voidSetPinValue(GPIOA, PIN1,  GET_BIT(~(Copy_u8Digit), PIN1));
    GPIO_voidSetPinValue(GPIOA, PIN2,  GET_BIT(~(Copy_u8Digit), PIN2));
    GPIO_voidSetPinValue(GPIOA, PIN3,  GET_BIT(~(Copy_u8Digit), PIN3));
    GPIO_voidSetPinValue(GPIOA, PIN4,  GET_BIT(~(Copy_u8Digit), PIN4));
    GPIO_voidSetPinValue(GPIOA, PIN5,  GET_BIT(~(Copy_u8Digit), PIN5));
    GPIO_voidSetPinValue(GPIOA, PIN6,  GET_BIT(~(Copy_u8Digit), PIN6));

}

}