#include "alertfunc.h"

int emailAlertCallCount = 0;
int ledAlertCallCount = 0 ;

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
    if ( computedStats.max > maxThreshold)
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
    
  /*function for email alerts
    char cmd[100];
    char mail_to[] = "sk123@gmail.com";
    FILE *fp = fopen(mail_file, "w");
    fprintf(fp, "Threshold reached");
    fclose(fp);
    sprintf(cmd, "sendmail %s %s", to , mail_file);
    system(cmd); */
}   

void ledAlerter() 
{
    /*Increase the LED alert call count */
    if(ledAlertCallCount < MAXCOUNT)
    {
        ++ledAlertCallCount;
    }
    int i = 0;
    int wait_count = 1000;
    bool ledblink = 1; // Turn ON LED
    /*Wait time loop*/
    while(i < wait_count)
    {
        i++;
    }
    ledblink = 0 ; //Turn OFF LED 
}
