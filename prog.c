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

void setPixel(int x, int y) {
    if (x >= 0 && x < width &&
        y >= 0 && y < height) {
        picture[y][x] = pixel;
    }
}

void drawLine(int x1, int y1, int x2, int y2) {
    int i;

    if (y1 == y2) {   // horizontal line
        for (i = x1; i <= x2; i++) {
            setPixel(i, y1);
        }
    }
    else if (x1 == x2) {   // vertical line
        for (i = y1; i <= y2; i++) {
            setPixel(x1, i);
        }
    }
    
}
void drawRectangle(int x1, int y1, int x2, int y2) {
    drawLine(x1, y1, x2, y1); // top
    drawLine(x1, y2, x2, y2); // bottom
    drawLine(x1, y1, x1, y2); // left
    drawLine(x2, y1, x2, y2); // right
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
        else if (choice == 2) {
          int x1, y1, x2, y2;

          printf("Enter top-left x y and bottom-right x y: ");
          scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

          drawRectangle(x1, y1, x2, y2);
        }
         else if (choice == 5) {
        printf("The picture is:\n");
        displayPicture();
        }  
            
    }
}