#include <iostream>
using namespace std;
int main()
{

    double result,num;
    char operation;

    cout<<"=====simbel calculator===="<<endl;
    cout<<"enter the two numbers"<<endl;
        cout<<"enter the first number : ";
        cin>>result;

        while(true)
        {
            cout<<"enter the one of the operations(+,-,*,/) or '=' to finish : "<<endl;
            cin>>operation;     
            if(operation=='=')
            {
                break;
            }
            cout<<"enter the next number : ";
            cin>>num;
            switch(operation)
            {
                case '+':
                
                result+=num;
                 break ;
                    case '-':
                    result-=num;
                    break;
                        case '*':
                        result*=num;
                        break;
                            case '/':
                            result/=num;
                            break;
                                default:
                                cout<<"Invalid operation ( please try again)"<<endl;




        }

            
          cout<<"Current result = "<<result<<endl;



        }

            cout<<"Final result = "<<result<<endl;



                    return 0;
 

        }



        

    
   
