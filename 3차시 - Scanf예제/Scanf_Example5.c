#include <stdio.h> 

int main(){ 
    
    char c1[99];

    printf("문자열을 입력하세요: ");
    scanf("%s",  &c1);            // 문자열을 입력받아서 변수에 저장

    printf("%s\n", c1);           // 변수의 내용을 출력
    return 0;
}