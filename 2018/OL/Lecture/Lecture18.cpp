#include <stdio.h>
#include <stdlib.h>

#define MAX_NUM_V 1000
#define MAX_NUM_E 100


// input:
// 		V --- масив ребер графа размера [m, 2]
// 		E --- масив значений графа на вершинах размера [n]
// return:
// 		flag --- 0 если граф не дерево и 1 если дерево
int is_tree(int V[MAX_NUM_V][2], int E[MAX_NUM_E]){
	int flag = 0;

	//Ваш код здесь

	return flag;
}


// input:
// 		V --- масив ребер дерева размера [m, 2]
// 		E --- масив значений дерева на вершинах размера [n]
// return:
// 		height --- высота дерева
int tree_height(int V[MAX_NUM_V][2], int E[MAX_NUM_E]){
	int height = 0;

	//Ваш код здесь

	return height;
}

/*
	1. Проверить является ли граф с ребрами V и вершинами E деревом
	2. Если граф дерево, то вывести высоту дерева
	input:
		n --- числа в диапазоне 0...100
		m --- число в диапазоне 0...1000
		далее строка из n чисел
		далее идет m строк в каждой из которых записано 2 числа --- откуда и куда ребро

	output:
		если граф дерево то вывести его высоту, иначе сказать что это не дерево.
*/

int main(){

	int n, m;

	int V[MAX_NUM_V][2];
	int E[MAX_NUM_E];

	scanf("%d%d", &n, &m);

	for(int i = 0; i < n; i++){
		scanf("%d", &E[i]);
	}

	for(int i = 0; i < m; i++){
		scanf("%d%d", &V[i][0], &V[i][1]);
	}

	int flag = is_tree(V, E);
	int height = -1;
	if(flag){
		height = tree_height(V, E);
	}

	if(flag){
		printf("This graph is tree.\n It's height is %d.\n", height);
	}else{
		printf("This graph is not tree.\n");
	}

	return 0;
}



