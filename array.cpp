#include <iostream>
#include<algorithm>
#include<cctype>

using namespace std;//the secound atttempt\\

int main()
{
int Array []={1,2,3,4,5,6};
int SizeArray =size(Array);
cout<<SizeArray<<endl;cout<<"===================\n";
for(int  i =1; i<=SizeArray;i+=2) 
{
    cout<<i<<endl;
}

return 0;
}