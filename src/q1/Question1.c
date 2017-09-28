#include <stdio.h>

//Function prototypes
void createInt();
void createIntPointer();
void createLong();
void createDoublePointer();
void createCharPointerPointer();

void createInt(){
	int i = 3;
	printf(i)
	printf(sizeof(i));
}

void createIntPointer(){
	int i = 3;
	int* p = &i;
	printf(p);
	printf(sizeof(p));
}

void createLong(){
	long l = 1000000000;
	printf(l);
	printf(sizeof(l));
}

void createDoublePointer(){
	double d = 10;
	double* p = &d;
	printf(p);
	printf(sizeof(p));
}

void createCharPointerPointer(){
	char c = 'A';
	char* p = &c;
	char** q = &p;
	printf(q);
	printf(sizeof(q));
	


/*Main is the entry point to the programme
There are 2 arguments. arg is the number of
command line arguments, argv is the arguments.*/ 
void main(int arg,char* argv[] ){
	createInt();
	createIntPointer();
	createLong();
	createDoublePointer();
	createCharPointerPointer();
	
	
}
