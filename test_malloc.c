#include <stdint.h>
#include <stdio.h>
#include <sys/stat.h>
#include <pwd.h>
#include <unistd.h>
#include <sys/types.h>

int main(void){
	void *test = sbrk(0);

	printf("%p",test);
	
	return 0;
}
