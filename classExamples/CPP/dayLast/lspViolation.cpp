#include <iostream>

class Bird {
public:
    virtual void fly() const {
        std::cout << "I can fly!" << std::endl;
    }
};

class Sparrow : public Bird {
    // Inherits fly method
};

class Ostrich : public Bird {
public:
    void fly() const override {
        throw std::runtime_error("I can't fly!");
    }
};

void makeBirdFly(const Bird& bird) {
    bird.fly();
}

int main() {
    Sparrow sparrow;
    Ostrich ostrich;

    makeBirdFly(sparrow); // Works fine
    makeBirdFly(ostrich); // Throws an exception

    return 0;
}

