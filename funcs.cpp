#include <iostream>
#include "funcs.h"
#include "coord3d.h"
#include <cmath>


double length(Coord3D *p)
{
    // note: (*p).x can work, but *p.x which i tried does not work because it is the same as p.x
    int x,y,z;
    x = p->x;
    y = p->y;
    z = p->z;

    double equ = sqrt(pow(x,2)+pow(y,2)+pow(z,2));

    return equ;
}

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2)
{
    double p1_dis = length(p1);
    double p2_dis = length(p2);
    if(p1_dis > p2_dis)
    {
        return p1;
    }
    else
    {
        return p2;
    }
}
void move(Coord3D *ppos, Coord3D *pvel, double dt)
{
    // updating the orginal position. to a new position
    // but since its void a new variable will not be made so the actual coordiinates have to change

    // this is just the code version of the equation that was given in the lab page
    ppos->x = ppos->x + (pvel->x * dt);
    ppos->y = ppos->y + (pvel->y * dt);
    ppos->z = ppos->z + (pvel->z * dt);

}

Coord3D* createCoord3D(double x, double y, double z)
{
    Coord3D *p = new Coord3D;

    // x = p->x; (x,y,z already has values, we want to set them to p)
    // y = p->y;
    // z = p->z;

    // (*p).x = x; (this also works)
    // (*p).y = y;
    // (*p).z = z;

    p->x = x;
    p->y = y;
    p->z = z;

    // p = {p->x,p->y,p->z} (i guess i dont need this because they are already grouped up. Yet why am i still getting a error)


    return p;

}

void deleteCoord3D(Coord3D *p)
{

}



    
    








