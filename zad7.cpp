#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int imoti[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Chovek[" << i + 1 << "] = ";
        cin >> imoti[i];
    }

    int min = 0;
    int max = 0;
    for (int i = 0; i < 10; i++)
    {
        if (imoti[i] >= 0)
        {
            if (imoti[i] < min || i == 0)
            {
                min = imoti[i];
            }
            if (imoti[i] > max || i == 0)
            {
                max = imoti[i];
            }
        }
    }
    //sort(imoti, imoti + sizeof(imoti) / sizeof(imoti[0]));
    cout << "Nai-golqm broi imoti: " << max << "\n";
    cout << "Nai-maluk broi imoti: " << min;
}