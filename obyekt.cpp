#include <bits/stdc++.h>
using namespace std;

class Mushuk
{
private:
    int yosh;
    int ogirlik;

public:
    void Miyovlash() {
        cout << yosh;
    }

    void setYosh(int yoshi) {
        yosh = yoshi;
    }

};
int main()
{
    Mushuk berry;
    berry.setYosh(5);
    berry.Miyovlash();
    return 0;
}
