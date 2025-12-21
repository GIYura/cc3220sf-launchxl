#include <stddef.h>
#include <stdint.h>

#include "button.h"
#include "board.h"

static uint8_t m_onButtonSW2Counter = 0;
static uint8_t m_onButtonSW3Counter = 0;

static void OnButtonSW2(void)
{
    ++m_onButtonSW2Counter;
}

static void OnButtonSW3(void)
{
    ++m_onButtonSW3Counter;
}

int main (void)
{
    Board_Init();

    Button_t* buttonSW2 = Board_GetButton(BOARD_BUTTON_SW2);
    Button_t* buttonSW3 = Board_GetButton(BOARD_BUTTON_SW3);

    ButtonRegisterHandler(buttonSW2, OnButtonSW2);
    ButtonRegisterHandler(buttonSW3, OnButtonSW3);

    while (1);

    return 0;
}

