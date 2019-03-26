#include <iostream>

class myBinTree{
private:
	// Здесь нужные вам переменные
public:
// Конструктор
	myBinTree();

// Деструктор
	~myBinTree();

// Данная функция возвращает количество элементов
	size_t len();

// Данная функция добавляет элемент с ключем в дерево
	void append(int data, int key);

// Данная функция очищает дерево, освобождая память
	void clear();

// Данная функция возвращает значение по ключу
	void get(int key);


// Данная функция выводит дерево
	void print();

// Определим оператор плюс между списоком и числом
	myTree& operator[](int key);

};
