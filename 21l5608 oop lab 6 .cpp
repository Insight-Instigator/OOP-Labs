#include<iostream>
using namespace std;
class Mybigint
{
int* bigint;
int intlenght;
public:
///construcor ill call by two times 
Mybigint(int size=5)
{
    bigint=nullptr;
    intlenght=5;
    cout<<"constructor parameterized and non parameterized called collectively "<<endl;
    intlenght=size;
    bigint=new int[intlenght];
    
}
////copying the values 
Mybigint(const Mybigint &obj)
{
    intlenght=obj.intlenght;
    bigint=new int[intlenght];
    for(int i=0;i<intlenght;i++)
    {
        bigint[i]=obj.bigint[i];
    }
    cout<<"copyconstructorcalled"<<endl;
}
////assigning the values 
void assign(const Mybigint &obj)
{
     intlenght=obj.intlenght;
    bigint=new int[intlenght];
    for(int i=0;i<intlenght;i++)
    {
        bigint[i]=obj.bigint[i];
    }
    cout<<"assign function"<<endl;
}
///compairing and returning 
int compare(const Mybigint & obj)
{
    bool check;
    for(int i=0;i<intlenght;i++)
    {
        if(bigint[i]==obj.bigint[i])
        {
          check=false;
        }
        else{
            check=true;
            break;
        }
    }
    return check;
}
////displaying the content of copied array 
void display()
{
    for(int i=0;i<intlenght;i++)
    {
        cout<<" "<<bigint[i]<<" ";
    }
    cout<<endl;
}
////inputting the values 
void input()
{
    cout<<"enter values of array:";
    for(int i=0;i<intlenght;i++)
    {
        cin>>bigint[i];
    }
    cout<<endl;
}
////calling of the desructor  3 times call for three objects 
~Mybigint()
{
    if(bigint!=nullptr)
    {
        delete [] bigint;
        bigint=nullptr;
        cout<<"destructor"<<endl;
    }
}
};
int main()
{
    Mybigint obj1;
    Mybigint obj2(5);
    obj2.input();
    Mybigint obj3=obj2;
    obj3.display();
    obj3.assign(obj2);
    obj3.display();
int a=obj2.compare(obj3);
cout<<"after comparing the arrays :";
cout<<" "<<a<<endl;
    return 0;
}