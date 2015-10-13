#include <iostream>

const int n=3;
struct cb
{
    char name[20];
    float weight;
    int blablabla;
};
using namespace std;
int main() {
    cb wow[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> wow[i].name >> wow[i].weight >> wow[i].blablabla;
        cout << endl;
    }
    for (int i = 0; i < n; ++i)
    {
        cout << wow[i].name << " " << wow[i].weight << " " << wow[i].blablabla << endl;
    }
    return 0;
}

