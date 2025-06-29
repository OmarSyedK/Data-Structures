//Insert Sort: A simple sorting algorithm that builds a sorted array one element at a time

#include <stdio.h>
void main() {
    int a[10], i, j, k, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("\nEnter the elements into an array: \n");
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
  for(i = 1; i < n; i++) {
    k = a[i];           
    j = i - 1;
    while(j >= 0 && a[j] > k) {
        a[j + 1] = a[j];  
        j--;
    }
    a[j + 1] = k;        
}
    printf("\nElements after sorting are: \n");
    for(i=0;i<n;i++) {
        printf("\n%d\n", a[i]);
    }
}