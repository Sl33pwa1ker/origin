#include <iostream>
#include <vector>
#include <memory>
#include "triangle.h"
#include "right_triangle.h"
#include "isosceles_triangle.h"
#include "equilateral_triangle.h"
#include "quadrilateral.h"
#include "rectangle.h"
#include "square.h"
#include "parallelogram.h"
#include "rhombus.h"
#include "figure_exception.h"

int main() {
    std::vector<std::unique_ptr<Figure>> figures;

    try {
        auto triangle = std::make_unique<Triangle>(10, 20, 30, 50, 60, 70);
        std::cout << "Треугольник (стороны 10, 20, 30; углы 50, 60, 70) создан" << std::endl;
        figures.push_back(std::move(triangle));
    }
    catch (const FigureException& e) {
        std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
    }

    try {
        auto rightTriangle = std::make_unique<RightTriangle>(10, 20, 30, 50, 60);
        std::cout << "Прямоугольный треугольник (стороны 10, 20, 30; углы 50, 60, 90) создан" << std::endl;
        figures.push_back(std::move(rightTriangle));
    }
    catch (const FigureException& e) {
        std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
    }

    try {
        auto isosceles = std::make_unique<IsoscelesTriangle>(10, 20, 50, 80);
        std::cout << "Равнобедренный треугольник (стороны 10, 20, 10; углы 50, 80, 50) создан" << std::endl;
        figures.push_back(std::move(isosceles));
    }
    catch (const FigureException& e) {
        std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
    }

    try {
        auto equilateral = std::make_unique<EquilateralTriangle>(30);
        std::cout << "Равносторонний треугольник (стороны 30, 30, 30; углы 60, 60, 60) создан" << std::endl;
        figures.push_back(std::move(equilateral));
    }
    catch (const FigureException& e) {
        std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
    }

    try {
        auto quad = std::make_unique<Quadrilateral>(10, 20, 30, 40, 50, 60, 70, 80);
        std::cout << "Четырёхугольник (стороны 10, 20, 30, 40; углы 50, 60, 70, 80) создан" << std::endl;
        figures.push_back(std::move(quad));
    }
    catch (const FigureException& e) {
        std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
    }

    try {
        auto rect = std::make_unique<Rectangle>(10, 20);
        std::cout << "Прямоугольник (стороны 10, 20, 10, 20; углы 90, 90, 90, 90) создан" << std::endl;
        figures.push_back(std::move(rect));
    }
    catch (const FigureException& e) {
        std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
    }

    try {
        auto square = std::make_unique<Square>(20);
        std::cout << "Квадрат (стороны 20, 20, 20, 20; углы 90, 90, 90, 90) создан" << std::endl;
        figures.push_back(std::move(square));
    }
    catch (const FigureException& e) {
        std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
    }

    try {
        auto parallelogram = std::make_unique<Parallelogram>(20, 30, 30);
        std::cout << "Параллелограмм (стороны 20, 30, 20, 30; углы 30, 150, 30, 150) создан" << std::endl;
        figures.push_back(std::move(parallelogram));
    }
    catch (const FigureException& e) {
        std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
    }

    try {
        auto rhombus = std::make_unique<Rhombus>(30, 30);
        std::cout << "Ромб (стороны 30, 30, 30, 30; углы 30, 150, 30, 150) создан" << std::endl;
        figures.push_back(std::move(rhombus));
    }
    catch (const FigureException& e) {
        std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
    }

    std::cout << std::endl;
    std::cout << "=== Успешно созданные фигуры ===" << std::endl;
    for (const auto& figure : figures) {
        figure->printInfo();
        std::cout << std::endl;
    }

    return 0;
}