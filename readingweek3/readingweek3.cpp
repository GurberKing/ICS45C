#include <iostream>

using namespace std;

int main()
{
    constexpr int arr[] { 0, 1, 4, 9 };

    while (true)
    {
        cout << "Enter a single digit integer, or -1 to quit: ";

        int num{};
        cin >> num;

        if (num == -1)
        {
            break;
        }

        bool found{ false };

        for (int i = 0; i < 4; i++)
        {
            if (arr[i] == num)
            {
                found = true;
                break;
            }
        }

        if (found)
        {
            cout << num << " is a perfect square.\n";
        }
        else
        {
            cout << num << " is not a perfect square.\n";
        }
    }

    cout << "Bye\n";

    return 0;
}