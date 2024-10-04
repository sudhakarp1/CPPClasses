#include <stdio.h>
#include <string.h>

int main(){
	int cnt;
	for(cnt = 0; cnt < 128; ++cnt)
		printf("%d --> %s\n", cnt, strerror(cnt));
}
