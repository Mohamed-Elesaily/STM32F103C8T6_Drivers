#include"STD_TYPES.h"
#include"BIT_MATH.h"

#include"RCC_interface.h"
#include"GPIO_interface.h"
#include"SW_interface.h"

void SW_voidEnable(u8 Copy_GPIO, u8 Copy_PIN, u8 Copy_Type){
    GPIO_voidSetPinDirection(Copy_GPIO, Copy_PIN, INPUT_PULL_UP_DOWN);
    GPIO_voidSetPinValue(Copy_GPIO, Copy_PIN, Copy_Type);
}
u8 SW_u8Read(u8 Copy_GPIO, u8 Copy_PIN){
    return GPIO_u8GetPinValue(Copy_GPIO, Copy_PIN);
;
}