#include <stack>
#include <vector>
#include <iostream>

#include <cstdlib>
#include <ctime>


using namespace std;



int main()
{
    vector<int> v;
    stack<int> s;

    for(int i = -50; i < 50; i++)
        s.push(i);

    int max = 0,  min = 0;
    for(int i = 0; i < 100; ++i) {
        if (max < s.top())
            max = s.top();

        if(min > s.top())
        {
            min = s.top();
        }


    }

        //v.push_back(max);

    while(!s.empty())
    {
        if(s.top() != max)
            v.push_back(s.top());

        if(s.top() != min)
            v.push_back(s.top());
        s.pop();

    }

    for(int i = v.size() - 1; i >= 0; --i)
        s.push(v[i]);

    // Для проверки выведем стек на экран
    while(!s.empty()) {
        cout << s.top() << ' ';
        s.pop();
    }

    return 0;
}