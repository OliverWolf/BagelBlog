#ifndef HEADER
#define HEADER

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 20
#define MAX_PASS_LEN 20

//Structs

typedef struct user {
	char name[MAX_NAME_LEN + 1];
	char password[MAX_PASS_LEN + 1];
	int num_articles_written;
	struct user* next;
} User;



#endif
