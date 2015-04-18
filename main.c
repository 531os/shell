#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i=0;
 printf("Demo is running\n");
 while(i<20){
 i++;
 sleep(1);
 printf("Demo run %d seconds\n",i);
 fflush(stdout);
 }
 printf("a\n");
    return 0;
}
