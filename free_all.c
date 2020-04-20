#include "shell.h"

/**
 * free_all - Free allocations.
 * @arr: Array to free.
 */
void free_all(char **arr)
{
	int count = 0;

	while (arr[count])
		count++;
	free(arr[0]);
	if (arr[1])
		free(arr[1]);
	while (arr[count])
		count++;
	if (arr[count + 1])
		free(arr[count + 1]);
	free(arr);
}
