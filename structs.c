#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {
	char *name;
	int age;
	int height;
	int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight) {
	struct Person *who = malloc(sizeof(struct Person));
	assert(who != NULL);

	who->name = strdup(name);
	who->age = age;
	who->height = height;
	who->weight = weight;

	return who;
};

void Person_destroy(struct Person *who) {
	assert(who != NULL);

	free(who->name);
	free(who);
}

void Person_print(struct Person *who) {
	printf("Name: %s\n", who->name);
	printf("Age: %d\n", who->age);
	printf("Height: %d\n", who->height);
	printf("Weight: %d\n", who->weight);
}

int main(int argc, char *argv[]) {
	struct Person *josh = Person_create("josh", 16, 10, 100); // create person 
	printf("Josh at memory location: %p\n", josh);
	Person_print(josh); // print info on me

	josh->age = 5; // i'm 5 again
	
	Person_destroy(josh); // kill me

	return 0;
}
