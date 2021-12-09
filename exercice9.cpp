#include <iostream>
using namespace std;
static int i;//definir le variable static i 
class Test{
    
 
    public:
    void call(){ //fonction call qui va incrementer la valeur de i 
        i++;
    }
    void verified(){ //fonction verified
        cout<<i<<endl;

    }
};
int main(){
    Test t1;
    t1.call();
    t1.call();
    t1.call();
    t1.call();
    Test t2;
    t2.call();
    Test t3;
    Test t4;
    t1.verified();
};
