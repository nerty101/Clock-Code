
#include <stdio.h>
#include <time.h> //for sleep() function
#include <stdlib.h>
#include <windows.h>
int main()
{
    int second = 0;
    int minute = 0;
    int hour = 0;
    int ans2 = 0, ans3 = 0, ans4 = 0, ans5 = 0, ans6 = 0, ans7 = 0, ans8 = 0;
    int a = 0, alm = 0;
    time_t rawtime;
    struct tm * timeinfo;

        do
        {
        time ( &rawtime );
        timeinfo = localtime ( &rawtime );
        printf ( "Current local time and date: %s", asctime (timeinfo) );
        printf("\n\n\n");
        if (a < 1)
        {
        printf("Welcome to C Time!\n\n\n");
        printf("When you enter details, called time, at top of screen, will update in C Time!\n");
        printf("C Time count depends on speed PC is running at!\n\n");
        printf("Press (1) to set C Clock, (2) to start C Timer\n\n");
        scanf(" %d", &ans4);
        }
        if (ans4 == 1)
        {
        printf("\n\n\nC CLOCK\n\n\n");
        if (a < 1)
        {
        printf("Set Hour\n\n");
        scanf(" %d", &ans2);
        hour = ans2;
        printf("\nSet Minutes\n\n");
        scanf(" %d", &ans3);
        minute = ans3;
        printf("\nSet Seconds\n\n\n");
        scanf(" %d", &ans8);
        second = ans8;
        }
        }
        if (ans4 == 2)
        {
        printf("\n\n\nC TIMER\n\n\n");
        }
        if (a < 1)
        {
        printf("\n\n");
        printf("Would you like to set an alarm? (1) for yes, any other key for no\n\n\n");
        scanf(" %d", &ans5);
        if (ans5 == 1)
        {
        printf("\nSet Hours\n\n");
        scanf(" %d", &ans6);
        printf("\nSet Minutes\n\n\n");
        scanf(" %d", &ans7);
        }
        }
        if ((hour < 10) && (minute < 10) && (second < 10))
        printf("0%d:0%d:0%d\n\n\n\n", hour, minute ,second);
        if ((hour < 10) && (minute < 10) && (second > 9))
        printf("0%d:0%d:%d\n\n\n\n", hour, minute, second);
        if ((hour < 10) && (minute > 9) && (second < 10))
        printf("0%d:%d:0%d\n\n\n\n", hour, minute, second);
        if ((hour < 10) && (minute > 9) && (second > 9))
        printf("0%d:%d:%d\n\n\n\n", hour, minute, second);
        if ((hour > 9) && (minute < 10) && (second < 10))
        printf("%d:0%d:0%d\n\n\n\n", hour, minute, second);
        if ((hour > 9) && (minute < 10) && (second > 9))
        printf("%d:0%d:%d\n\n\n\n", hour, minute, second);
        if ((hour > 9) && (minute > 9) && (second < 10))
        printf("%d:%d:0%d\n\n\n\n", hour, minute, second);
        if ((hour > 9) && (minute > 9) && (second > 9))
        printf("%d:%d:%d\n\n\n\n", hour, minute, second);
        if (ans5 == 1)
        {
        printf("Alarm Set:");
        if ((ans6 < 10) && (ans7 < 10))
        printf("  0%d:0%d:00\n\n\n\n", ans6, ans7);
        if ((ans6 < 10) && (ans7 > 9))
        printf("  0%d:%d:00\n\n\n\n", ans6, ans7);
        if ((ans6 > 9) && (ans7 < 10))
        printf("  %d:0%d:00\n\n\n\n", ans6, ans7);
        if ((ans6 > 9) && (ans7 > 9))
        printf("  %d:%d:00\n\n\n\n", ans6, ans7);
        }
        Sleep (942);//933.5 FEW SEC TOO FAST AFTER HOUR AND HALF 943 0R 970 GOOD (POWER SETTING, PERFORMANCE), 970 GOOD 969 2 SEC TOO SLOW AFTER APPROX. 1HR 15 MINS 968 967 OR 968 967 FAST
        ++second;
        if (second > 59)
        {
        minute += 1;
        second = 0;
        }
        if (minute > 59)
        {
        hour += 1;
        Beep (800, 1000);// beep was 550 Hz.
        ++second;
        minute = 0;
        }
        if (hour == 24)
        {
        hour = 0;
        minute = 0;
        second = 0;
        }
        if ((second < 15) && (hour == ans6) && (minute == ans7))//or take out ans5 use second < 15 maybe put back other way?
        {
        ++alm;
        Beep (700, 1000);
        ++second;
        }
        //if (alm > 14) , this is for ans5 instead of seconds
        //{
        //ans5 = 0;
        //}
        system("cls");
        ++a;
        } while (hour != 1000000);
        return 0;
        }
