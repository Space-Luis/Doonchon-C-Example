#include <stdio.h> 

int main(){ 

    int num1 = 1;
    int num2 = 1;

    num1 =+ 2; // num1에 2를 더한 값을 num1에 다시 저장
    num2 =- 2; // num2에서 2를 뺀 값을 다시 num2에 저장

    printf("%d\n", num1); //  3
    printf("%d\n", num2); // -1

    return 0;
}