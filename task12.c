// #include <stdio.h>
// #include <inttypes.h>
// #include <limits.h>
// int main(){
//     uint8_t x;
//     printf("Enter number: ");
//     scanf("%d", x);
//     printf("\n");
//     int i = 256;
//     //вывод битов числа
//     for(i=sizeof(x)*7; i>=; --i){
//         printf("%d", (x >> i)&1);
//     }
//     printf("\n");
// }
#include <stdio.h>
#include <limits.h>

int checkbit(const int value, const int position) {
	return ((value & (1 << position)) != 0);
}

int setbit(const int value, const int position) {
	return (value | (1 << position));
}

int unsetbit(const int value, const int position) {
	return (value & ~(1 << position));
}

int switchbit(const int value, const int position) {
	return (value ^ (1 << position));
}


void printbits(int n) {
	//CHAR_BIT опеределён в библиотеке limits.h
	//и хранит число бит в байте для данной платформы
	size_t len = CHAR_BIT;
	size_t i;
	for (i = 0; i < len; i++) {
		printf("%d", checkbit(n, i));
	}
	printf("\n");
}

int main() {
	int a;
    scanf("%i", a);
	size_t len = sizeof(int) * CHAR_BIT;
	size_t i;

	printbits(a);
	a = setbit(a, 5);
	printbits(a);
	a = unsetbit(a, 5);
	printbits(a);
	a = switchbit(a, 11);
	printbits(a);
	a = switchbit(a, 11);
	printbits(a);
}