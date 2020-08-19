#include <stdio.h>

int main(){
/*  for(초기식; 조건식; 변화식){
        반복할 코드    
    } */

    for(int i = 0; i < 100; i++){ //i 에 0을 저장후 i 가 100 미만이면 1씩 늘리는 코드
        printf("hello world!\n"); // i 가 1씩 커지면서 100미만일때까지 반복
    }
    
    return 0;
}