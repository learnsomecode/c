#include <stdio.h>
#include <string.h>

#define MAX_DATA 512

struct Person {
	char name[MAX_DATA];
	int age;
};

int main() {
	struct Person Josh;

	strcpy(Josh.name, "Josh");
	Josh.age = 16;

	printf("%s is %d years old\n", Josh.name, Josh.age);
}
