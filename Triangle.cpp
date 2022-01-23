#include "Triangle.h"

std::ostream& Triangle::print(std::ostream& out) const
{
	out << "Triangle(" << m_x << ", " << m_y << ", " << m_z << ")\n";
	return out;
}
