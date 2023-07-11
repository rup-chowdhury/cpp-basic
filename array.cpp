#include <iostream>;

using namespace std;

int main()
{
    int numbers[5] = {7, 5, 6, 12, 9};

    cout << "The Numbers are :"<<endl;

    cout << "{";
    for(int i = 0 ; i < 5; i++){
        cout << numbers[i] ;

        if(i == 4){
            break;
        }
        cout << ", ";
    }
    cout << "}";
    return 0;

}