#include <stdio.h>

int return_number(void);
void print_message(void);
void change_x(void);

int x = 34;

int main(void) {
	x = 50;
	change_x();
	int y = 100;
	int z = get_number();
	printf("x = %d, y = %d, z = %d\n", x, y, z);
	print_message();
	print_message();
	return 0;
}

int get_number(void) {
	int x = 10; // explaining scope
	printf("we got %d\n", x); // this'll use this x, not the one in main()
	puts("we got a number");
	return 9001;
}

void print_message(void) {
	printf("Hello World\n");
}

void change_x(void) {
	int x = 80;
	printf("local x: %d\n", x);
}
