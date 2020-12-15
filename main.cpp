#include "Figure.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int choice;
	Figure *F;	
	std::cout << "1. Круг\n2. Прямоугольник\n3. Треугольник\n";
	cin >> choice;
	//Полиморфизм!
	switch (choice)
	{
	case 1:
		F = new Circle(5); // Создаем экземпляр Круга
		break;
	case 2:
		F = new Rectangle(3, 4); // Создаем экземпляр Прямоугольника
	case 3:
		F = new Triangle(1, 3, 5); // Создаем экземпляр Треугольника
	default:
		std::cout << "\nТы чего\n";
		break;
	}
	F->show();
	cout << "Площадь выбранной вами фигуры - " << F->calcArea() << endl;
	cout << "Объем выбранной вами фигуры - " << volumeFigure(F, 2) << endl; // вывод на экран объема фигуры
}