#include <stdio.h>

char user_input;
int count = 0; 

int main(){

    printf("Welcome to the 1K counter, press 'y' to continue!");
    scanf("%c", &user_input);

    if (user_input == 'y'){
        count += 2; 

    }

}