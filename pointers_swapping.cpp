#include<iostream>
using namespace std;
void swap(int* a, int* b){
    int swap;
    swap = *a;
    *a = *b;
    *b = swap;
}


int main()
{
    int a = 5, b = 2;
    cout << "Value of a and b before swapping: " << a << " "<<b <<endl;
    swap(&a, &b);
    cout << "Value of a and b after swapping: " << a << " "<<b <<endl;
    return 0;
}
