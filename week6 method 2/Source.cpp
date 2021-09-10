#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
int result(int x ,int y, int z);
int main() {
	int x[10];
	printf("Enter ten numbers : ");
	for (int i = 0; i != 10; i++) {
		scanf("%d", &x[i]);
	}
	printf("Data in array : ");
	for (int i = 0; i != 10; i++) {
		printf("%d ", x[i]);
	}
	printf("\n");
	printf("result : ");
	int i = 1;
	while (i!=10)
	{
		
		if (result(x[i - 1], x[i], x[i + 1]) == true)
		{printf("%d ", x[i]); }
		i++;
	}
	return 0;
}
int result(int x ,int y ,int z) {
	if ((x + 2) % 2 != 0 && (z + 2) % 2 != 0) {
		return true;
	}
	else return false;
}
