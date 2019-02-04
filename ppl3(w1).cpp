#include <iostream>
using namespace std;
int main()
{
    float a,b,c,d,e,f,g,h;
    cout<<"Enter numbers to calculate value of ((a + b / c * d - e) * (f - g)) expression ";
    cout<<"\nEnter a,b,c,d,e,f,g,h in order";
    cin>>a>>b>>c>>d>>e>>f>>g>>h;
    float q=a+b;
    float w=c*d-e;
    float v=f-g;
    float r=q/w;
    cout<<"\n Result of expression is: "<<r*v;
    return 0;
}
