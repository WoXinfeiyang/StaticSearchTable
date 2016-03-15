#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define MAXSIZE (10)

/**
˳�����(���ڱ�)
�������ƣ�Sequential_Search(int *a,int n,int key)
����������
	a---����������ָ��,
	n---������������Ԫ�ظ���,
	key---���ҹؼ��� 
����˵����˳�����(���ڱ�),���ɹ�����ʱ���عؼ����ڼ�¼�е�λ�ã���û�в���ʱ����0. 
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
˳�����(���ڱ�)
�������ƣ�Sequential_Search2(int *a,int n,int key)
����������
	a---����������ָ��,
	n---������������Ԫ�ظ���,
	key---���ҹؼ��� 
����˵����˳�����(���ڱ�),���ɹ�����ʱ���عؼ����ڼ�¼�е�λ�ã���û�в���ʱ����0. 
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

/**�۰����(���ֲ���)
��������:a----����
		 length-----���鳤��(��0��ʼ)
		 key----�ؼ��� 
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
	printf("������a�в���%d�ĵ�ַΪ%d\n",key,Sequential_Search(a,MAXSIZE,key));
	
	key=7;
	printf("������a�в���%d�ĵ�ַΪ%d\n",key,Sequential_Search2(a,MAXSIZE,key));	

	key=47;
	printf("������array�в���%d�ĵ�ַΪ%d\n",key,BinarySearch(array,MAXSIZE,key));	
	return 0;
}
