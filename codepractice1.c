#include<stdio.h>
int main()   {

   int seconds,hours,minutes,remainingseconds;

   printf("Enter the time interval in seconds:");
   scanf("%d", &seconds);

   hours = seconds / 3600 ;
   minutes = (seconds % 3600) / 60 ;
   remainingseconds = (seconds % 3600) % 60 ;
   
   printf("%d hour %d minute %d second", hours,minutes,remainingseconds);
   
   return 0;

   }