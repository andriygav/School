#include <iostream>

class myTree{
private:
	// Здесь нужные вам переменные
public:
// Конструктор
	myTree();

// Деструктор
	~myTree();

// Данная функция возвращает количество элементов
	size_t len();

// Данная функция добавляет элемент в дерево
	void append(int data);

// Данная функция очищает дерево, освобождая память
	void clear();

// Данная функция считает сколько раз data встречается в дереве
	size_t count(int data);


// Данная функция выводит дерево
	void print();

// Определим оператор плюс для дерева, как объединение двух деревьев
	myTree& operator+(myTree& Tree);

// Определим оператор плюс между списоком и числом
	myTree& operator+(int data);

};