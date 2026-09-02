#include <stdio.h>

int squareofvar(int var){
    for(int i = 1;i <= var;i++){
        return var * var;
    }
}

int main() {
    int var;
    printf("Enter a number: ");
    scanf("%d", &var);

    int response = squareofvar(var);


    printf("%d\n", response);
}