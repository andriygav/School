#include "myList.h"
#include <stdio.h>
#include <stdlib.h>

class stack{
private:
	myList List;
public:

	void push(int data);

	int pop();
};

void stack::push(int data){
	this->List.append(data);
}

int stack::pop(){
	return this->List.pop(this->List.len()+1);
}

class queue{
private:
	myList List;
public:

	void push(int data);

	int pop();
};

void queue::push(int data){
	this->List.append(data);
}

int queue::pop(){
	return this->List.pop(0);
}

int main(){

	std::cout<<"Пример работы стэка\n";
	std::cout<<"-------------------\n";
	stack st;

	for(int i=0; i<10;i++){
		st.push(i);
	}

	for(int i=0; i<10;i++){
		std::cout<<st.pop()<<std::endl;
	}

	std::cout<<"Пример работы очереди\n";
	std::cout<<"-------------------\n";
	queue qu;

	for(int i=0; i<10;i++){
		qu.push(i);
	}

	for(int i=0; i<10;i++){
		std::cout<<qu.pop()<<std::endl;
	}

	return 0;
}









