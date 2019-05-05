
#include "mcc_generated_files/system.h"
#include "mcc_generated_files/sccp4_compare.h"
#include <stdio.h>
#include "pliki/delay.h"

/*
                         Main application
 */
int main(void)
{
    // initialize the device
    SYSTEM_Initialize();
    printf("\n\r program test PWM \n\r");
    SCCP4_COMPARE_Stop();
    
    while (1)
    {
        delayMs(100);
        //SCCP4_COMPARE_Start();
        //delayMs(100);
        //SCCP4_COMPARE_Stop();
        //SCCP4_COMPARE_Start();
        //delayMs(100);
        
        
        
    }
    return 1; 
}
/**
 End of File
*/

