#include <stdio.h>
void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int A[], int p, int r) {
    int x = A[r];
    int i = p-1;
    int j;

    for(j=p;j<r;j++) {
        if(A[j] <= x) {
            i = i + 1;
            swap(&A[i], &A[j]);
        }
    }
    i = i +1;
    swap(&A[i], &A[r]);
    return i;
}
        void quickSort(int A[], int p, int r) {
            if(p < r) {
                int q = partition(A,p,r);
                quickSort(A,p,q-1);
                quickSort(A,q+1,r);
            }
        }
        void printArray(int array[], int size) {
            int i;
            for(i=0;i<size;i++){
                printf("%d ", array[i]);
            }
            printf("\n");
        }
        int main(){
            int data[] = {18, 7, 9, 15, 2, 5, 4};
            int n = sizeof(data)/sizeof(data[0]);
            printf("Unsorted Array\n");
            printArray(data,n);

            quickSort(data,0,n-1);
            printf("Sorted array in ascending order: \n");
            printArray(data,n);
            getchar();
            return 0;
        
}