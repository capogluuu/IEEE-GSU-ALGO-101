#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int x, y;

    // Vector yerine array tercih edilirse
    //int n = 4;
    //int arr[4] = { 1, 2, 3, -2 };
    //cin >> n;
    /*for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }*/
    // with vector
    
    vector<int> V;
    int helper;
    while (cin >> helper) {
        V.push_back(helper);
    }


    for (int i = 0; i < V.size()-1 ; i++) {
        for (int j = 0; j < V.size()- 1; j++) {
            
            x = V[j];
            y = V[j + 1];

            if (x > y) {
                cout << i << " nci eleman icin baslangictaki durum = ";
                for (int z = 0; z < V.size(); z++)
                {
                    cout << V[z] << " ";
                }
                cout << endl;
                
                V[j + 1] = x;
                V[j] = y;
                
                cout << i << " nci eleman icin sondaki durum = ";
                
                for (int z = 0; z < V.size(); z++)
                {
                    cout << V[z] << " ";
                }
                cout << endl << endl;
            }
        }
    }
    for (int i = 0; i < V.size() ; i++) {
        cout << V[i] << " ";
    }

    return 0;
}
