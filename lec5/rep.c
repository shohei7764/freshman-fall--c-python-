#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned int roll_dice() {
return rand() % 6;
}

void print_array(unsigned int* arr, size_t size) {
size_t i;
for (i = 0; i < size; i++) {
printf("%dの目：%d\n", i+1, arr[i]);
}
}

int main(void) {
unsigned int count_roll_of_dice[] = { 0, 0, 0, 0, 0, 0 };
size_t i;

srand( (unsigned) time(NULL));

for (i = 0; i < 100; i++) {
count_roll_of_dice[roll_dice()]++;
}
print_array(count_roll_of_dice, sizeof(count_roll_of_dice) / sizeof(unsigned int));

return 0;
}