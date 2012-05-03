#include <stdio.h>
#include <string.h>

int main(int argc, const char** argv){
	char name[1024];

	if(argc >= 2){
		strcpy(name, argv[1]);
	}else{
		scanf("%s", name);
	}

	int result = printf("Hello, %s\n", name);
	return result >= 0 ? 0 : result;
>>>>>>> feature/stdin
}
