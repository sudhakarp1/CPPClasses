#include <iostream>
#include <cmath>
using namespace std;
double cW(int d,int m,int y){
		int c=y/100;
		int Y=y-100*c;
		int w=fmod(d+(2.6*m-0.2)+Y+(Y/4.0)+(c/4.0)-2*c,7);
		return w;
	}
int main(){
		int d,m,y;
		do{
				cout<<"Enter d";
				cin>>d;
				if(d<1 || d>31){
						cout<<"invalid";
				}
		}
				while(d<1 || d>31);
		do{
				cout<<"Enter m";
				cin>>m;
				if(m<1 || m>12){
						cout<<"invalid";
				}
		}
				while(m<1 || m>12);
		cout<<"Enter year";
		cin>>y;
		double w=cW(d,m,y);
		cout<<w;
		return 0;

}



