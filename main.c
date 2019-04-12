#include <stdio.h>


void sub1(){

}

void sub2(){

}

void sub3(){
	printf("\n-----구구단-----\n");
	for (int i = 1; i < 10; i++){
		for(int j = 1; j < 10; j++){
			printf("%d ",i*j);
		}
		printf("\n");
	}
}


void sub4(){
	
}

int main(){
	
	sub1();
	sub2();
	sub3();
	sub4();


	return 0;
}
