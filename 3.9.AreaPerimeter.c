#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int l,b;
	printf("Enter the length and breadth of a rectangle");
	scanf("%d %d",&x,&y);
	int perimeter = 2(l+b);
	int area = l*b;
    if (area>perimeter)
        printf("Area is greater");
    else
    printf("Perimeter is greater");
}
