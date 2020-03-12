#include <iostream>
#include <String>

template < typename T1, typename T2 >
struct pair1
{
    T1* first;
    T2* second;
};

template < typename T >
void swap1(T& first, T& second) 
{
    T temp(first); 
    first = second;
    second = temp;
}

using namespace std;

int main()
{
    pair1<int, double> obj = { new int(10) , new double(67.98) };
    cout << *obj.first << ' ' << *obj.second << endl;
    delete obj.first;
    delete obj.second;

    int x = 10;
    int y = 432;
    swap(x, y);
    cout << x << endl;
    cout << y << endl;
}


