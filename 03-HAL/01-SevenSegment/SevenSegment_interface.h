/* ************************************************************************** */
/***
 * Author   :   Mohamed Elesaily
 * Date     :   8/15/2020       
 * Description :SevenSegment driver for stm32    
*/
/* ************************************************************************** */

typedef enum{
    one = 0b0000110,
    two = 0b1011011,
    three = 0b1001111,
    four = 0b1100110,
    five = 0b1101101,
    six = 0b1111101,
    seven = 0b0000111,
    eight = 0b1111111,
    nine = 0b1101111,

}Digit;


void display(u8 Copy_u8Type, Digit Copy_u8Digit);