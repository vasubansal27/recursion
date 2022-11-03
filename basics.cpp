//print name N times
#include <bits/stdc++.h>
using namespace std;
void func(int i, int n)
{
    if(i>=n)
       return;
    cout << "Name" << endl;
    func(i+1,n);
}
int main()
{
    int n;
    cin >> n;
    func(0,n);
	return 0;
}


//print from 1 to n
#include <bits/stdc++.h>
using namespace std;
void func(int i, int n)
{
    if(i>n)
       return;
    cout << i << endl;
    func(i+1,n);
}
int main()
{
    int n;
    cin >> n;
    func(1,n);
	return 0;
}


//print 1 to n using backtracking
#include <bits/stdc++.h>
using namespace std;
void func(int i, int n)
{
    if(i<1)
       return;
    func(i-1, n);
    cout << i << "\n";
}
int main()
{
    int n;
    cin >> n;
    func(n,n);
	return 0;
}


//print from n to 1
#include <bits/stdc++.h>
using namespace std;
void func(int i, int n)
{
    if(i<1)
       return;
    cout << i <<" ";   
    func(i-1,n);
}
int main()
{
    int n;
    cin >> n;
    func(n,n);
	return 0;
}

//print n to 1 using backtracking
#include <bits/stdc++.h>
using namespace std;
void func(int i, int n)
{
    if(i>n)
      return;
    func(i+1, n);
    cout << i << "\n";
}
int main()
{
    int n;
    cin >> n;
    func(1,n);
	return 0;
}


//reverse array using one pointer
#include <bits/stdc++.h>
using namespace std;
void func(int i, int n, int arr[])
{
   if(i>n/2)
     return;
   swap(arr[i], arr[n-i-1]);
   func(i+1,n,arr);
}
int main()
{
    int arr[6]={1,2,3,4,5,6};
    func(0,6,arr);
    
    for(int i=0;i<6;i++)
      cout << arr[i] << " ";
}

//revrse array using two pointers
