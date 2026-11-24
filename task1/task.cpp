// Explore and Trace an Array

#include <iostream>
using namespace std;
class Array
{
private:
    int arr[8];
    int total_score;

public:
    Array()
    {
    }

    void input();
    int total();
    void average();
    void maximum();
    void minimum();
};
void Array::input()
{
    cout << "enter the quiz score" << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << "enter score" << i + 1 << ":";
        cin >> arr[i];
    }
}
int Array::total()
{
    int x = 0;
    for (int i = 0; i < 8; i++)
    {
        x = x + arr[i];
    }

    cout << "the total is :" << x << endl;
    total_score = x;
}
void Array::average()
{
    cout << "average is " << (total_score / 8) << endl;
}
void Array::maximum()
{
    int max=arr[0];
    for (int i = 0; i < 8; i++)
    { if(max<arr[i]){
        max=arr[i];
    }
       
    }
    cout << "the max is" << max << endl;
}
void Array::minimum()
{
    int min=arr[0];
    for (int i = 0; i < 8; i++)
    {
       if(min>arr[i]){
        min=arr[i];
       }
    }
    cout << "the min is" << min << endl;
}
int main()
{
    Array a;
    a.input();
    a.total();
    a.average();
    a.maximum();
    a.minimum();
    return 0;
}
