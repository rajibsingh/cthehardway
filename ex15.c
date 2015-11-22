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

	//setup the pointer
	int *cur_age = ages;
	char **cur_name = names;

	//second way using pointers
	for (i = 0; i < count; i++) {
		printf("%s has %d years alive.\n", *(cur_name + i), *(cur_age + i));
	}
	printf("--------------\n");

	//third way, pointers are just arrays
	for (i = 0; i < count; i++) {
		printf("%s has %d years alive.\n", cur_name[i], cur_age[i]);
	}
	printf("--------------\n");

	// fourth way with pointers in a stupid complex way
	for(cur_name = names, cur_age = ages; (cur_age - ages) < count; cur_name++, cur_age++)
	{
		printf("%s has %d years alive.\n", *cur_name, *cur_age);
	}

	return 0;
}
