// #include <stdio.h>
// #include <stdbool.h>
// int main(){
// 	int i, N;
// 	N = 9;
// 	i = 256;

// 	while (true) {
// 		if (N & i)     
// 			printf("1");
// 		else
// 			printf("0"); 
// 		if (i == 1)       
// 			break;
// 		i >>= 1;
// 	}
// 	printf("\n");
// }




#include <stdio.h>
#include <stdbool.h>

int nbits (int m) {
    int n = 0;
    while (m >>= 1)
        n++;
    return n + 1;
}
int main(){
	int i, N;
	N = 5;
	i = 256;
	unsigned char bytes[nbits(N)];
	for(int j = 0; j<=8; j++){
		if (N & i)     
			bytes[j]=1;
		else
			bytes[j]=0; 
		i >>= 1;
	}
	for(int j = 1; j<=8; j++){
		printf("%d", bytes[j]);
	}
	printf("\n");
}