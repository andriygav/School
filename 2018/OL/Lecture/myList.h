#include <iostream>

class myList{
private:
	struct node{
		struct node* next;
		struct node* previous;
		int data;
	};

	struct node* head;
	size_t length;
public:

// Объявляем конструктор класса
	myList();

// Объявляем деструктор класса
	~myList();

// Данная функция возвращает длину списка
	size_t len();

// Данная функция добавляет элемент в конец списка
	void append(int data);

// Данная функция очищает список, при этом освобождая список
	void clear();

// Данная функция считает сколько раз data встречается в списке
	size_t count(int data);

// Данная функция вставляет элемент data на место под номером index.
// Если index > length, то данные записываються в конец.
	void insert(int data, size_t index);

// Данная функция разворачивает список
	void reverse();

// Данная функция выводит список
	void print();

// Данная функция возвращает элемент index и удаляет его из списка
// если index >= this->length, то возвращает последний элемент
	int pop(size_t index);

	int& get(size_t index);

// Данная функция возвращает первое вхождения data в список
// возвращает this->length, если такого нету
	size_t index(int data);

// Данная функция удаляет первое вхождения элемента data в список
	void remove(int data);

// Определим оператор плюс для списка, как объединение двух списков
	myList& operator+(myList& List);

// Определим оператор плюс между списоком и числом
	myList& operator+(int data);

// Определим оператор [], чтобы со списком можно было бы работать как с массивом
	int& operator[](size_t index);
	// int operator[](size_t index);

// Определим оператор присваивания
	// myList operator=(myList)

};
