#include <bits/stdc++.h>
using namespace std;

class Mushuk
{
public:
    Mushuk(int yosh) {
        itsYosh = yosh;
        cout << "yaratildi\n";
    };
    ~Mushuk() {
        cout << "o'chirildi\n";
    };
private:
    int itsYosh;
};
int main()
{
    Mushuk Frisky(9);
    return 0;
}
