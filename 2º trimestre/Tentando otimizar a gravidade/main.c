#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

void setCursor(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void generateMatrix(int xSize, int ySize, int matrix[xSize][ySize]){
    for(int i=0; i<xSize; i++){
        for(int j=0; j<ySize; j++){
            matrix[i][j]=-5;
        }
    }
}

void printMatrix(int xSize, int ySize, int matrix[xSize][ySize]){
    for(int i=0; i<xSize; i++){
        for(int j=0; j<ySize; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int xPositionSet(float xTime){
    int xPosition=(1+sin(xTime)/2);
    return xPosition;
}

int yPositionSet(float yTime){
    int yPosition=(1+sin(yTime)/2);
    return yPosition;
}

int main()
{
    int xSize=40, ySize=40, matrix[xSize][ySize], xPosition, yPosition;
    float xTime=0, yTime=0, timeIncrease=0.15;

    generateMatrix(xSize, ySize, matrix);

    for(int i=1; i>0; i++){
        xPosition=xPositionSet(xTime);

        xTime=xTime+timeIncrease;
        yTime=yTime+timeIncrease;
    }

    return 0;
}
