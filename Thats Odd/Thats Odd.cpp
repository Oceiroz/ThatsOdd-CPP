#include <iostream>
#include <string>
#include <map>
#include <cstdlib>
#include <ctime>

using namespace std;

int RandomNumber();

int main()
{
    while (true)
    {
        int number = RandomNumber();
        cout << number << endl;
        cout << 1 % 2 << endl;
        string strNum = to_string(number);
        map<int, int> valueAppearance;
        int oddCount = 0;
        int thatsOdd = 0;
        for (char c : strNum)
        {
            string strC = to_string(c);
            int intC = stoi(strC);
            valueAppearance[intC]++;
        }
        for (const auto value : valueAppearance)
        {
            if (value.second % 2 == 1)
            {
                oddCount++;
                thatsOdd = value.first;
            }
        }
        if (oddCount == 1)
        {
            cout << thatsOdd - 48 << endl;
            break;
        }
    }
}

int RandomNumber()
{
    srand((unsigned)time(NULL));
    int randNum = rand();
    return randNum;
}

