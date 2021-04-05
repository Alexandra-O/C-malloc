#include <stdio.h>
#include <stdlib.h>

typedef struct{
	float x,y,r;
}CIRCLE;

CIRCLE *new_circle(float x, float y, float r){
	
	CIRCLE *c;
	c = malloc(sizeof(CIRCLE));
	
	if (c == NULL)
		return NULL;	
		
	c->x=x;
	c->y=y;
	c->r=r;
	return c;

}

void destroy_circle(CIRCLE *to_destroy){
	free(to_destroy);
}

main(){
	CIRCLE *C;
	float x=1,y=1,r=2;
	
	C = new_circle(x,y,r);
	
	printf("x = %.2lf\ny = %.2lf\nr = %.2lf\n",C->x,C->y,C->r);
	
	destroy_circle(C);	
		
}





