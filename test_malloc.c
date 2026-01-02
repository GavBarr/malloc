#include "malloc.h"
#include <stdio.h>
#include <string.h>

int main(void){
	
	char *p = my_malloc(64);

	printf("%p\n",p);
	strcpy(p, "Testing!");
	printf("%s\n",p);

	printf("\n");

	char *p1 = my_malloc(128);

	printf("%p\n",p1);
	strcpy(p1, "Testing Again!");
	printf("%s\n",p1);


	my_free(p1);

	char *p2 = my_malloc(64);
	printf("%p\n",p2);
        strcpy(p2, "After my_free()!");
        printf("%s\n",p2);

	printf("\n");
	my_free(p);
	return 0;
}
