#include <stdio.h>

int main(){
    int i = 1;
    while(i <= 100){ // i가 100보다 작을때 반복, 1에서 100까지 증가하면서 100번 반복
        printf("Hello World! %d\n", i); // Hello World!와 i의 값을 함께 출력
        i++;                            // i를 1씩 증가시킴
    }
    return 0;
}