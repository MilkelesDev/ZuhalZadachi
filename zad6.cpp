#include <iostream>
using namespace std;

int main()
{
    int peopleCount = 0;
    for (int i = 1; i <= 70; i++)
    {
        int current = 0;
        cout << "Chovek[" << i << "] = ";
        cin >> current;
        if (current > 0 && current <= 17)
        {
            peopleCount++;
        }
    }
    cout << "Broi hora na vuzrast mejdu 0 i 17 god:" << peopleCount;
}