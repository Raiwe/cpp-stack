#include <iostream>
#include <regex>

using namespace std;

class Stack {
public:
    int entry, top = -1;
    int Size;
    int *Stack;

    bool isempty() {
        if (top == -1) {
            if (entry == 6) {
                cout << "\ntrue" << endl;
                system("pause");
                system("cls");
            }
            else {
                return true;
            }
        }
        else {
            if (entry == 6) {
                cout << "\nfalse" << endl;
                system("pause");
                system("cls");
            }
            else {
                return false;
            }
        }
    }

    bool isfull() {
        if (top == Size-1) {
            if (entry == 5) {
                cout << "\ntrue" << endl;
                system("pause");
                system("cls");
            }
            else {
                return true;
            }
        }
        else {
            if (entry == 5) {
                cout << "\nfalse" << endl;
                system("pause");
                system("cls");
            }
            else {
                return false;
            }
        }
    }

    void push(int value) {
        if (isfull()) {
            cout << "\nStack is full" << endl;
            system("pause");
            system("cls");
        }
        else {
            top++;
            Stack[top] = value;
            system("cls");
        }
    }

    void pop() {
        if(isempty()) {
            cout << "\nStack is empty" << endl;
                system("pause");
                system("cls");
        }
        else {
            cout << "\n" << "[" << Stack[top] << "]" << endl;
            top--;
            system("pause");
            system("cls");
        }
    }

    void peek() {
        if(isempty()) {
            cout << "\nStack is empty" << endl;
            system("pause");
            system("cls");
        }
        else {
            cout << "\nThe top element is " << "[" << Stack[top] << "]" << endl;
            system("pause");
            system("cls");
        }
    }

    void topElement() {
        if(isempty()) {
            cout << "\nStack is empty" << endl;
            system("pause");
            system("cls");
        }
        else {
            int count = 0;
            for (int i = 0; i <= top; i++) {
                count++;
            }
            cout << "\nThe height of the stack is " << count << endl;
            system("pause");
            system("cls");
        }
    }

    void display_stack() {
        if (isempty()) {
            cout << "\nStack is empty" << endl;
            system("pause");
            system("cls");
            
        }
        else {
            system ("cls");
            for (int i = top; i >= 0; i--) {
                cout << "[" << Stack[i] << "]" << endl;
            }
            cout << endl;
        }
    }

    void sum_of_all_vallues() {
        int sum = 0;

        if (isempty()) {
            cout << "\n" << "Stack is empty and the sum is " << sum << endl;
            system("pause");
            system("cls");
        }
        else {
            for (int i = top; i >= 0; i--) {
                sum += Stack[i];
            }
            cout << "\nThe sum of all values is " << sum << endl << endl;
            system("pause");
            system("cls");
        }
    }

    void product_of_all_vallues() {
        int product = 1;

        if (isempty()) {
            product = 0;
            cout << "\n" << "Stack is empty and the product is " << product << endl;
            system("pause");
            system("cls");
        }
        else {

            for (int i = top; i >= 0; i--) {
                product *= Stack[i];
            }
            cout << "\nThe product of all values is " << product << endl << endl;
            system("pause");
            system("cls");
        }
    }

    void contains_vallues() {
        int value;
        string search_value;
        regex pattern("-?[0-9]+");

        while (true) {
            cout << "Search a value in the array\n" << endl;
            cout << "Input the value: ";
            cin >> search_value;

            if (!regex_match(search_value, pattern)) {
                cout << "Invalid input. Please enter an integer number." << endl;
                system("pause");
                system("cls");
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } 
            else {
                try {
                    value = stoi(search_value);
                    break;
                } catch (const exception& e) {
                    cout << "Invalid input. Please enter an integer number." << endl;
                    system("pause");
                    system("cls");
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
            }
        }
        
        if (isempty()) {
            cout << "Stack is empty" << endl;
            system("pause");
            system("cls");
        }
        else {
            for (int i = 0; i <= top; i++) {
                if (Stack[i] == value) {
                    cout << "true\n";
                    system("pause");
                    system("cls");
                    break;
                }
                else {
                    if (i == top && Stack[i] != value) {
                    cout << "false\n";
                    system("pause");
                    system("cls");
                    }
                }
            }
        }
    }

    void basic_operations() {
        cout << "Stack" << endl;
        cout << "1.Push\n";
        cout << "2.Pop\n";
        cout << "3.Peek\n";
        cout << "4.Top\n";
        cout << "5.isFull\n";
        cout << "6.isEmpty\n";
        cout << "7.Show Stack\n";
        cout << "8.Sum of All Values\n";
        cout << "9.Product of All Values\n";
        cout << "10.Contains Value\n";
        cout << "11.Exit\n";
        
        string entry_input;
        regex pattern("[1-9]|1[0-1]");

        cout << "Entry: ";
        cin >> entry_input;

        if (!regex_match(entry_input, pattern)) {
            cout << "Invalid input. Please enter a positive digit number between 1 and 11." << endl;
            system("pause");
            system("cls");
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            basic_operations();
        } 
        else {
            try {
                entry = stoi(entry_input);
            } catch (const exception& e) {
                cout << "Invalid input. Please enter a positive digit number between 1 and 11." << endl;
                system("pause");
                system("cls");
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                basic_operations();
            }
        }

        switch (entry) {
            case 1:{
                string value_input;
                int value;
                regex pattern("-?[0-9]+");

                while (true) {
                    cout << "Input a value: ";
                    cin >> value_input;

                    if (!regex_match(value_input, pattern)) {
                        cout << "Invalid input. Please enter an integer number." << endl;
                        system("pause");
                        system("cls");
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    } 
                    else {
                        try {
                            value = stoi(value_input);
                            break;
                        } catch (const exception& e) {
                            cout << "Invalid input. Please enter an integer number." << endl;
                            system("pause");
                            system("cls");
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        }
                    }
                }
            
            push(value);
            break;
            }
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                topElement();
                break;
            case 5:
                isfull();
                break;
            case 6:
                isempty();
                break;
            case 7:
                display_stack();
                break;
            case 8:
                sum_of_all_vallues();
                break;
            case 9:
                product_of_all_vallues();
                break;
            case 10:
                contains_vallues();
                break;
            case 11:
                return;
                break;
        }

        if (entry < 1 || entry > 11) {
            cout << "\nInvalid input!" << endl;
            system("pause");
            system("cls");
            basic_operations();
        }
        else if (entry < 11) {
            basic_operations();
        }
        
    }
};

int main() {
    Stack stack;

    string size_input;
    regex pattern("[0-9][0-9]*");

    while (true) {
        cout << "Enter the size of the array: ";
        cin >> size_input;

        if (!regex_match(size_input, pattern)) {
            cout << "Invalid input. Please enter a positive digit number." << endl;
            system("pause");
            system("cls");
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } 
        else {
            try {
                stack.Size = stoi(size_input);
                break;
            } catch (const exception& e) {
                cout << "Invalid input. Please enter a positive digit number." << endl;
                system("pause");
                system("cls");
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
    }

    stack.Stack = new int[stack.Size];
    system("cls");
    stack.basic_operations();
    delete[] stack.Stack;

    return 0;
}