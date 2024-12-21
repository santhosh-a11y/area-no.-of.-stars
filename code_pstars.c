#include <stdio.h>
#include <stdlib.h>

int main()
{
    //user gives the length and breadth of a rectangle
    int len, bre;
    printf("enter the len and bre of a rectangle: ");
    scanf("%d %d", &len ,&bre);
    int rows, cols, i, j;
    rows=len;
    cols=bre;
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("number of stars = area of the rectangle = %d", len*bre);
}
