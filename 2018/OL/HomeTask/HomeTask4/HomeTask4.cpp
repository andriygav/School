#include "myBinTree.h"
#include <stdio.h>
#include <stdlib.h>

int main(){

	myBinTree Tree;

	myTree Tree2;

	for(int i=0; i < 10; i++){
		Tree.append(i*i, i);
	}

	for(int i=10; i < 20; i++){
		Tree2.append(i*i, i);
	}

	Tree.print();
	Tree2.print();

	printf("%d\n", Tree[4])

	Tree.print();
	Tree2.print();

	Tree.clear();
	Tree.print();
	Tree2.clear();
	Tree2.print();
	return 0;
}









