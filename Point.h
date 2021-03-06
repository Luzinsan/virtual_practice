#pragma once
#include <iostream>

class Point
{
private:
	int m_x = 0,
        m_y = 0,
	    m_z = 0;

public:
	Point(int x, int y, int z)
		: m_x(x), m_y(y), m_z(z) {}
	
	friend std::ostream& operator<<(std::ostream& out, const Point& p);
	
};
