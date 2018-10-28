#include "myList.h"


int main(){

	myList List;

	for(int i = 0; i < 10; i++){
		List.append(i);
	}

	myList List2;

	for(int i = 10; i < 20; i++){
		List2.append(i);
	}

	List = List + List2;

	List = List + 1231;

	List[2] = 123;

	List.print();
	std::cout<<List.len()<<std::endl;

	std::cout<<List[1]<<std::endl;

	List.print();
	std::cout<<List.len()<<std::endl;

	return 0;
}









