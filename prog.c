#include <stdio.h>
#include <stdlib.h>

#define width 80
#define height 24

#define empty '_'
#define pixel '*'

char picture[height][width];

void clearPicture() {
    int i, j;

    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            picture[i][j] = empty;
        }
    }
}

void displayPicture() {
    int i, j;

    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            printf("%c", picture[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int choice;

    clearPicture();
    displayPicture();

    printf("2D Graphics Editor\n");
    printf("Canvas size: %d x %d\n", width, height);
    printf("Use coordinates x y.\n");
    printf("x range: 0 to %d\n", width - 1);
    printf("y range: 0 to %d\n", height - 1);

    while (1) {
        printf("\nMenu\n");

        printf("1. Draw Line\n");
        printf("2. Draw Rectangle\n");
        printf("3. Draw Circle\n");
        printf("4. Draw Triangle\n");
        printf("5. Display Picture\n");
        printf("0. Exit\n");

        printf("Enter choice: ");

        scanf("%d", &choice);

        if (choice == 1) {
            int x1, y1, x2, y2;

            printf("enter x1 y1 x2 y2: ");
            scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

            drawLine(x1, y1, x2, y2);
        }
            
    }