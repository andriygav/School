#include "myList.h"

myList::myList(){
	this->head = NULL;
	this->length = 0;
}

myList::~myList(){
	this->clear();
}

size_t myList::len(){
	return this->length;
}

void myList::append(int data){
	struct node* temp = this->head;

	struct node* previous = NULL;

	if(temp == NULL){
		previous = temp;
		this->head = (struct node*)malloc(sizeof(struct node));
		temp = this->head;

	}else{

		while(temp->next != NULL){
			temp = temp->next;
		}

		previous = temp;
		temp->next = (struct node*)malloc(sizeof(struct node));
		temp = temp->next;

	}

	temp->next = NULL;
	temp->previous = previous;
	temp->data = data;


	this->length++;
}

void myList::clear(){
	struct node* temp = this->head;
	struct node* temp2 = NULL;
	while(temp != NULL){
		temp2 = temp;
		temp = temp->next;
		free(temp2);
	}
	this->head = NULL;
	this->length = 0;
}


size_t myList::count(int data){
	size_t counter = 0;

	struct node* temp = this->head;

	while(temp != NULL){
		if(temp->data == data){
			counter++;
		}
		temp = temp->next;
	}

	return counter;
}


void myList::insert(int data, size_t index){
	if(index == 0){
		struct node* temp = (struct node*)malloc(sizeof(struct node));
		temp->data = data;
		temp->next = this->head;
		temp->previous = NULL;
		this->head->previous = temp;
		this->head = temp;

		this->length++;
	}else{

		struct node* temp = this->head;
		struct node* previous = NULL;
		struct node* next = NULL;

		if(temp == NULL){
			this->append(data);
		}else{

			for(int i = 0; i < index; i++){
				if(temp->next != NULL){
					previous = temp;
					temp = temp->next;
					next = temp;
				}
			}

			
			temp = (struct node*)malloc(sizeof(struct node));
			temp->data = data;

			temp->next = next;
			if(temp->next != NULL){
				temp->next->previous = temp;
			}

			temp->previous = previous;
			if(temp->previous != NULL){
				temp->previous->next = temp;
			}
			
			this->length++;
		}
	}
}

void myList::reverse(){
	if(this->length > 1){
		struct node* temp = this->head;
		struct node* temp2 = NULL;
		while(temp != NULL){
			struct node* temp2 = temp->next;
			temp->next = temp->previous;
			temp->previous = temp2;
			temp = temp2;

			if(temp != NULL){
				this->head = temp;
			}
		}
	}
}

void myList::print(){
	std::cout<<'[';
	struct node* temp = this->head;

	while(temp != NULL){
		std::cout<<temp->data<<" ";
		temp = temp->next;
	}
	std::cout<<']'<<std::endl;
}


int myList::pop(size_t index){
	int data = 0;

	if(this->length == 0){
		return data;
	}

	if(index == 0){
		data = this->head->data;
		struct node* temp = this->head;
		this->head = temp->next;
		this->head->previous = NULL;
		free(temp);
		this->length--;
	}else{

		struct node* temp = this->head;
		struct node* previous = NULL;
		struct node* next = NULL;

		for(int i=0; i < index; i++){
			if(temp->next != NULL){
				previous = temp;
				temp = temp->next;
				next = temp->next;
			}
		}

		data = temp->data;

		free(temp);
		this->length--;

		if(previous != NULL){
			previous->next = next;
		}

		if(next != NULL){
			next->previous = previous;
		}

	}

	return data;
}

static int ret = 0;

int& myList::get(size_t index){

	if(this->length == 0){
		return ret;
	}

	if(index == 0){
		return this->head->data;
	}else{
		struct node* temp = this->head;

		for(int i=0; i < index; i++){
			if(temp->next != NULL){
				temp = temp->next;
			}
		}
		return temp->data;
	}

	return ret;
}

size_t myList::index(int data){
	size_t index = 0;

	struct node* temp = this->head;

	while(temp != NULL){
		if(temp->data == data){
			temp = NULL;
		}else{
			temp = temp->next;
			index++;
		}
	}

	return index;
}


void myList::remove(int data){
	struct node* temp = this->head;
	size_t index = this->index(data);

	if(index < this->length){
		this->pop(index);
	}
}

myList& myList::operator+(myList& List){
	size_t len = List.len();

	for(size_t i = 0; i < len; i++){
		this->append(List[i]);
	}

	return *this;
}

myList& myList::operator+(int data){
	this->append(data);
	return *this;
}

// static int data;
int& myList::operator[](size_t index){
	return this->get(index);
}



