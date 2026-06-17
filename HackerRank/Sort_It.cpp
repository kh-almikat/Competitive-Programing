#include <bits/stdc++.h>
using namespace std;

class student{
    public:
        string name;
        int cls;
        char section;
        int id;
        int english;
        int maths;
};

bool cmp(student a, student b)
{
    int totalA = a.maths + a.english;
    int totalB = b.maths + b.english;

    if(totalA == totalB)
    {
        return a.id < b.id;
    }

    return totalA > totalB;
}

int main() 
{
    int n;
    cin >> n;
    student arr[n]; 
    for(int i=0; i<n; i++)
    {
        cin >> arr[i].name >> arr[i].cls >> arr[i].section >> arr[i].id >> arr[i].english >> arr[i].maths;
    }

    sort(arr, arr+n, cmp);
    for(int i=0; i<n; i++)
    {
        cout << arr[i].name << " " << arr[i].cls << " " << arr[i].section << " " << arr[i].id << " " << arr[i].english << " " << arr[i].maths << endl;
    }
}