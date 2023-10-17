#include <iostream>
using namespace std;
int main(){
   int a=10,*aptr;
   aptr= &a;
   cout<<"The original value of a is: "<<*aptr<<endl;
   cout<<"The original address of a is: "<<aptr<<endl;
   *aptr=*aptr+1;
   aptr++;
   &aptr= *aptr;
   cout<<"The incremented value of a is: "<<*aptr<<endl;
   cout<<"The new address of a is: "<<aptr<<endl;
    return 0;
}
