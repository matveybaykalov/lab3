#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>

int main() {

    using std::cin;
    using std::cout;
    using std::endl;
    using std::vector;
    using std::string;

    std::srand(std::time(nullptr));
    int array [10];
    for (int i = 0; i<10; i++) {
        array[i] = std::rand() % 21 - 10;
        cout << array[i] << ' ';
    }
    cout << endl;
    cout << pow(array[2], 2) + pow(array[3], 2) + pow(array[6], 2) << endl;

    int len;
    cin >> len;
    int *arr = new int[len];
    for (int i = 0; i<len; i++) {
        int a;
        cin >> a;
        if (a % 2 == 0) {
            a *= 2;
        }
        arr[i] = a;
    }
    for (int i = 0; i<len; i++)
        cout << arr[i] << ' ';
    cout << endl;
    int k1, k2;
    double s = 0;
    cin >> k1 >> k2;
    for (int i = k1 ;i<=k2; i++)
        s += arr[i];
    s = s / (k2-k1+1);
    cout << s << endl;
    delete [] arr;

    int m, el;
    cin >> m;
    vector <int> Mas(m);
    m = 0;
    for (int i : Mas) {
        cin >> el;
        Mas[m] = el;
        m++;
    }
    for (int i : Mas)
        cout << i << ' ';
    cout << endl;
    Mas.push_back(1);
    for (int i : Mas)
        std::cout << i << " ";
    cout << endl;
    int sum = 0;
    for (int i : Mas)
        sum+= pow(i, 2);
    cout << sum << endl;
    m = 0;
    for (int i : Mas) {
        if (i > 5) {
            Mas.erase (Mas.cbegin() + m);
            break;
        }
        m++;
    }
    for (int i : Mas)
        std::cout << i << " ";
    cout << endl;

    string str;
    std::getline (cin, str);
    cout << str << endl;
    cout << str.length() << endl;
    double k = 0;
    for (char i : str){
        if (i == 'q' || i == 'e' || i == 'y' || i == 'u' || i == 'i' || i == 'o' || i == 'a' ) k++;
    }
    cout << k/str.length() << endl;
    int l1, l2;
    cin >> l1 >> l2;
    cout << str.substr(l1, l2-l1+1) << endl;

    string stroka("can you can a can as a canner can can a can?");
    string slovo;
    cin >> slovo;
    stroka.pop_back();
    stroka.push_back(' ');
    bool b = true;
    while (b){
        b = false;
        int n = stroka.find("can ");
        if (n >= 0){
            b = true;
            stroka.replace(n, 4, slovo + ' ');
        }
    }
    stroka.pop_back();
    cout << stroka+'?' << endl;

    return 0;
}
