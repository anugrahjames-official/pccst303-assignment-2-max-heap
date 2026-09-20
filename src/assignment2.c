#include <stdio.h>
#define MAX 100

int heap[MAX];
int size = 0;

int insert(int value) {
    int i, parent, temp;
    int comparisons = 0;
    heap[size] = value;
    i = size;
    size++;
    while (i > 0) {
        parent = (i - 1) / 2;
        comparisons++;
        if (heap[parent] < heap[i]) {
            temp = heap[parent];
            heap[parent] = heap[i];
            heap[i] = temp;
            i = parent;
        } else {
            break;
        }
    }
    return comparisons;
}

void displayHeap() {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", heap[i]);
    printf("\n");
}

int findMaxHeap(int *operations) {
    *operations = 1;
    return heap[0];
}

int linearSearchMax(int arr[], int n, int *comparisons) {
    int i;
    int max = arr[0];
    *comparisons = 0;
    for (i = 1; i < n; i++) {
        (*comparisons)++;
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int scores[MAX];
    int n;
    int i;
    int comparisons;
    int totalComparisons = 0;
    int maxHeap, maxLinear;

    printf("Enter the number of students: ");
    if (scanf("%d", &n) != 1) return 1;

    printf("Enter the scores:\n");
    for (i = 0; i < n; i++) {
        if (scanf("%d", &scores[i]) != 1) return 1;
    }

    printf("\nMAX HEAP INSERTION\n\n");
    for (i = 0; i < n; i++) {
        comparisons = insert(scores[i]);
        totalComparisons += comparisons;
        printf("After inserting %d: ", scores[i]);
        displayHeap();
        printf("Comparisons: %d\n\n", comparisons);
    }
    printf("Total heap insertion comparisons: %d\n\n", totalComparisons);

    if (n > 0) {
        maxHeap = findMaxHeap(&comparisons);
        printf("MAXIMUM USING MAX HEAP\n");
        printf("Maximum score: %d\n", maxHeap);
        printf("Operations: %d\n\n", comparisons);

        maxLinear = linearSearchMax(scores, n, &comparisons);
        printf("MAXIMUM USING LINEAR SEARCH\n");
        printf("Maximum score: %d\n", maxLinear);
        printf("Comparisons: %d\n", comparisons);
    }

    return 0;
}
