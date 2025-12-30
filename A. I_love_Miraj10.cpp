#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int points[n];
    for (int i = 0; i < n; i++)
    {
        cin >> points[i];
    }

    int amazing = 0;
    int max_score = points[0];
    int min_score = points[0];

    for (int i = 1; i < n; i++)
    {
        if (points[i] > max_score)
        {
            amazing++;
            max_score = points[i];
        }
        else if (points[i] < min_score)
        {
            amazing++;
            min_score = points[i];
        }
    }

    cout << amazing << endl;

    return 0;
}

