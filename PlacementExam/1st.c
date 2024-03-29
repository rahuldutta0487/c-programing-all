#include <stdio.h>
#include <stdbool.h>

bool ArrayChallenge(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] <= sum) {
            return false;
        }
        sum += arr[i];
    }

    return true;
}

int main() {
    int arr1[] = {1, 2, 3, 4};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    
    if (ArrayChallenge(arr1, size1)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    

    return 0;
}
