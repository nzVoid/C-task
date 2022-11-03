#include <stdio.h>
int main() {  
    int value;
    printf("Enter a ASCII value: ");
    scanf("%d", &value);  
    
    printf("Char of %d = %c", value, value);
    
    return 0;
}
