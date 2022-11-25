#include <iostream>
using namespace std;
int main()
{
    int find =27; // ищем 
    const int size = 10;
    int sizeclon = size - 1;
    int arr[size] = { 3,5,9,12,15,17,21,26,27,29};
    for (; ;)
    {
        if (arr[sizeclon] == find) { cout << sizeclon; break; }
        if (arr[sizeclon+1] == find) { cout << sizeclon + 1; break; }
        if (find < arr[sizeclon])
        {
            sizeclon = sizeclon / 2;
        }
        else if (find > arr[sizeclon / 2])
        {
            sizeclon = (sizeclon - (sizeclon / 2)) / 2 + sizeclon / 2 + sizeclon;
        }
    }
}

