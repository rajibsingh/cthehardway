#include <stdio.h>

int main(int argc, char *argv[])
{
	//create two arrays for use
	int ages[] = { 23, 43, 12, 89, 12 };
	char *names[] = { "Alan", "Frank", "Mary", "John", "Lisa" };

	//get the size of the ages
	int count = sizeof(ages) / sizeof(int);
	int i = 0;

	//first way using indexing
	for (i = 0; i < count; i++) {
		printf("%s has %d years alive.\n", names[i], ages[i]);
	}
	printf("1--------------\n");
	return 0;

	//setup the pointer
	int *cur_age = ages;
	char **cur_names = names;

	//second way using pointers
	for (i = 0; i < count; i++) {
		printf("%s has %d years alive.\n", *(cur_age+1), *(cur_names + 1));
	}
	printf("--------------\n");
}
