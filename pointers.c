#include <stdio.h>

int main(int argc, char *argv[]) {
	int a;
	char *names[] = {"josh", "phil"};

	printf("address for a in memory: %d\n", &a);
	printf("address for names: %d", &names);
}