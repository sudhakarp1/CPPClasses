#include <iostream>
#include <iomanip>
using namespace std;

void printCal(int , int); //declarations or prototype
int weekDay(int,int,int);
int monthlyDays(int , int );
bool isLeap(int);

int main(){
	int dd= 1, mm = 9, yyyy = 2024;
	int week = weekDay(dd, mm, yyyy);	
	int	maxDays = monthlyDays(mm, yyyy);
	printCal(week, maxDays); //calling or using or invoking
}

bool isLeap(int year){
	if (((year % 4) == 0) && ((year % 100) != 0))
		return true;
	if (((year  % 100) == 0) && ((year % 400) == 0))
		return true;
	return false;
}

int monthlyDays(int mon, int year){
	int days = 30;
	if (mon == 2){
		if (isLeap(year) == true)
			days = 29;
		else
			days = 28;
	} else if(mon == 1 || mon == 3 || mon == 5||mon == 7 || mon == 8||mon == 10 ||mon == 12)	
			days = 31;

	return days;
}

int weekDay(int dd, int mm, int year){//formal arguments/parameters
	int yy, cent;//local data
	if (mm <= 2){
		mm += 10;
		year -= 1;
	}else{
		mm -= 2;
	}
	yy = year % 100;
	cent = year / 100;
	
	int week = (dd +  (2.6 * mm - 0.2) + yy + (yy / 4) + (cent / 4 )- (2 * cent));

	week %= 7;
	if (week < 0)
		week += 7;

	return week;
}

void printCal(int w, int mds){//definition 
	cout<<"Su Mo Tu We Th Fr Sa"<<endl;
	for (auto cnt = 1; cnt <= w; ++cnt)
		cout<<setw(3)<<left<<' ';
	for (auto cnt = 1; cnt <= mds; ++cnt){
		cout<<setw(3)<<left<<cnt;
		if ((w + cnt) % 7 == 0)
			cout<<endl;
	}
	cout<<endl;
}

