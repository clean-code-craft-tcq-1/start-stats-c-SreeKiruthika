#define MAXCOUNT 100

extern int emailAlertCallCount;
extern int ledAlertCallCount;

typedef void (*alerter_funcptr)();

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);

// Alert functions
void emailAlerter();
void ledAlerter();

//End of alert functions

