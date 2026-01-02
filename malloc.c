//malloc.c
#include <stdio.h>
#include <sys/stat.h>
#include <pwd.h>
#include <unistd.h>
#include <malloc.h>

//header
//[size, is_free, next, optional]

char *start;
char *end;

typedef struct Header{
	int size;
	int is_free;
	struct Header *next;
}Header;	


static void find_free_block(void){

	//searches for suitable block
}

static void split_block(void){

	//splits large blocks
}

static void coalesce(void){

	//merges adjacent free blocks
}


static void get_block_header(void){
	//gets header from user pointer
}

char *my_malloc(int size){
	if (size == 0) return NULL;
	
	Header *h;
	if (start == NULL){
		int total_size = size + sizeof(Header);
		void *request = sbrk(total_size);
		start = (char *)request;
		end = start + total_size;

		h = (Header *)start;
		h->size = total_size;
		h->is_free = 0;
		h->next = NULL;
	
	}else{
		Header *current = (Header *)start;
		Header *last = NULL;
		while(current != NULL){
			if (current->is_free && current->size >= size){
				current->is_free = 0;
				return (char *)(current+1);
			}
			
			last = current;
			current = current->next;

		
		}

		if(current == NULL){
			int total_size = size + sizeof(Header);
			void *request = sbrk(total_size);
			
			Header *new_block = (Header *)request;
			new_block->size = total_size;
			new_block->is_free = 0;
			new_block->next = NULL;

			last->next = new_block;

			return (char *)(new_block + 1);
		}	



	}

	return (char *)(h+1);

}


int my_free(char *pointer){

	if(pointer == NULL) return -1;

	Header *h = (Header *)pointer;
	h = h - 1;
		
	h->is_free=1;

	return 0;

}



