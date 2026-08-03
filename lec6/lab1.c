#include <stdio.h>
void binary_search(int arr[], int size, int element);
void bu(int arr[], int i, int j);
int main() {
  

                            
    bu(int arr[], int i, int j)
    binary_search(int arr, int n, int search_element);

    return 0;
}
void binary_search(int arr[], int size, int element) {
	  int arr[10];
    int i, j, temp, n = 10;
    int search_element; 

    for (i = 0; i < n; i++) {
        printf("please enter your num: ");
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
	 printf("Enter the element you want to search for: ");
    scanf("%d", &search_element);   
}
void binary_search(int arr[], int size, int element) {
    int start, end, middle, index = -1;
    start = 0;
    end = size - 1;

    while (start <= end) {
        middle = start + (end - start) / 2;

        if (element == arr[middle]) {
            index = middle;
            break;
        } else if (element > arr[middle]) {
            start = middle + 1;
        } else {
            end = middle - 1;
        }
    }

    if (index != -1) {
        printf("element %d at index %d\n", element, index);
    } else {
        printf("element %d not found\n", element);
    }
}