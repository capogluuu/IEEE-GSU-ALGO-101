//TENGRI BIZ MENEN
/*
!!!
İlk kütüphane [cannot open source file "bits/stdc++.h"]	
hatası veriyorsa onu aşağıdaki kütüphanelerle değiştirebilirsiniz.
Onu silin ve aşağıdakileri yapıştırın.
!!!

#include <iostream>
#include <vector>

*/
#include <bits/stdc++.h>

using namespace std;
typedef pair<int,int> pint;
typedef vector<int> vint;

int main()
{
    string st="GSU";
    int x[10],tmp;
    vector<int> vec;
    /*vec.push_back(3); //vec[0]
    vec.push_back(6); //vec[1]
    vec.push_back(4); //vec[2]
    vec.push_back(2); //vec[3]*/

    //cin>>x[0]>>x[1]>>x[2];
    //cout<<x[0]<<x[1]<<x[2];

    cin>>tmp;
    vec.push_back(tmp);
    cin>>tmp;
    vec.push_back(tmp);
    cin>>tmp;
    vec.push_back(tmp);

    cout<<vec[0]<<vec[1]<<vec[2];

    return 0;
}
