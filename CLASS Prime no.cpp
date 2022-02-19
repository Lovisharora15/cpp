#include<iostream>
using namespace std;
class prime
{
private:
    int n,count=0;
public:
    int i;
    void accept()
    {
        cout<<endl<<"enter no: ";
        cin>>n;
    }
    void calc()
    {
        for(i=1;i<=(n/2)+1;i++)
            {
                if(n%i==0)
                {
                    count=count+1;
                }
            }
        if(count==1)
            {
                cout<<"Prime";
            }
        else
            {
                cout<<"Not Prime";
            }
    }
};
int main()
{
    prime obj;
    obj.accept();
    obj.calc();
}
