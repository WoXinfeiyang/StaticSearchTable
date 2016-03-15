#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define MAXSIZE (10)

/**
顺序查找(无哨兵)
函数名称：Sequential_Search(int *a,int n,int key)
函数参数：
	a---待查找数组指针,
	n---待查找数组中元素个数,
	key---查找关键字 
函数说明：顺序查找(无哨兵),当成功查找时返回关键字在记录中的位置，当没有查找时返回0. 
*/
int Sequential_Search(int *a,int n,int key)
{
	int i;
	for(i=1;i<=n;i++)
	{
		if(a[i]==key)
			return i;	
	} 
	return 0;
}

/**
顺序查找(含哨兵)
函数名称：Sequential_Search2(int *a,int n,int key)
函数参数：
	a---待查找数组指针,
	n---待查找数组中元素个数,
	key---查找关键字 
函数说明：顺序查找(含哨兵),当成功查找时返回关键字在记录中的位置，当没有查找时返回0. 
*/
int Sequential_Search2(int *a,int n,int key)
{
	a[0]=key;
	int i=n;
	while(a[i]!=key)
	{
		i--;	
	}
	return i;
}

/**折半查找(二分查找)
函数参数:a----数组
		 length-----数组长度(从0开始)
		 key----关键字 
*/

int BinarySearch(int*a,int length,int key)
{
	int low=0,high=length-1;
	int mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key<a[mid])
		{
			high=mid-1;	
		}
		else if(key>a[mid])
		{
			low=mid+1;	
		}
		else
		{
			return mid;	
		}
	}
	return 0;
} 


int main(int argc, char *argv[]) {
	int a[MAXSIZE+1];
	int array[MAXSIZE]={1,16,24,35,47,59,62,73,88,99};
	int i,key,result;
	for(i=0;i<=MAXSIZE;i++)
	{
		a[i]=i;
	}
	key=5;
	printf("从数组a中查找%d的地址为%d\n",key,Sequential_Search(a,MAXSIZE,key));
	
	key=7;
	printf("从数组a中查找%d的地址为%d\n",key,Sequential_Search2(a,MAXSIZE,key));	

	key=47;
	printf("从数组array中查找%d的地址为%d\n",key,BinarySearch(array,MAXSIZE,key));	
	return 0;
}
