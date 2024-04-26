#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	float x;
	char op ;
	cout<<"enter two numbers";
	cin>>num1>>num2;
	cout<<"enter operator";
	cin>>op; //asking for operator
	switch (op)
	{
		case '+' :{ //if user enter + add both num
			x=num1+num2;
			cout<<"result: "<<x;
			break;
		}
		case '-' :{ //if user enter - subtract both num
			x=num1-num2;
			cout<<"result: "<<x;
			break;
		}
		case '*' :{ //if user enter * multiply both num
			x=num1*num2;
			cout<<"result: "<<x;
			break;
		}
		case '/' :{ //if user enter / divide both num
			x=num1/num2;
			cout<<"result: "<<x;
			break;
		}
		case '%' :{ //if user enter % it calculate the remainder 
			x=num1%num2;
			cout<<"result: "<<x;
			break;
		}
		default : {cout<<"invalid operator";
			break;
		}
		
	}
	
}
