#include "myList.h"


int main(){

	myList List;

	myList List2;

	for(int i=0; i<10; i++){
		List.append(i);
	}

	for(int i=10; i<20; i++){
		List2.append(i);
	}

	List.print();
	List2.print();

	List = List + List2;

	List2 = List2 + 34544;

	List[15] = 123;

	List.print();
	List2.print();

	List.clear();
	List.print();
	List2.clear();
	List2.print();
	return 0;
}









