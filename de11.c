#include <stdio.h>
#include <stdbool.h>

typedef struct 
{
    int x, y;
}Point;

bool doOverlap(Point l1, Point r1, Point l2, Point r2)
{
    if (l1.x > r2.x || l2.x > r1.x)
    {
        return false;
    }

    if (r1.y > l2.y || r2.y > l1.y)
    {
        return false;
    }
    return true;
}

int main(void)
{
    Point l1 = {0, 10}, r1 = {10, 0};
    Point l2 = {12, 12}, r2 = {15, 15};

    if (doOverlap(l1, r1, l2, r2))
    {
        printf("Rectangles Overlap");
    }
    else
    {
        printf("Rectangles Don't Overlap");
    }

    return 0;
}