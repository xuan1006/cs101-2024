#include <stdio.h>
typedef struct Books {
    int id;
    int price;
    char title[100];
} book_t;

book_t books[] = {
    {1, 1000, "All the Light We Cannot See"},
    {2, 300, "The 38 Letters from J.D. Rockefeller to his son"},
    {3, 1000, "The Ballad of Songbirds and Snakes"},
    {4, 550, "Killers of the Flower Moon"},
    {5, 870, "Elon Musk"},
    {6, 1344, "Milk and Honey 12-Month 2024"}
};

void total_price() {
    int sum = 0;
    for (int i = 0; i < 6; i++) {
        sum += books[i].price;
    }
    printf("%d\n", sum);
}

void list_books(int id) {
    if (id >= 1 && id <= 6) {
        printf("%d %s\n", books[id - 1].price, books[id - 1].title);
    } else {
        printf("Invalid input\n");
    }
}

int main() {
    int input;
    scanf("%d", &input);

    if (input == 0) {
        total_price();
    } else {
        list_books(input);
    }

    return 0;
}
