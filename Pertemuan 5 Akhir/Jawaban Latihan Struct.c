#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Item {
    char name[16];
    int quantity;
    int price;
};

void addItem(struct Item items[], int *numItems) {
    if (*numItems >= 10) {
        printf("Inventory is full!\n");
        return;
    }

    char name[16];
    int quantity, price;

    do {
        printf("Input Item's name [5..15]: ");
        scanf("%s", name);
    } while (strlen(name) < 5 || strlen(name) > 15);

    do {
        printf("Input Item's quantity [1..100]: ");
        scanf("%d", &quantity);
    } while (quantity < 1 || quantity > 100);

    do {
        printf("Input Item's price [10000..100000]: ");
        scanf("%d", &price);
    } while (price < 10000 || price > 100000);

    strcpy(items[*numItems].name, name);
    items[*numItems].quantity = quantity;
    items[*numItems].price = price;

    (*numItems)++;

    printf("%s(s) have been successfully added\n", name);
}

void displayInventory(struct Item items[], int numItems) {
    if (numItems == 0) {
        printf("No data.\n");
        return;
    }

    printf("No.\tName\t\tQuantity\tPrice,-\n");
    for (int i = 0; i < numItems; i++) {
        printf("%d.\t%s\t\t%d\t\tRp. %d,-\n", i + 1, items[i].name, items[i].quantity, items[i].price);
    }
}

int main() {
    struct Item inventory[10];
    int numItems = 0;

    int choice;
    do {
        printf("\nCourse-Net Mart\n");
        printf("----------------------\n");
        printf("1. Add Item\n");
        printf("2. Sell Item\n");
        printf("3. Exit\n\n");
        printf("Enter Your Choice [1..3]: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addItem(inventory, &numItems);
                break;
            case 2:
                displayInventory(inventory, numItems);
                break;
            case 3:
                printf("Exiting the program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please select between 1 to 3.\n");
        }
    } while (choice != 3);

    return 0;
}
