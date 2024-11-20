#include "leetcode.h"

static void	bubble_sort(int* a, int start, int size);
static void	swap(int* a, int* b);

void	test_merge_sorted_array(void);

static void	merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
	(void) nums1Size;
	(void) nums2Size;
	int i = 0;
	while (i < n)
	{
		nums1[m + i] = nums2[i];
		i++;
	}
	bubble_sort(nums1, m - 1, m + n);
}

void	bubble_sort(int* a, int start, int size)
{
	int	i;

	i = start;
	while (start > -1)
	{
		while (a[i] && i < size)
		{
			if (a[i] > a[i+1])
				swap(&a[i], &a[i+1]);
			i++;
		}
		i = start;
		start--;
	}
}

void swap(int* a, int* b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	test_merge_sorted_array(void)
{
	int	m = 6;
	int	n = 3;
	int	a1[] = {4, 5, 6, 0, 0, 0};
	int	a2[] = {1, 2, 3};

	//TODO: debug to check for the while loops guardians
	merge(a1, m, m, a2, n, n);
}
