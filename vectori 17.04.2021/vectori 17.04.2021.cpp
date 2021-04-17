//Să se scrie un program care ordonează descrescător elementele unui vector.
#include<stdio.h>
#pragma warning(disable:4996)

void swap(int &a, int &b)
{
	int aux = a;
	a = b;
	b = aux;
}

int main()
{
	int v[1000] , i,j, n, aux;

	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		scanf("%d", &v[i]);

	for(i=1;i<n;i++)
		for(j=i+1;j<=n;j++)
			if (v[i] < v[j])
			{
				swap(v[i], v[j]);
			}
	for (i = 1; i <= n; i++)
		printf("%d ", v[i]);
}
