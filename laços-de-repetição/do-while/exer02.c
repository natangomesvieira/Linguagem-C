#include <stdio.h>

int main(int argc, char const *argv[]){

    int i=0;
    float A = 5000000, B = 7000000;

    do{
        A += A * 0.03;
        B += B * 0.02;
        i++;
    }while(B > A);

    printf("E necessario %d anos.\n", i);

    return 0;
}
