#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int x;
    printf("W jakiej szkole wyzszej studiujesz\n");
    printf("Write 1-PG, 2-UG, 3-AWFIS\n");
    scanf("%i",&x);


    if(x==1){
        printf("You are at pg, good choice\n");
    }else if(x==2){
    printf("You are at ug, soo bad\n");
    }else if(x==3){
    printf("You are at AWFIS, good choice\n");

    }else{
    printf("Thats sad i do not know this place\n");
    }
    return 0;
}
