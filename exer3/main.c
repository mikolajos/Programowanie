#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char myUniversity [80];
    char pg[]="politechnika";
    char ug[]="uniwersytet";
    char pg1[]="pg";
    printf("Which university u study? ");
    scanf("%s",myUniversity);

    if(strcmp(pg,myUniversity)==0){
        printf("Very good choice!Welcome!\n");
        char myStudy[80];
        char ph[]="Physics";
        printf("What do you study? ");
        scanf("%s",myStudy);
        if(strcmp(ph,myStudy)==0){
            printf("That is very good decision");
        }else{
            printf("U should switch to Physics");
        }

    }else if(strcmp(ug,myUniversity)==0){
    printf("Oh no wrong choice!");
    }else if(strcmp(pg1,myUniversity)==0){
      printf("Very good choice!Welcome!\n");
        char myStudy[80];
        char ph[]="Physics";
        printf("What do you study? ");
        scanf("%s",myStudy);
        if(strcmp(ph,myStudy)==0){
            printf("That is very good decision");
        }else{
            printf("U should switch to Physics");
        }

    }else{
    printf("Do not know places!");
    }

    return 0;
}
