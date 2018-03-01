#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
  char myUniversity [80];
  char kierunek [80];
  char pg1[]="Physics";
  char pg[]= "politechnika";
  printf("At which university do you study? ");
  scanf("%s", myUniversity);
  printf("What do you study? ");
  scanf("%s", kierunek);
    if(strcmp(pg,myUniversity )==0)
    {
    printf ("Very good choice ! Welcome !\n");
    } else {
    printf (" I do not know this place .\n");
    }
    if(strcmp(pg1,kierunek)==0)
    {
        printf("Good choice!\n");
    }else{
    printf("DUNNO\n");
    }
    return 0;
}
