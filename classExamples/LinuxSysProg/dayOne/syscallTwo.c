#include <unistd.h>
int main(){
	write(1, "My Output!...\n", 14);
	write(2, "My Error!...\n", 13);
}
