/* 
*   Program Name:   Driver for DHT-11 Temperature and Humidity Sensor
*         Author:   Elena Justo
*
*/

/* Header Files */
#include <main.h>

/* Variables */

/* Function Prototypes */
void turnOnExternalLed();
void listenForButtonPress();

/* HAL Prototypes */
static void MX_GPIO_Init(void);

/* Main Program Function */ 
int main(void){

    /* Main Program Loop */
    while (1){
    }

    return (0);
}

/* GPIO Initialisation */
static void MX_GPIO_Init(void){
  GPIO_InitTypeDef GPIO_InitStruct = {0};
  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOI_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOG_CLK_ENABLE();
  HAL_PWREx_EnableVddIO2();
  __HAL_RCC_GPIOH_CLK_ENABLE();
}

/* Function Definitions */

// Send a signal to a pin to turn on an external LED
void turnOnExternalLed(){

}

// Listen for signals from a pin to detect button pushes
void listenForButtonPress(){

}