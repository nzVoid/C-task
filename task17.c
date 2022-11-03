#include <stdio.h>
#include <limits.h>

int set_bit(int value, int position) {
    return (value ^ (1 << position));
}

int main(){
    size_t x = 253;//число, бит которого нужно изменить
    size_t *y = &x;
    size_t length = CHAR_BIT;//количество бит в байте

    //вывод битов числа
    for (size_t i = 0; i < length; i++){
        printf("%d", (x & (1 << i)) != 0);
    }
    printf("\n");

    x = set_bit(*y, 6);//устанавливаем бит на N место - set_bit(x, N)
    
    for (size_t i = 0; i < length; i++){
        printf("%d", (x & (1 << i)) != 0);
    }
    printf("\n");
}
