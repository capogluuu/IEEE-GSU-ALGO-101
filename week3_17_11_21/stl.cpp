//TENGRI BIZ MENEN

#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define mp make_pair
#define tc int t;cin>>t;for(int i=1;i<=t;i++) f(i);
#define read(x) freopen(x,"r",stdin)
#define write(x) freopen(x,"w",stdout)
#define fr first
#define sc second
#define sz size
#define fi(x) for(int i=0;i<x;i++)
#define fj(x) for(int j=0;j<x;j++)
using namespace std;
typedef pair<int,int> pint;
typedef vector<int> vint;

void showdq(deque <int> g)
{
    deque <int> :: iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

int main()
{
    /*pair<int, int> p(1, 2);
    pair<int, string> p2;

    p2.first = 3;
    p2.second = "Hey there!";

    pair<pair<int, string>, string> nested;

    nested.first = p2;
    nested.second = "This is a nested one";

    cout << "Info of p -> " << p.first << " " << p.second << endl;
    cout << "Info of p2 -> " << p2.first << " " << p2.second << endl;
    cout << "Info of nested -> " << nested.first.first << " " << nested.first.second << " " << nested.second << endl;*/

    vector<int> ar;

    cout<<ar.empty()<<" "<<ar.max_size()<<endl;

    ar = { 5, 4, 3, 1, 5 };

    // Declaring iterator to a vector
    vector<int>::iterator ptr;

    // Displaying vector elements using begin() and end()
    cout << "The vector elements are : ";
    for (ptr = ar.begin(); ptr < ar.end(); ptr++)
        cout << *ptr << " ";

    cout<<endl;

    sort(ar.begin(),ar.end());

    for(int i=0;i<ar.size();i++) cout<<ar[i]<<" ";

    ar.clear();

    cout<<endl<<ar.empty()<<endl;

    vector<pint > pv;
    pv.pb(make_pair(1,1));
    vector<pint >::iterator it;
    it=pv.begin();
    cout<<(*it).first<<endl;

    // Empty Queue
    queue<int> myqueue;
    myqueue.push(0);
    myqueue.push(1);
    myqueue.push(2);

    // Printing content of queue
    while (!myqueue.empty()) {
        cout << ' ' << myqueue.front();
        myqueue.pop();
    }

    cout<<endl;

    stack<int> stack;
    stack.push(21);
    stack.push(22);
    stack.push(24);
    stack.push(25);

    stack.pop();
    stack.pop();

    while (!stack.empty()) {
        cout << ' ' << stack.top();
        stack.pop();
    }

    deque <int> gquiz;
    gquiz.push_back(10);
    gquiz.push_front(20);
    gquiz.push_back(30);
    gquiz.push_front(15);
    cout <<endl<< "The deque gquiz is : ";
    showdq(gquiz);

    cout << "\ngquiz.size() : " << gquiz.size();
    cout << "\ngquiz.max_size() : " << gquiz.max_size();

    cout << "\ngquiz.at(2) : " << gquiz.at(2);
    cout << "\ngquiz.front() : " << gquiz.front();
    cout << "\ngquiz.back() : " << gquiz.back();

    cout << "\ngquiz.pop_front() : ";
    gquiz.pop_front();
    showdq(gquiz);

    cout << "\ngquiz.pop_back() : ";
    gquiz.pop_back();
    showdq(gquiz);

    map<string,int> num;
    string s;
    //logN
    num["Ali"]=5;
    num["Ahmet"]=10;
    num["Hasan"]=7;
    cin>>s;
    cout<<num[s]<<endl;

    set<int> kume;
    kume.insert(1);
    kume.insert(1);
    kume.insert(2);
    kume.insert(3);
    cout<<kume.count(1)<<" "<<kume.count(4);

    vint v={3,5,2,6,8,1};
    int x,c=-1;

    cin>>x;

    for(int i=0;i<v.sz();i++)
        if(v[i]==x)
    {
        c=i;
        break;
    }

    if(c==-1) cout<<"Yok";
    else cout<<c;

    return 0;
}
