#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//Function to print the Maximum element in the stack
void findMax(stack<int> s)
{
    int m = s.top(); //initialization

    int a;

    while (!s.empty())
    {
        a = s.top();

        if (m < a)
            m = a; //Storing the maximum element in m

        s.pop(); //removing the topmost element to bring next element at the top
    }

    cout << "\n\nThe maximum element of the Stack is: " << m << endl;
}

//Function to print the elements of the stack
void show(stack<int> s)
{
    while (!s.empty())
    {
        cout << "  " << s.top(); //printing the topmost element
        s.pop();                 //removing the topmost element to bring next element at the top
    }

    cout << endl;
}

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to Find the Maximum element in the Stack, in CPP  ===== \n\n";

    int i;

    //Stack declaration (stack of integers)
    stack<int> s;

    //Filling the elements by using the push() method.
    cout << "Filling the Stack in LIFO order using the push() method:"; //LIFO= Last In First Out

    s.push(4);
    s.push(2);
    s.push(20);
    s.push(12);
    s.push(52);
    s.push(14);

    cout << "\n\nThe elements of the Stack in LIFO order are: ";
    show(s);

    findMax(s); //to find the max element

    cout << "\n\n\n";

    return 0;
}
