#include<stdio.h>
#include<stdbool.h>

int nbits (int m) {
    int n = 0;
    while (m >>= 1)
        n++;
    return n + 1;
}

bool get_bit(int b, int n){
    unsigned char bytes[nbits(b)];
    int i = 256;
	for(int j = 0; j<=8; j++){
		if (b & i)     
			bytes[j]=1;
		else
			bytes[j]=0; 
		i >>= 1;
	}

    for(int j = 1; j<=8; j++){
		printf("%d", bytes[j]);
	}
    printf("\n");
	if(bytes[n]!=0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int number; 
    int num_byte;

    printf("Enter number: ");
    scanf("%d", &number);
    int nb = nbits(number);
    printf("Byte in number: %d", nb);
    printf("\n");
    printf("Enter number of byte: ");
    scanf("%d", &num_byte);

    if (get_bit(number, num_byte)==true){
        printf("Bit is full");
    }
    else{
        printf("Bit is empty");
    }
    printf("\n");
}