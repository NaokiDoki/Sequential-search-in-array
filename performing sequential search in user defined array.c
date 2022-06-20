#include<stdio.h>

int main(){
	int ar[30], size, n, search;
	printf("Enter the size for array: ");
	scanf("%d", &size);
	
	printf("Enter the elements of array:\n");
	for(n=0;n<=size-1;n++){
		scanf("%d", &ar[n]);
	}
	printf("Enter the element that u want to search: ");
	scanf("%d", &search);
	
	n=0;
	while(n<size){
		if (search == ar[n])
			break;
		n += 1;
	}
	
	if(n<size){
		printf("Element found at %d",n);
	}
	else{
		printf("Elements nut found");
	}
	return 0;
}
