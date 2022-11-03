#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>

int nbits (int m) {
    int n = 0;
    while (m >>= 1)
        n++;
    return n + 1;
}

int main(){
    FILE *constFile;
    char str[30];
    constFile = fopen("binary.h","w");
    
    for(int i=0; i<256;i++){
        unsigned char bytes[nbits(i)];
        fputs("#define ",constFile);
        sprintf(str,"%d ",i);
        fputs(str, constFile);
        int var = 256;
        for(int j = 0; j<=8; j++){
            if (i & var)     
                    bytes[j]=1;
                else
                    bytes[j]=0; 
            var >>= 1;   
        }
        for(int j = 1; j<=8; j++){
            sprintf(str,"%d",bytes[j]);
            fputs(str, constFile);      
        }
        fputs("\n", constFile);
    }
}
