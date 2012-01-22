#include <iostream>

using namespace std;

int main()
{
    cout << "Year     USA              China" << endl;
    cout << "2010     46 000$          3 920$" << endl;
    double usa = 46000;
    double china = 3920;
    int year = 2011;
    for(year; usa >= china; year++) {
    usa = usa*1.025;
    china = china*1.09;
    cout << year << "     " << usa << "$          " << china << "$" << endl;

    }
    cout << endl;
    cout << "Chinczycy beda bogatsi od Amerykanow juz w " << year - 1 << " roku.";
}
