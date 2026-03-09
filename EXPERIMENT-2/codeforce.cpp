#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        if(n < 5)
        {
            cout << -1 << endl;
            continue;
        }
        
        vector<int> arr;
        
        arr.push_back(2);
        for(int i = 6; i <= n; i = i + 2)
            arr.push_back(i);
        arr.push_back(4);
        
        arr.push_back(5);
        for(int i = 7; i <= n; i = i + 2)
            arr.push_back(i);
        arr.push_back(3);
        arr.push_back(1);
        
        for(int i = 0; i < n; i++)
        {
            cout << arr[i];
            if(i != n - 1)
                cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}