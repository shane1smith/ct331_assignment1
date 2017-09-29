#include <stdio.h>
#include <Question1.h>



void createInt(){
	int i = 3;
	printf("d%",i);
	printf("zu%"sizeof(i));
}

void createIntPointer(){
	int i = 3;
	int *p = &i;
	printf("p%",p);
	printf("zu%",sizeof(p));
}

void createLong(){
	long l = 1000000000;
	printf("%d",l);
	printf("%zu",sizeof(l));
}

void createDoublePointer(){
	double d = 10;
	double *p = &d;
	printf("%p",p);
	printf("%zu",sizeof(p));
}

void createCharPointerPointer(){
	char c = 'A';
	char *p = &c;
	char **q = &p;
	printf("%p",q);
	printf("%zu",sizeof(q));
}
	


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
