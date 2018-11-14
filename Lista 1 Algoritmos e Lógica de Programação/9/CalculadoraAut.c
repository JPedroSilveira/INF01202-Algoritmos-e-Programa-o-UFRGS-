#include<stdio.h>
#include <time.h>

int main()
{
    int totalSegundosDia = 86400;
    time_t mytime = time(NULL);
    struct tm tm = *localtime(&mytime);
    printf("Faltam %d segundos para o fim do dia.", totalSegundosDia - ((((tm.tm_hour)*60 + tm.tm_min) * 60) + tm.tm_sec));
    return 0;
}
