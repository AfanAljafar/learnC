#include <stdio.h>

typedef struct
{
    int x;
    int y;

} point;

typedef struct
{
    float radius;
    point center;
} circle;

int main()
{
    point p;
    p.x = 3;
    p.y = 4;

    circle c;
    c.radius = 3.14;
    c.center = p;

    printf("circle radius is %.2f, and center point of circle at (%d, %d) \n", c.radius, c.center.x, c.center.y);
}
