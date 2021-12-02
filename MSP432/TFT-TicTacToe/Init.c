/*
 * Init.c
 *
 * Brief - Consists of functions that are necessary to initialise the MSP432 and TFT
 * Authors -
 *           a. Santhosh, santhosh@colorado.edu
 *           b. Jahnavi Pinnamaneni, jahnavi.pinnamaneni@colorado.edu
 *           c. Deekshith Reddy Patil, patil.deekshithreddy@colorado.edu
 */

#include "Init.h"

//Refer "Init.h" for function description
void boardInit()
{
    FPU_enableModule();
}

//Refer "Init.h" for function description
void clockInit(void)
{
    /* 2 flash wait states, VCORE = 1, running off DC-DC, 48 MHz */
    FlashCtl_setWaitState(FLASH_BANK0, 2);
    FlashCtl_setWaitState(FLASH_BANK1, 2);
    PCM_setPowerState(PCM_AM_DCDC_VCORE1);
    CS_setDCOCenteredFrequency(CS_DCO_FREQUENCY_48);
    CS_setDCOFrequency(48000000);
    CS_initClockSignal(CS_MCLK, CS_DCOCLK_SELECT, 1);
    CS_initClockSignal(CS_SMCLK, CS_DCOCLK_SELECT, 1);
    CS_initClockSignal(CS_HSMCLK, CS_DCOCLK_SELECT, 1);

    return;
}

//Refer "Init.h" for function description
void System_Init()
{
        WDT_A_hold(WDT_A_BASE);

        /* Initialize the demo. */
        boardInit();
        clockInit();
        initializeButtons();

        /* Globally enable interrupts. */
        __enable_interrupt();

        // LCD setup using Graphics Library API calls
        Kitronix320x240x16_SSD2119Init();
        Graphics_initContext(&g_sContext, &g_sKitronix320x240x16_SSD2119);
        Graphics_setBackgroundColor(&g_sContext, GRAPHICS_COLOR_BLACK);
        Graphics_setFont(&g_sContext, &g_sFontCmss20b);
        Graphics_clearDisplay(&g_sContext);

        touch_initInterface();
}
