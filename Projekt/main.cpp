#include <iostream>

using namespace std;
int x;

int main()
{
    cout << "Podaj liczbe od 0 do 1" << endl;
    cin >> x;

    if (x==0)
    {
        cout << "Nie"<< endl;
    }
    else
    {
        cout << "Tak" <<endl;
    }
    return 0;
}
