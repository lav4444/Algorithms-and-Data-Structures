#include <iostream> 

using namespace std;

template <typename T> 
int binarnoTrazi (T polje[], int n, T x) {
    int vrati = -1;
    int dg = 0, gg = n-1;
    int cnt = 0;
    while (true) {
        // cout << "WATCHING: " << polje[(gg-dg) / 2 + dg ] << "at Index: "<< (gg-dg) / 2 + dg  << endl;
        // cout << "dg-gg: " << dg << "-" << gg << endl << "------" << endl;
        if ( polje[(gg-dg) / 2 + dg ] == x ) {
            vrati = (gg-dg) / 2 + dg;
            break;
        } 
         if (dg == gg) {
            break;
        }
        if( polje[(gg-dg) / 2 + dg ] > x ) {
            gg = gg - (((gg-dg)) / 2) - 1;
        } else {
            dg = dg + ((gg-dg) / 2) + 1;
        }
        
        

    }


    return vrati;
}

int main() {
    int n;
    float x;

    cout << "Upišite n i x: ";
    cin >> n >> x;

    int polje[n];

    for (int i=0; i<n; i++) {
        polje[i] = i + 3;
        cout << polje[i] << " ";
    }
    cout << endl << endl;
    cout << "Element se nalazi na indexu: " << binarnoTrazi<int>(polje, n, x) << endl;


    return 0;
}