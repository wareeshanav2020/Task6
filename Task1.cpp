#include <iostream>
using namespace std;

class Circle {
    double radius;

public:
    Circle(double r) : radius(r) {}

    void setRadius(double r) {
        radius = r;
    }
    double getRadius() const {
        return radius;
    }
    Circle operator+(const Circle& other) {
        return Circle(radius + other.radius);
    }
};

int main() {
    Circle c1(5.0);
    Circle c2(7.0);
    Circle c3(0.0);

    c1.setRadius(5.0);
    c2.setRadius(7.0);

    c3 = c1 + c2;

    c3.setRadius(18.0);

    cout << "Radius of Third Circle: " << c3.getRadius() << std::endl;

    system("pause");
    return 0;
}

