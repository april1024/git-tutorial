#include <stdio.h>

int main(int argc, const char** argv){
	const char* name = argc > 1 ? argv[1]: "World";
	printf("Hello, %s\n", name);
	return 0;
}
