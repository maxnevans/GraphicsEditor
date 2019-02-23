#include "..\Include\Triangle.h"



void Triangle::Redraw(Gdiplus::Graphics* const graphics)
{
	using namespace Gdiplus;

	Pen pen(this->color);

	Point points[3];
	points[0] = Point(this->x1, this->y2);
	points[1] = Point(this->x2, this->y2);
	points[2] = Point(this->x1 + this->width / 2, this->y1);

	graphics->DrawPolygon(&pen, points, 3);
}