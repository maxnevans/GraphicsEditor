#include "Rectangle.h"


void Custom::Rectangle::Redraw(Gdiplus::Graphics* const graphics)
{
	Gdiplus::Pen pen(this->color);

	Gdiplus::Rect rect(this->x, this->y, this->width, this->height);
	graphics->DrawRectangle(&pen, rect);
}

IShapeFactoryFunctor* Custom::Rectangle::CreateFactoryFunctor()
{
	return new RectangleFactoryFunctor();
}

const wchar_t* Custom::Rectangle::GetName()
{
	return this->NAME;
}

BaseShape* Custom::Rectangle::RectangleFactoryFunctor::operator()()
{
	return new Rectangle();
}
