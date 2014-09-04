#include <stdio.h>
#import <time.h>

int main() {
	time_t result = time(NULL);
	printf("%s", ctime(&result));
}
