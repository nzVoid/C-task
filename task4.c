#include <stdio.h>
#include <time.h>   
#include <stdlib.h>  

int main(){
    //array init
    int a[5];
    srand(time(NULL));
    for(int i = 0; i < 6;i++){
        a[i] = rand()%20; 
    }
    printf("Array: ");
    for(int i = 0; i < 6;i++){  
        printf("%d ", a[i]); 
    }
    //max element find
    int max = a[0];
    for(int i = 0; i<6;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    printf("\n");
    printf("max element: %d\n", max);
    printf("\n");
    //min element find
    int min = a[0];
    for(int i = 1; i<6;i++){
        if(a[i]<min){
            min = a[i];
        }
    }
    printf("min element: %d\n", min);
    printf("\n");
}