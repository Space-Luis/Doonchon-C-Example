#include <stdio.h> 

int main(){ 

    int num1;

    scanf("%d", &num1); // 입력받은 값을 변수에 저장

    if(num1 == 10){           // 만약 num1의 값이 10이면 
        printf("10입니다.\n"); // 10입니다. 를 출력
    }

    if(num1 == 20){           // 만약 num1의 값이 20이면
        printf("20입니다.\n"); // 20입니다. 를 출력
    }
    
    
    return 0;
}