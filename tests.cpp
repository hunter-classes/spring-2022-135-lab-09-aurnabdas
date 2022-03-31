#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "coord3d.h"

Coord3D one = {10, 20, 30};
Coord3D two = {0,0,0};
Coord3D three = {20, 50, 100};
Coord3D four = {100, 100, 100};

TEST_CASE("Task A")
{
	
	CHECK(length(&one) == doctest::Approx(37.4166).epsilon(.05));
	
	CHECK(length(&two) == doctest::Approx(0.000).epsilon(.05));
	
	CHECK(length(&three) == doctest::Approx(113.578).epsilon(.05));
	
	CHECK(length(&four) == doctest::Approx(173.2051).epsilon(.05));
	
}
TEST_CASE("Task B")
{
	Coord3D first = {10, 20, 30};
    Coord3D second = {0,0,0};
	CHECK(fartherFromOrigin(&first, &second) == &first);
	first = {20, 50, 100};
	second = {-100, 10, 20};
	CHECK(fartherFromOrigin(&first, &second) == &first);
    first = {10, 20, 30};
	second = {20, 50, 100};
	CHECK(fartherFromOrigin(&first, &second) == &second);
	first = {1, 0, 0};
	second = {40, -25, 50};
	CHECK(fartherFromOrigin(&first, &second) == &second);
	

}
TEST_CASE("Task C")
{
	Coord3D pos = {0, 0, 100.0};
	Coord3D vel = {1, -5, 0.2};
 	move(&pos, &vel, 2.0);
	CHECK(pos.x == 2);
	CHECK(pos.y == -10);
	CHECK(pos.z == 100.4);
	pos = {1,1,1};
	vel = {.1, .2, .3};
	move(&pos, &vel, 10);
	CHECK(pos.x == 2);
	CHECK(pos.y == 3);
	CHECK(pos.z == 4);
	pos = {100, 400, 300};
	vel = {10, 20, 30};
	move (&pos, &vel, .5);
	CHECK(pos.x == 105);
	CHECK(pos.y == 410);
	CHECK(pos.z == 315);
}
TEST_CASE("Task E")
{
	Coord3D *p = createCoord3D(20, 40, 59);
	CHECK(p->x == 20);
	CHECK(p->y == 40);
	CHECK(p->z == 59);
	Coord3D *p1 = createCoord3D(9, 8, 7);
	CHECK(p1->x == 9);
	CHECK(p1->y == 8);
	CHECK(p1->z == 7);
	deleteCoord3D(p);
	deleteCoord3D(p1);
}


