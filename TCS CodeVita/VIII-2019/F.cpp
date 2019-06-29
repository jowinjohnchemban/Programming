// CodeVita Season 8 #2019
//Q. F) Lifeguard Prob


#include<iomanip>
#include<math.h>
#include<iostream>

using namespace std;

int main()
{
    int xl,yl,xw,yw;
    float f,x=0.000000;

	//cout<<"Input\n";
    cin>>xl>>yl; // Input
    cin>>xw>>yw;
    cin>>f;

    x= sqrt(((xw*xw)+(xl*xl*f*f))/((f*f)+1)); // Formula

  	//cout<<"Output\n";
    cout<<fixed<<setprecision(6)<<x; // Precession Output up to 6 decimal places

    return 0;
    
}





// Coded By : Jowin John Chemban
//            jowinchemban@gmail.com
//            https://www.github.com/jowinjohnchemban/

//THANK GOD

//THANK YOU ALL!
