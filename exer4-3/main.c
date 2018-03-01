#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int x;
    printf("At which university do you study?\n ");
    printf("1-politechnika, 2-uniwersytet\n");
    scanf("%i",&x);

    switch(x){
    case 1:
        printf("You are at PG! Good choice!\n");
        break;
    case 2:
        printf("You are at UG... Thats so bad!\n");
        break;

    default:
        printf("That is sad, i do not know this place....\n");
  //Po usunieciu break program wyswietli wszystkie odpowiedzi poza ta wybran¹

    }
    return 0;
}
