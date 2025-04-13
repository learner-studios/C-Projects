#include <stdio.h>

int main () {

    int temp;
    printf("What is the weather like today?\n");
    scanf("%d", &temp);

    if (temp >=70){
        printf("Oh my god it's way too hot out there!\n");
    }
    else if(temp >=30 && temp <=69){
        printf("It's kind of mild today\n");
    }
    else {
        printf("It's way too cold today down there\n");
    }
    return 0;
}