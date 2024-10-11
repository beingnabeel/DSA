#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct term{
	int coeff;
	int expo;

};
struct poly{
	int n;
	struct term *t;
};

void create(struct poly *p){
	int i;
	printf("%d", &p->n);
	p->terms=(struct term*)malloc(p->n*sizeof(struct term));
	
}