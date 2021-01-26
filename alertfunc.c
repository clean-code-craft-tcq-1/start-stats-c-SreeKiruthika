#include "alertfunc.h"

int emailAlertCallCount = 0;
int ledAlertCallCount = 0 ;

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
    if ( computedStats.average > maxThreshold)
    {
        int num_func = 2;
        for(int i = 0 ; i < num_func ; i++)
        {
            alerters[i]();
        }
    }
}

void emailAlerter()
{
    /*Increase the Email alert call count */
    if (emailAlertCallCount < MAXCOUNT)
    {
        ++emailAlertCallCount;
    }
}   

void ledAlerter() 
{
    /*Increase the LED alert call count */
    if(ledAlertCallCount < MAXCOUNT)
    {
        ++ledAlertCallCount;
    }
}
