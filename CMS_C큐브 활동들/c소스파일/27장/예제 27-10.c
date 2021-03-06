#include <stdio.h>
#include <stdlib.h>

int ACDSort(const void *, const void *);
int Compare(const void *, const void *);

int main(void)
{
	int arr[5]={3, 1, 2, 4, 5};
	int srchValue=2;
	int * srchPtr;
	int i;

	/* 정렬 과정 */
	qsort((void*)arr, sizeof(arr)/sizeof(int), sizeof(int), ACDSort);
	for(i=0; i<5; i++)
		printf("%4d", arr[i]);

	printf("\n");

	/* 검색 과정 */
	srchPtr=
		(int*)bsearch((void*)&srchValue, arr, 
		              sizeof(arr)/sizeof(int), sizeof(int), Compare);

	if(srchPtr==NULL)
		printf("찾는 대상이 존재하지 않습니다. \n");
	else
		printf("찾는 대상 %d이(가) 저장되어 있는 위치: %#x \n", 
		       *srchPtr, srchPtr);
	
	return 0;
}

int ACDSort(const void * p1, const void * p2)
{
	int n1= *((int *)p1);
	int n2= *((int *)p2);
	int ret;

	if(n1>n2)
		ret=1;
	else if(n1<n2)
		ret=-1;
	else
		ret=0;

	return ret;
}

int Compare(const void * pKey, const void * pValue)
{
	int key= *((int*)pKey);
	int value= *((int*)pValue);

	return key-value;

}