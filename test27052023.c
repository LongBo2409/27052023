#include <stdio.h>

#define MAX_CATEGORIES 7

int main() {
    int expenses[MAX_CATEGORIES] = {2000, 1500, 3000, 2500, 4000, 3500, 6000}; // Mang chi ph� chi tieu trong tuan
    int totalExpenses = 0;
    int budget;
    int highestExpense = expenses[0];

    // T�nh tong chi ph� hang thang
    for (int i = 0; i < MAX_CATEGORIES; i++) {
        totalExpenses += expenses[i];
        
        // T�m khoan chi ph� cao nhat
        if (expenses[i] > highestExpense) {
            highestExpense = expenses[i];
        }
    }

    // Nhap gi� tri ng�n s�ch
    printf("Nhap gia tri ngan sach: ");
    scanf("%d", &budget);

    // Kiem tra xem tung chi ph� c� nam trong ng�n s�ch kh�ng
    if (totalExpenses <= budget) {
        printf("Chi phi nam trong ngan sach.\n");
    } else {
        printf("Chi phi vuot qua ngan sach.\n");
    }

    // Hien thi chi ph� cao nhat
    printf("Chi phi cao nhat: %d\n", highestExpense);

    return 0;
}

