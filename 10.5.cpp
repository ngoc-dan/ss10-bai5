#include <stdio.h>

int main() {
    int arr[] = {65, 2, 4, 7, 3, 12, 54};
    int index = -1;
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Mang ban dau la: ");
    for (int i = 0; i < n; i++) {
        printf("%4d", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep la: ");
    for (int i = 0; i <n; i++) {
        printf("%4d", arr[i]);
    }
    printf("\n");
    int pt;
    printf("Nhap phan tu tim kiem la: ");
    scanf("%d", &pt);
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == pt) {
            index = mid;
            break;
        }
        if (arr[mid] < pt) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (index != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri %d\n", pt, index+1);
    } else {
        printf("Phan tu %d khong ton tai trong mang\n", pt);
    }

    return 0;
}
