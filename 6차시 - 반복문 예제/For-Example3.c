#include <stdio.h>

int main(){

    int input;

    scanf("%d", &input); //값을 입력받음 

    for(int i = 0; i < input; i++){ // 0부터 입력받은 값보다 작을때 까지 반복 
        printf("hello world! %d\n", i); 
    }
    
    return 0;
}