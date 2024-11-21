#include "leetcode.h"

void	test_merge_sorted_array(void);

static void	bubble_sort(int* a, int start, int size);
static void	swap(int* a, int* b);

static void	merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
	(void) nums1Size;
	(void) nums2Size;
	int i = 0;
	while (i < n)
	{
		if (m == 0)
			nums1[i] = nums2[i];
		else
			nums1[n + i] = nums2[i];
		i++;
	}
	bubble_sort(nums1, n - 1, m);
}

void	bubble_sort(int* a, int start, int size)
{
	int	i;
	i = start;
	while (start > -2)
	{
		while (a[i] && i < size - 1)
		{
			if (a[i] > a[i+1])
				swap(&a[i], &a[i+1]);
			i++;
		}
		i = 0;
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
	merge(a1, m, m, a2, n, n);
	m = 0;
	n = 1;
	int	a3[] = {0};
	int	a4[] = {1};
	merge(a3, m, m, a4, n, n);
	m = 3;
	n = 3;
	int a5[] = {1, 2, 3, 0, 0, 0};
	int a6[] = {2, 5, 6};
	merge(a5, m, m, a6, n, n);
}
