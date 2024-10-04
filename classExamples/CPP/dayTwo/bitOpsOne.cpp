#include <iostream>
#include <bitset>
using namespace std;

class Number{
	int num;
public:
	void setNum(int x=0){
		num = x;
	}
	void disp(){
		cout<<"signed num: "<<num<<"\tUnsigned num: "<<(unsigned)num<<"\tHexa: "<<hex<<num<<dec<<endl;
		printBinary();
		cout<<"-----------------------------------\n";
	}		
		
	void bitState(int pos){
		cout<<pos<<" bit on "<<dec<<num<<" is "<< ((num & (1 << pos)) ? "ON" :"OFF") <<endl;
	}		
	
	void bitToggle(int pos){
		num ^= (1 << pos);
	}

	void bitNibble(int pos){
		num ^= (15 << (pos / 4 * 4));
	}
	void printBinary(){
		cout<<"Binary: ";
		for (auto i = 31; i >= 0 ; --i){
			cout<< ((num & (1 << i)) ? "1" :"0") ;
			if (i % 4 == 0)
				cout<<"  ";
		}
		cout<<endl;
	}
};

int main(){
	Number obj;
	obj.setNum(10);
	obj.disp();
	obj.bitState(5);
	obj.bitNibble(5);
	cout<<"After toggling"<<endl;
	obj.disp();
}

