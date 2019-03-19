#include "myTree.h"
#include <stdio.h>
#include <stdlib.h>

int main(){

	myTree Tree;

	myTree Tree2;

	for(int i=0; i<10; i++){
		Tree.append(i);
	}

	for(int i=10; i<20; i++){
		Tree2.append(i);
	}

	Tree.print();
	Tree2.print();

	Tree = Tree + Tree2;

	Tree2 = Tree2 + 34544;


	Tree.print();
	Tree2.print();

	Tree.clear();
	Tree.print();
	Tree2.clear();
	Tree2.print();
	return 0;
}









