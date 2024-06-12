#include <stdio.h>

int binarySearch(int arr[], int left, int right, int target, int *iterations) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            (*iterations)++;
            return mid;
        }

        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }

        (*iterations)++;
    }

    return -1;
}

int main() {
    int arr[] = {2, 5, 7, 12, 15, 18, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 15;
    int iterations = 0;

    int result = binarySearch(arr, 0, n - 1, target, &iterations);

    if (result == -1) {
        printf("O valor %d não foi encontrado no vetor.\n", target);
    } else {
        printf("O valor %d foi encontrado na posição %d.\n", target, result);
    }

    printf("Número de iterações: %d\n", iterations);

    return 0;
}
