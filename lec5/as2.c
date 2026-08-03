#include <stdio.h>
int main () {
int arr[10];
int i,j,temp,n=10;
for (i=0;i<n;i++){
	printf("please inter your num");
    scanf("%d",&arr[i]);}
	for (i=0;i<n-1;i++){
		for (j=0;j<n-1-i;j++){
			if (arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
}
for (i=0;i<10;i++){
	printf("    %d",arr[i]);
}

}