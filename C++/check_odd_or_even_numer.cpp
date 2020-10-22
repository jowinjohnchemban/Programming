#include"iostream"
int main()
{using namespace std;
int n;
cout<<"Enter the number\n";
cin>>n;
if(n==0){
    cout<<"Zero";
}
else if(n%2==0){
    cout<<"Even number\n";
    return 2;
}
else if(n%2==1){
    cout<<"Odd number\n";
    return 1;
}
else{
    cout<<"Error: Invalid input\n\a";
}
return 0;
}
