#include<iostream>
using namespace std;
int main()
{
  
    char cr_value = 'a';
    char *cr_ptr;

    cr_ptr = &cr_value;
    cout << "Value of character: " << cr_value << endl;
    cout << "Value of cr_ptr: " << (void*)cr_ptr << endl;
    ++cr_ptr;
    cout << "Value of Incremented cr_ptr: " << (void*)cr_ptr << endl;


    return 0;
}
