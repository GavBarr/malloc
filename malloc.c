//malloc.c
#include <stdio.h>
#include <sys/stat.h>
#include <pwd.h>
#include <unistd.h>
#include <malloc.h>

//header
//[size, is_free, next, optional]

char *start=0;
char *end;

void get_more_memory(void){

	//calls sbrk()
}

void find_free_block(void){

	//searches for suitable block
}

void split_block(void){

	//splits large blocks
}

void coalesce(void){

	//merges adjacent free blocks
}


void get_block_header(void){
	//gets header from user pointer
}

char *malloc(int size){
}


int free(char *pointer){

}



