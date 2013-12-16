#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a, b;
    float c;
    cout<<"input your hight(cm):"<<endl;
    cin>>a;
    cout<<endl;
    cout<<"input your weight(kg):"<<endl;
    cin>>b;
    cout<<endl;
    c=b/((a/100)^2);
    cout<<"Your BMI is:"<<c<<endl;
    if(c<18.5){
             cout<<"over light!!!"<<endl;   
    }
    else if(24<c){
             cout<<"over weight!!!"<<endl;  
    }
    else{
         cout<<"Healthy!"<<endl;
    }
    system("PAUSE");
    return 0;
}
