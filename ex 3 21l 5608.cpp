#include <iostream>
using namespace std; 
template <class Z>

class Container
{
    private:
	    z DATA;
    public:
	    Container(int y) 
        {
		   DATA=y;
	    }

    	int upheavel() 
        {
		    DATA = DATA + 9;
		    return DATA;
    	}
};

template< >

class CONTAINER<char> 
{
    private:
	    char DATA;
    public:
	    CONTAINER(char z) 
        {
            DATA=z;
        }
	    char CAPITALLETTERS() 
        {
            DATA = DATA - 32 ;
		    return DATA;
        }
};

    int main(){
	
    
	CONTAINER<char> mycharacter('z');
	Container<int> myinteger (10);
    

    cout<<myinteger.upheavel()<<endl;
	cout<<mychar.CAPITALLETTERS()<<endl;

}