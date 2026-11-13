#include<iostream>

using namespace std;

int main()
{
int n=0 ,i=2;
cout<<"app to know the number is the prime or not"<<endl;
cout<<"pleas enter the number : ";
cin>>n;
bool flog=true;

while(i<n)
{
    if(n%i==0)
    {
        flog=false;
        break;
    }
    i++;
}
if(n%2==0)
{

    flog=false;

}
if(flog){
    cout<<"the number is prime"<<endl;
}else{
    cout<<"the number is not prime"<<endl;
}


cout<<"==============================="<<endl;

    return 0;
}