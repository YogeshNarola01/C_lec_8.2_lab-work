/*
Q.1 Write a Program to perform the merge operation of two 1D arrays & store it in another array. Keep in mind that both array sizes can be different.
For example,
Input:
Enter array A's size: 5

Enter array A's elements:
a[0] = 7
a[1] = 4
a[2] = 9
a[3] = 5
a[4] = 2

Enter array B's size: 3

Enter array B's elements:
b[0] = 1
b[1] = 3
b[2] = 6

Output:
Array C is: 7, 4, 9, 5, 2, 1, 3, 6
*/

#include<stdio.h>

void main(){
	int n,i,k;
	int a[n],b[k];
	
	printf("Enter size of array A:- ");
	scanf("%d",&n);
	for(i=0; i<n; i++){
		printf("Enter value A: ");
		scanf("%d",&a[i]);	
	}
	
	printf("Enter size of array B:- ");
	scanf("%d",&k);
	for(i=0; i<k; i++){
		printf("Enter value B: ");
		scanf("%d",&b[i]);
	}
	
	for(i=0; i<n; i++){
		printf("%d",a[i]);
	}
	
	for(i=0; i<k; i++){
		printf("%d",b[i]);
	}
	
}
