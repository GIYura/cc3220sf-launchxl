#include <stddef.h>

#include "custom-assert.h"
#include "board.h"
#include "gpio.h"
#include "gpio-name.h"

/* Buttons gpios */
static GpioHandle_t m_gpioButtonSW2;
static GpioHandle_t m_gpioButtonSW3;

/* Buttons */
static Button_t m_buttonSW2;
static Button_t m_buttonSW3;

void Board_Init(void)
{
    const GpioOps_t* ops = GpioGetOps();

    m_gpioButtonSW2.ops = ops;
    m_gpioButtonSW3.ops = ops;

    ButtonInit(&m_buttonSW2, &m_gpioButtonSW2, PIN_GPIOA1_5);
    ButtonInit(&m_buttonSW3, &m_gpioButtonSW3, PIN_GPIOA2_6);

#if 0
NOTE: initialization sequence matters.
1. initialize button gpio
2. enable interrupts
NOTE: bare in mind, an interrupt might be triggered while GPIO is not configured completely yet.
#endif
}

Button_t* Board_GetButton(BOARD_BUTTON_ID id)
{
    ASSERT(id < BOARD_BUTTON_COUNT);

    switch (id)
    {
    case BOARD_BUTTON_SW2:
        return &m_buttonSW2;
        break;

    case BOARD_BUTTON_SW3:
        return &m_buttonSW3;
        break;

    default:
        /* never reach here */
        return NULL;
        break;
    }
}

