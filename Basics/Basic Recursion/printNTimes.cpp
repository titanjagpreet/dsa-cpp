#include <iostream>
using namespace std;

void printSomething(int count)
{
    if (count < 10)
    {
        cout << "Hello There, Hell Here" << endl;
        count++;
        printSomething(count);
    }
    else {
        return;
    }
}

int main()
{
    int count = 0;
    printSomething(count);

    return 0;
}