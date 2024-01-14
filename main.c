#include <stdio.h>



int x = 2;


int main(void){

    const int* s = &x;
    

    *(int*)s = 5;
    
}

void addedFunc(void){
    
}
