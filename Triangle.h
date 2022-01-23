#pragma once
#include "Shape.h"
#include "Point.h"

class Triangle: public Shape
{
private:
	Point m_x, m_y, m_z;
public:
	Triangle(const Point& x, const Point& y, const Point& z) 
		:  m_x(x), m_y(y), m_z(z) {}

	virtual std::ostream& print(std::ostream& out) const override;
	
};

