#include <stdio.h>

//Function prototypes
void createInt();
void createIntPointer();
void createLong();
void createDoublePointer();
void createCharPointerPointer();

void createInt(){
	int i = 3;
	printf(int i);
	printf(sizeof(int i));
}

void createIntPointer(){
	int i = 3;
	int *p = &i;
	printf(int *p);
	printf(sizeof(int *p));
}

void createLong(){
	long l = 1000000000;
	printf(long l);
	printf(sizeof(long l));
}

void createDoublePointer(){
	double d = 10;
	double *p = &d;
	printf(double *p);
	printf(sizeof(double *p));
}

void createCharPointerPointer(){
	char c = 'A';
	char *p = &c;
	char **q = &p;
	printf(char **q);
	printf(sizeof(char **q));
	


/*Main is the entry point to the programme
There are 2 arguments. arg is the number of
command line arguments, argv is the arguments.*/ 
void main(int argc,char *argv[] ){
	createInt();
	createIntPointer();
	createLong();
	createDoublePointer();
	createCharPointerPointer();
	
	
}
