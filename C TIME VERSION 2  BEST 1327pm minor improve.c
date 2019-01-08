
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
    int a = 0, alm = 0, a2 = 0;
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
        printf("Press (1) to set C Clock, (2) to start C Timer, (3) to continue with called time\n\n");
        scanf(" %d", &ans4);
        printf("\nWould you like to set an alarm? Enter (1) for yes, any other key for no\n\n\n");
        scanf(" %d", &ans5);
        }
        system("cls");
        time ( &rawtime );
        timeinfo = localtime ( &rawtime );
        printf ( "Current local time and date: %s", asctime (timeinfo) );
        printf("\n\n\n");
        if (((a < 1) && (ans5 == 1)) &&  ((ans4 == 1) || (ans4 == 3)))
        {
        printf("00:00:00\n\n");
        printf("Set time in Hours\n\n");
        scanf(" %d", &ans2);
        hour = ans2;
        ++a;
        system("cls");
        if (a < 2)
        time ( &rawtime );
        timeinfo = localtime ( &rawtime );
        printf ( "Current local time and date: %s", asctime (timeinfo) );
        printf("\n\n\n");
        ++a;
        if (ans2 < 10)
        printf("0%d:00:00\n\n", ans2);
        if (ans2 > 9)
        printf("%d:00:00\n\n", ans2);
        printf("\nSet time in Minutes\n\n");
        scanf(" %d", &ans3);
        minute = ans3;
        system("cls");
        if (a < 3)
        time ( &rawtime );
        timeinfo = localtime ( &rawtime );
        printf ( "Current local time and date: %s", asctime (timeinfo) );
        printf("\n\n\n");
        ++a;
        if ((ans2 < 10) && (ans3 < 10))
        printf("0%d:0%d:00\n\n", ans2, ans3);
        if ((ans2 < 10) && (ans3 > 9))
        printf("0%d:%d:00\n\n", ans2, ans3);
        if ((ans2 > 9) && (minute < 10))
        printf("%d:0%d:00\n\n", ans2, ans3);
        if ((ans2 > 9) && (minute > 9))
        printf("%d:0%d:00\n\n", ans2, ans3);
        printf("\nSet Seconds\n\n\n");
        scanf(" %d", &ans8);
        second = ans8;
        system("cls");
        }
        if (a2 < 1)
        {
        printf("\nTime Set:");
        if ((hour < 10) && (minute < 10) && (second < 10))
        printf(  "0%d:0%d:0%d\n\n\n\n", hour, minute ,second);
        if ((hour < 10) && (minute < 10) && (second > 9))
        printf(  "0%d:0%d:%d\n\n\n\n", hour, minute, second);
        if ((hour < 10) && (minute > 9) && (second < 10))
        printf(  "0%d:%d:0%d\n\n\n\n", hour, minute, second);
        if ((hour < 10) && (minute > 9) && (second > 9))
        printf("  0%d:%d:%d\n\n\n\n", hour, minute, second);
        if ((hour > 9) && (minute < 10) && (second < 10))
        printf("  %d:0%d:0%d\n\n\n\n", hour, minute, second);
        if ((hour > 9) && (minute < 10) && (second > 9))
        printf("  %d:0%d:%d\n\n\n\n", hour, minute, second);
        if ((hour > 9) && (minute > 9) && (second < 10))
        printf("  %d:%d:0%d\n\n\n\n", hour, minute, second);
        if ((hour > 9) && (minute > 9) && (second > 9))
        printf("  %d:%d:%d\n\n\n\n", hour, minute, second);
        printf("\n\n");
        }
        if (ans5 == 1)
        {
        if (a < 4)
        {
        printf("00:00:00\n\n");
        printf("Set Alarm Hour\n\n");

        scanf(" %d", &ans6);
        ++a;
        system("cls");
        if (a < 5)
        {
        ++a;
        if (ans6 < 10)
        printf("0%d:00:00\n\n", ans6);
        if (ans6 > 9)
        printf("%d:00:00\n\n", ans2);
        printf("\nSet Alarm Minutes\n\n");
        scanf(" %d", &ans7);
        system("cls");
        }
        }
        }
        if (ans4 == 1)
        {
        printf("\n\n\nC CLOCK\n\n\n");
        }
        if (ans4 == 2)
        {
        printf("\n\n\nC TIMER\n\n\n");
        }
        if (ans4 != 3)
        {
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
        }
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
        Sleep (910);//933.5 FEW SEC TOO FAST AFTER HOUR AND HALF 943 0R 970 GOOD (POWER SETTING, PERFORMANCE), 970 GOOD 969 2 SEC TOO SLOW AFTER APPROX. 1HR 15 MINS 968 967 OR 968 967 FAST
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
        if ((second < 18) && (hour == ans6) && (minute == ans7) && (ans5 == 1))//or take out ans5 use second < 15 maybe put back other way?
        {
        ++alm;
        Beep (700, 1000);
        ++second;
        }
        ++a;
        system("cls");
        ++a2;
        } while (hour != 100000);
        return 0;
        }
