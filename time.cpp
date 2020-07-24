#include<iostream>
using namespace std;
class Time
{
 public:
 	int h,min,sec,s;
    void times();
	void convertsec();
	void display();	
};
void Time::times()
      {     
       cout<<"Enter time:"<<"\n";
	   cout<<"Hours?";
	   cin>>h;
	   cout<<"Minutes?";
       cin>>min;
	   cout<<"Seconds?";
	   cin>>sec;
	  }
void Time::convertsec()
      {
       s=h*3600+min*60+sec;
	  }
void Time::display()
{
	cout<<"The time is="<<'0'<<h<<":"<<'0'<<min<<":"<<'0'<<sec<<"\n";
	cout<<"Time in total seconds:"<<s;
}
int main()
{
 Time T;
 T.times();
 T.convertsec();
 T.display();
 return 0; 
}

