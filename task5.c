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
    int k;
    printf("\n");
    //sort array
    for(int i = 0; i<5;i++){
        for(int j = 0; j<5; j++){
            if(a[j]>a[j+1]){
                k = a[j];
                a[j] = a[j+1];
                a[j+1]=k;
            }
        }
    }
    printf("Sort array: ");
    for(int i = 0; i < 6;i++){  
        printf("%d ", a[i]); 
    }
    printf("\n");

}