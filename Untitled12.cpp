#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

float max ( float  , float  , float  );

main()
{
	float x , y , z ;
	
	cout<<"Please enter x : "<<endl;
	cin>>x;
	
	cout<<"Please enter y : "<<endl;
	cin>>y;
	
	cout<<"Please enter z : "<<endl;
	cin>>z;	
	
	cout<< max ( x , y , z );
	
}

float max ( float a , float b , float c )
{
	float m;
	
	m = a ;
	
	if ( b > m )
	{
		m = b;
	}
	if ( c > m )
	{
		m = c;
	}
	return m;
}
