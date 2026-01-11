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

/* NOTE: this is done for test only */
#if 1
    LedOn(ledGreenExt);
    LedOn(ledGreen);
    LedOn(ledYellow);
    LedOn(ledRed);

    LedOff(ledGreenExt);
    LedOff(ledGreen);
    LedOff(ledYellow);
    LedOff(ledRed);

    LedDeinit(ledGreenExt);
    LedDeinit(ledGreen);
    LedDeinit(ledYellow);
    LedDeinit(ledRed);

    Board_Init();
#endif

    while (1)
    {

        LedToggle(ledGreenExt);
        LedToggle(ledGreen);
        LedToggle(ledYellow);
        LedToggle(ledRed);

        DelayMs(50);
    }

    return 0;
}

