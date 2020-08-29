/* ********************************************************* */

/***
 * Author : Mohamed ELesaily
 * Date   : 28/8/2020
 * Version : 01V 
*/

/* ********************************************************* */

#ifndef SW_INTERFACE_H
#define SW_INTERFACE_H

#define PULL_UP 1
#define PULL_DOWN 0

void SW_voidEnable(u8 Copy_GPIO, u8 Copy_PIN, u8 Copy_Type);
u8 SW_u8Read(u8 Copy_GPIO, u8 Copy_PIN);

#endif