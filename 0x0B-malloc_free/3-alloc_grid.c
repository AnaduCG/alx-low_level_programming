#include "main.h"
/**
 *
 *
 *
 *
 *
 */
int **alloc_grid(int width, int height)
{
	int wi, hi, **arr;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int) * height);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (hi = 0; hi < height; height++)
	{
		arr[hi] = malloc(sizeof(int) * width);
		if (arr[hi] == NULL)
		{
			for (wi = 0; wi < hi; wi++)
			{
				free(arr[wi]);
			}
				free(arr);
				return (NULL);
		}
	}
	for (hi = 0; hi < height; hi++)
	{
		
		for (wi = 0; wi < width; wi++)
		{
			arr[hi][wi] = 0;
			printf("%d", arr[hi][wi]);
		}
		printf("\n");
	}
	return (arr);
}
