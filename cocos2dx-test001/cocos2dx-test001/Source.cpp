#include <stdlib.h>
#include <stdio.h>


void test(int tabTest[5]) {

	for (int i = 0; i < 5; i++) {
		printf("i => %d\ntab[i] => %d\n***************\n", i, tabTest[i]);
	}

}

void main() {

	int testTabSend[] = {5,10,15,20,25};

	test(testTabSend);
	system("pause");
}