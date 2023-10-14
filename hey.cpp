#include <iostream>
#include <string>

// Base class: Shape
class Shape {
public:
    virtual void draw() const {
        std::cout << "Drawing a generic shape." << std::endl;
    }
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double radius) : radius(radius) {}

    void draw() const override {
        std::cout << "Drawing a circle with radius " << radius << std::endl;
    }
};

// Derived class: Square
class Square : public Shape {
private:
    double side;

public:
    Square(double side) : side(side) {}

    void draw() const override {
        std::cout << "Drawing a square with side " << side << std::endl;
    }
};

// Function to demonstrate polymorphism
void drawShape(const Shape& shape) {
    shape.draw();
}

int main() {
    Circle circle(5.0);
    Square square(7.5);

    std::cout << "Drawing shapes using drawShape function:" << std::endl;
    drawShape(circle); // Polymorphic behavior: Circle is treated as a Shape
    drawShape(square); // Polymorphic behavior: Square is treated as a Shape

    return 0;
}
