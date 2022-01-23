#include <iostream>
#include <vector>
#include "Circle.h"
#include "Triangle.h"

int main()
{
    Circle c(Point(1, 2, 3), 7);
    std::cout << c << '\n';

    Triangle t(Point(1, 2, 3), Point(4, 5, 6), Point(7, 8, 9));
    std::cout << t << '\n';


    std::vector<Shape*> v;
    v.push_back(new Circle(Point(1, 2, 3), 7));
    v.push_back(new Triangle(Point(1, 2, 3), Point(4, 5, 6), Point(7, 8, 9)));
    v.push_back(new Circle(Point(4, 5, 6), 3));

    for (auto const& element : v)
        std::cout << *element << '\n';

    std::cout << "The largest radius is: " << getLargestRadius(v) << '\n';

    for (auto const& element : v)
        delete element;
    

    return 0;
}
