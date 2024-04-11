#include <iostream>
#include "Stack.h"
#include "Queue.h"

using namespace std;


void intToBinary(int dec)
 {
   int num;
    StackLL s;
    
    while (dec > 0) 
    {
        int a = dec % 2;
        s.push(a);
        dec/= 2;
    }

    cout << "Binary representation for the integer : ";
    
    while (!s.isEmpty()) 
    {
        cout << s.pop(num);
    }
    cout << endl;
}


void decToBinary(double dec) 
{
   QueueLL q;
    while (dec != 0.0) 
    {
        dec *= 2;
        int intNum = dec;
        q.enqueue(intNum);
        dec = dec - intNum; 
    }
}

int main()
{
    double dec;
    cout << "Enter a decimal number: ";
    cin >> dec;

    int intNum = dec; 
    double decNum = dec - intNum; 

    intToBinary(intNum); 
    decToBinary(decNum); 

    return 0;
}

