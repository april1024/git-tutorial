#include <stdio.h>

int main(int argc, const char** argv){
	const char* name = argc > 1 ? argv[1]: "World";
	int result = printf("Hello, %s\n", name);
	return result >= 0 ? 0 : result;
}
