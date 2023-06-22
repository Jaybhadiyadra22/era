#include<iostream>
#include<string.h>
using namespace std;
class distans{
	public :
	int feet;
	float inch ;
};
int main()


{
	distans d1,d2,sum;
	
   
    cout <<"endlenter first distans = endl";	
	cout<<"enter feet:";	
    cin>>d1.feet;
    cout <<"enter inch=";		
    cin>>d1.inch;
    
    cout <<"endlenter 2nd distans = endl";	
	cout<<"enter feet:";
	cin>>d2.inch;
   sum.feet = d1.feet+d2.feet;
   sum.feet = d2.inch+d2.inch;
   if(sum.inch>12){
   	++sum.feet;
   	sum.inch-=12;
   }
   cout<<"endl sum of distans = "<<sum.feet<<"feet"<<sum.inch<<"inch";
   cout<<endl;
   

    
	
	return 0;
}
