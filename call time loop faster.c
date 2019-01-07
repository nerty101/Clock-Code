
#include <stdio.h>
#include <time.h> //for sleep() function
#include <stdlib.h>
#include <windows.h>
int main()
{
int second = 0;
time_t rawtime;
struct tm * timeinfo;
do{
time ( &rawtime );
timeinfo = localtime ( &rawtime );
printf ( "Current local time and date: %s", asctime (timeinfo) );
Sleep (950);
system("cls");
++second;
} while (second != 60000000);
return 0;
}
