#include "leetcode.h"

static void	merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
	int i = 0;
	int a;
	int z;
	int j = m;
	(void)nums1Size;
	(void)nums2Size;
	while (i < n)
	{
		a = 0;
		while (a < j && nums2[i] > nums1[a])
			a++;
		z = m + n - 2;
		while (z >= a)
		{
			nums1[z+1] = nums1[z];
			z--;
		}
		nums1[z+1] = nums2[i];
		j++;
		i++;
	}
}

void	test_merge_sorted_array(void)
{
	int	m = 3;
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
	m = 6;
	n = 3;
	int a7[] = {-1, 0, 0, 3, 3, 3, 0, 0, 0};
	int a8[] = {1, 2, 2};
	merge(a7, m, m, a8, n, n);
}
