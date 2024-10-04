#include <stdio.h>
#pragma pack(1)
struct ABC{
	int a;
	double c;
	float b;
};
#pragma pack()

int main(){
	printf("Size: %lu\n",sizeof(struct ABC));
}
