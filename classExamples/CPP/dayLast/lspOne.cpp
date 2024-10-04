#include <iostream>
#include <vector>
#include <memory>

class Shape {
public:
    virtual double area() const = 0; // Pure virtual function
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    
    double area() const override {
        return width * height;
    }
};

class Square : public Shape {
private:
    double side;
public:
    Square(double s) : side(s) {}

    double area() const override {
        return side * side;
    }
};

void printArea(const Shape& shape) {
    std::cout << "Area: " << shape.area() << std::endl;
}

int main() {
    Rectangle rect(3, 4);
    Square square(2);

    printArea(rect);   // Outputs: Area: 12
    printArea(square); // Outputs: Area: 4

    return 0;
}

