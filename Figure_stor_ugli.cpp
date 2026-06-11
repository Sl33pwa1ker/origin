#include <iostream>
#include <string>

class Figure {
protected:
    std::string _name;

public:
    virtual ~Figure() = default;
    virtual std::string get_name() const {
        return _name;
    }
    virtual void print_info() const = 0;
};

class Triangle : public Figure {
protected:
    int a, b, c;
    int A, B, C;

public:
    Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C)
        : a(side_a), b(side_b), c(side_c), A(angle_A), B(angle_B), C(angle_C) {
        _name = "Треугольник";
    }

    int get_a() const { return a; }
    int get_b() const { return b; }
    int get_c() const { return c; }
    int get_A() const { return A; }
    int get_B() const { return B; }
    int get_C() const { return C; }

    void print_info() const override {
        std::cout << _name << ":" << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
        std::cout << std::endl;
    }
};

class RightTriangle : public Triangle {
public:
    RightTriangle(int side_a, int side_b, int side_c, int angle_A, int angle_B)
        : Triangle(side_a, side_b, side_c, angle_A, angle_B, 90) {
        _name = "Прямоугольный треугольник";
    }
};

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(int side_a, int side_b, int angle_A, int angle_B)
        : Triangle(side_a, side_b, side_a, angle_A, angle_B, angle_A) {
        _name = "Равнобедренный треугольник";
    }
};

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(int side)
        : Triangle(side, side, side, 60, 60, 60) {
        _name = "Равносторонний треугольник";
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
    }

    int get_a() const { return a; }
    int get_b() const { return b; }
    int get_c() const { return c; }
    int get_d() const { return d; }
    int get_A() const { return A; }
    int get_B() const { return B; }
    int get_C() const { return C; }
    int get_D() const { return D; }

    void print_info() const override {
        std::cout << _name << ":" << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
        std::cout << std::endl;
    }
};

class Parallelogram : public Quadrangle {
public:
    Parallelogram(int side_a, int side_b, int angle_A, int angle_B)
        : Quadrangle(side_a, side_b, side_a, side_b, angle_A, angle_B, angle_A, angle_B) {
        _name = "Параллелограмм";
    }
};

class Rectangle : public Parallelogram {
public:
    Rectangle(int side_a, int side_b)
        : Parallelogram(side_a, side_b, 90, 90) {
        _name = "Прямоугольник";
    }
};

class Rhombus : public Parallelogram {
public:
    Rhombus(int side, int angle_A, int angle_B)
        : Parallelogram(side, side, angle_A, angle_B) {
        _name = "Ромб";
    }
};

class Square : public Rectangle {
public:
    Square(int side)
        : Rectangle(side, side) {
        _name = "Квадрат";
    }
};

void print_info(const Figure* figure) {
    figure->print_info();
}

int main() {
    Triangle triangle(10, 20, 30, 50, 60, 70);
    RightTriangle rightTriangle(10, 20, 30, 50, 60);
    IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
    EquilateralTriangle equilateralTriangle(30);
    Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle rectangle(10, 20);
    Square square(20);
    Parallelogram parallelogram(20, 30, 30, 40);
    Rhombus rhombus(30, 30, 40);

    print_info(&triangle);
    print_info(&rightTriangle);
    print_info(&isoscelesTriangle);
    print_info(&equilateralTriangle);
    print_info(&quadrangle);
    print_info(&rectangle);
    print_info(&square);
    print_info(&parallelogram);
    print_info(&rhombus);

    return 0;
}