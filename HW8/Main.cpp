/*
ДЗ 8

Тема: перегрузка операторов в языке С++

ВАРИАНТЫ ЗАДАНИЙ

Реализовать картотеку в виде консольного приложения. Программа включает класс, описывающий студента и позволяющий считать информацию с консоли и вывести информацию на экран. Все эти действия должны быть выполнены с помощью перегруженных операторов «<<» и «>>» . Так же необходимо перегрузить оператор присваивания.

*/


#include <iostream>

class Student {
public:
	Student();
	Student(std::string name, unsigned int age, float ball_za_matan):name(name), age(age), ball_za_matan(0) {}
	Student& operator=(Student const& s) { return *this; }
	friend std::ostream& operator<<(std::ostream& os, Student const&  s);
	friend std::istream& operator>>(std::istream& is, Student& s);
	std::string name = "NoName";
	unsigned int age = 0;
	float ball_za_matan = 0;
};


std::ostream& operator<<(std::ostream& os, Student const&  s)
{
	os << "Student " << s.name << std::endl << "Age: " << s.age << std::endl << "Math: " << s.ball_za_matan << std::endl;
	return os;
}

std::istream& operator>>(std::istream& is, Student& s) {
	is >> s.age >> s.ball_za_matan;
	s.ball_za_matan = 0; // Не ну пересдать матан невозможно
	return is;
}

int main(){
	
}