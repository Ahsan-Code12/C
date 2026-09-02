#include <stdio.h>

int func(int param1, int param2){
    for(int i = 0; i <= param1 + param2;i++){
        printf("%d ",i * param1 - param2);
    }
}

int main() {

    int parameter1 = 5;
    int parameter2 = 3;

    
    printf("hello, World!\n");
    func(parameter1, parameter2);
    return 0;
}