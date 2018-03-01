#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char myUniversity[80];
    char pg[]="politechnika";
    char ug[]="uniwersytet";
    char am[]="akademia medyczna";
    char ox[]="oxford";
    printf("At which university do you study? ");
    scanf("%s",myUniversity);

    if(strcmp(pg,myUniversity)==0)
    {
      printf("Very Good choice!\n");
    }else if(strcmp(ug,myUniversity)==0){
        printf("Oh no wrong choice\n");
    }else if(strcmp(am,myUniversity)==0){
        printf("U should die\n");
    }else if(strcmp(ox,myUniversity)==0){
        printf("Are u good that much?\n");
    }else{
        printf("I do not know this place\n");
    }
    return 0;
}
