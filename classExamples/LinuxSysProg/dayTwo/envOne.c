#include <stdio.h>
#include <stdlib.h>

		int main(int argc, char *argv[], char *env[]){
			for(int cnt = 0; env[cnt] != NULL; ++cnt)
				printf("env[%d] --> %s\n", cnt ,env[cnt]);

			printf("Using getenv() --> %s\n",getenv("SHELL"));
		}
