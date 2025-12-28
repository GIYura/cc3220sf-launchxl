#include <stddef.h>
#include <stdint.h>

#include "led.h"
#include "board.h"
#include "delay.h"

int main (void)
{
    Board_Init();

    Led_t* ledGreenExt = Board_GetLed(BOARD_LED_GREEN_EXT);
    Led_t* ledGreen = Board_GetLed(BOARD_LED_GREEN);
    Led_t* ledYellow = Board_GetLed(BOARD_LED_YELLOW);
    Led_t* ledRed = Board_GetLed(BOARD_LED_RED);

    while (1)
    {

        LedToggle(ledGreenExt);
        LedToggle(ledGreen);
        LedToggle(ledYellow);
        LedToggle(ledRed);

        DelayMs(100);
    }

    return 0;
}

