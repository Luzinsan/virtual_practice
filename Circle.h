#pragma once
#include <vector>
#include "Shape.h"
#include "Point.h"

class Circle: public Shape
{
private:
	Point m_center;
	int m_R;
public:
	Circle(const Point& point, int r) 
		: m_center(point), m_R(r) {}

	virtual std::ostream& print(std::ostream& out) const override;
	int getRadius() const;

};

int getLargestRadius(const std::vector<Shape*>& v);
