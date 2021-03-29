#include <stdio.h>
#include <stdlib.h>


typedef struct{
	float x,y,r;
}CIRCLE;

CIRCLE *new_circle(float x, float y, float r){
	CIRCLE *c = malloc(sizeof(CIRCLE));

	c->x=x;
	c->y=y;
	c->r=r;

	if (c == 0){
		printf("NULL");
	}
	else printf("adresa allokovanej pamati = %p ",&c);
}

void destroy_circle(CIRCLE *to_destroy){
	free(to_destroy);
}

main(){
	CIRCLE *C;
	float x=1,y=1,r=2;
	C = new_circle(x,y,r);

	destroy_circle(C);	
		
}





