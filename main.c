#include <stdio.h>
#include <stdlib.h> 

#define WIDTH 40
#define HEIGHT 20
#define MAX_SHAPES 50

typedef struct {
    char type; // 'R', 'L', 'C', 'T'
    int x1, y1; 
    int x2, y2; 
} Shape;

char canvas[HEIGHT][WIDTH];
Shape shapesList[MAX_SHAPES]; 
int shapeCount = 0;           

void clearCanvas() {
    for(int i = 0; i < HEIGHT; i++) {
        for(int j = 0; j < WIDTH; j++) {
            canvas[i][j] = '_';
        }
    }
}

void drawRectangle(Shape s) {
    for (int i = s.y1; i <= s.y2; i++) {
        for (int j = s.x1; j <= s.x2; j++) {
            if (i == s.y1 || i == s.y2 || j == s.x1 || j == s.x2) {
                if (i >= 0 && i < HEIGHT && j >= 0 && j < WIDTH) {
                    canvas[i][j] = '*';
                }
            }
        }
    }
}