#include <iostream>
#include <string>

class Figure {
protected:
    std::string _name;
    int _sides_count;

public:
    Figure() : _name("Фигура"), _sides_count(0) {}

    virtual ~Figure() = default;

    virtual bool check() const {
        return _sides_count == 0;
    }

    virtual void print_info() const {
        std::cout << _name << ":" << std::endl;
        if (check()) {
            std::cout << "Правильная" << std::endl;
        }
        else {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << "Количество сторон: " << _sides_count << std::endl;
    }

    std::string get_name() const {
        return _name;
    }
};

class Triangle : public Figure {
protected:
    int a, b, c;
    int A, B, C;

public:
    Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C)
        : a(side_a), b(side_b), c(side_c), A(angle_A), B(angle_B), C(angle_C) {
        _name = "Треугольник";
        _sides_count = 3;
    }

    bool check() const override {
        return (A + B + C == 180);
    }

    void print_info() const override {
        std::cout << _name << ":" << std::endl;
        if (check()) {
            std::cout << "Правильная" << std::endl;
        }
        else {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << "Количество сторон: " << _sides_count << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
    }
};

class RightTriangle : public Triangle {
public:
    RightTriangle(int side_a, int side_b, int side_c, int angle_A, int angle_B)
        : Triangle(side_a, side_b, side_c, angle_A, angle_B, 90) {
        _name = "Прямоугольный треугольник";
    }

    bool check() const override {
        return Triangle::check() && (C == 90);
    }
};

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(int side_a, int side_b, int angle_A, int angle_B)
        : Triangle(side_a, side_b, side_a, angle_A, angle_B, angle_A) {
        _name = "Равнобедренный треугольник";
    }

    bool check() const override {
        return Triangle::check() && (a == c) && (A == C);
    }
};

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(int side)
        : Triangle(side, side, side, 60, 60, 60) {
        _name = "Равносторонний треугольник";
    }

    bool check() const override {
        return Triangle::check() && (a == b && b == c) && (A == 60 && B == 60 && C == 60);
    }
};

class Quadrangle : public Figure {
protected:
    int a, b, c, d;
    int A, B, C, D;

public:
    Quadrangle(int side_a, int side_b, int side_c, int side_d,
        int angle_A, int angle_B, int angle_C, int angle_D)
        : a(side_a), b(side_b), c(side_c), d(side_d),
        A(angle_A), B(angle_B), C(angle_C), D(angle_D) {
        _name = "Четырёхугольник";
        _sides_count = 4;
    }

    bool check() const override {
        return (A + B + C + D == 360);
    }

    void print_info() const override {
        std::cout << _name << ":" << std::endl;
        if (check()) {
            std::cout << "Правильная" << std::endl;
        }
        else {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << "Количество сторон: " << _sides_count << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    }
};

class Parallelogram : public Quadrangle {
public:
    Parallelogram(int side_a, int side_b, int angle_A, int angle_B)
        : Quadrangle(side_a, side_b, side_a, side_b, angle_A, angle_B, angle_A, angle_B) {
        _name = "Параллелограмм";
    }

    bool check() const override {
        return Quadrangle::check() && (a == c && b == d) && (A == C && B == D);
    }
};

class Rectangle : public Parallelogram {
public:
    Rectangle(int side_a, int side_b)
        : Parallelogram(side_a, side_b, 90, 90) {
        _name = "Прямоугольник";
    }

    bool check() const override {
        return Parallelogram::check() && (A == 90 && B == 90 && C == 90 && D == 90);
    }
};

class Rhombus : public Parallelogram {
public:
    Rhombus(int side, int angle_A, int angle_B)
        : Parallelogram(side, side, angle_A, angle_B) {
        _name = "Ромб";
    }

    bool check() const override {
        return Parallelogram::check() && (a == b && b == c && c == d);
    }
};

class Square : public Rectangle {
public:
    Square(int side)
        : Rectangle(side, side) {
        _name = "Квадрат";
    }

    bool check() const override {
        return Rectangle::check() && (a == b && b == c && c == d);
    }
};

void print_info(const Figure* figure) {
    figure->print_info();
    std::cout << std::endl;
}

int main() {
    Figure figure;
    Triangle triangle(10, 20, 30, 50, 60, 70);
    RightTriangle rightTriangle1(10, 20, 30, 50, 60);
    RightTriangle rightTriangle2(10, 20, 30, 50, 40);
    IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
    EquilateralTriangle equilateralTriangle(30);
    Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle rectangle(10, 20);
    Square square(20);
    Parallelogram parallelogram(20, 30, 30, 40);
    Rhombus rhombus(30, 30, 40);

    print_info(&figure);
    print_info(&triangle);
    print_info(&rightTriangle1);
    print_info(&rightTriangle2);
    print_info(&isoscelesTriangle);
    print_info(&equilateralTriangle);
    print_info(&quadrangle);
    print_info(&rectangle);
    print_info(&square);
    print_info(&parallelogram);
    print_info(&rhombus);

    return 0;
}