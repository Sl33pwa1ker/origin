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

int main() {
    std::vector<std::unique_ptr<Figure>> figures;

    // Создаём все фигуры
    figures.push_back(std::make_unique<Triangle>(10, 20, 30, 50, 60, 70));
    figures.push_back(std::make_unique<RightTriangle>(10, 20, 30, 50, 60));
    figures.push_back(std::make_unique<IsoscelesTriangle>(10, 20, 50, 80));
    figures.push_back(std::make_unique<EquilateralTriangle>(30));

    figures.push_back(std::make_unique<Quadrilateral>(10, 20, 30, 40, 50, 60, 70, 80));
    figures.push_back(std::make_unique<Rectangle>(10, 20));
    figures.push_back(std::make_unique<Square>(20));
    figures.push_back(std::make_unique<Parallelogram>(20, 30, 30));
    figures.push_back(std::make_unique<Rhombus>(30, 30));

    // Выводим информацию о всех фигурах
    for (const auto& figure : figures) {
        figure->printInfo();
        std::cout << std::endl;
    }

    return 0;
}