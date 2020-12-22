//题目内容:（杨氏矩阵）
//1有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的,
//'请编写程序在这样的矩阵中查找某个数字是否存在。
//'要求:时间复杂度小于o(N);
#include<stdio.h>
int Finenum(int arr[3][3], int k, int* prt1, int* prt2)
{
	int x = 0;
	int y = *prt2 - 1;

	while (x<=*prt2-1&&y>=0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*prt1 = x;
			*prt2 = y;
			//printf("下标为：x=%d\n\ty=%d\n",x,y);
			return 1;
		}
	}
	return 0;
}
int main()
{	
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 7;
	int x = 3;
	int y = 3;
	int ret = Finenum(arr,k,&x,&y);//要操作实参，即可以改变实参，则用传地址方式
	if (ret == 1)
	{
		printf("找到了\n");
		printf("下标为：x=%d\n\ty=%d\n", x, y);
	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}