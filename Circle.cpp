#include "Circle.h"

std::ostream& Circle::print(std::ostream& out) const
{
	out << "Circle(" << m_center << ", radius " << m_R << ")\n";
	return out;
}

int Circle::getRadius() const
{
	return m_R;
}


int getLargestRadius(const std::vector<Shape*>& v)
{
	int largestRadius{ 0 };

	// Перебираем каждый элемент вектора
	for (auto const& element : v)
	{
		// Выполняем проверку на нулевой указатель результата динамического приведения
		if (Circle* c = dynamic_cast<Circle*>(element))
		{
			if (c->getRadius() > largestRadius)
				largestRadius = c->getRadius();
		}
	}

	return largestRadius;
}
