#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include <cctype>

int main() {

    using std::cin;
    using std::cout;
    using std::endl;
    using std::vector;
    using std::string;

    // №1
    std::srand(std::time(nullptr));
    int array [10];
    for (int i = 0; i<10; i++) {
        array[i] = std::rand() % 21 - 10;
        cout << array[i] << ' ';
    }
    cout << endl;
    cout << pow(array[2], 2) + pow(array[3], 2) + pow(array[6], 2) << endl;

    //№2
    int len;
    cin >> len;
    int *arr = new int[len];
    for (int i = 0; i<len; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i<len; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
    for (int i = 0; i<len; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] *= 2;
        }
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

    //№3
    int m, el;
    cin >> m;
    vector <int> Mas(m);
    for (int i=0; i<Mas.size(); i++) {
        cin >> el;
        Mas[m] = el;
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

    //№4
    string str;
    std::getline(cin, str);
    cout << str << endl;
    cout << str.length() << endl;
    double k = 0;
    int kol = 0;
    for (char i : str) {
        if (i >= 97 && i <= 122) {
            if (i == 'q' || i == 'e' || i == 'y' || i == 'u' || i == 'i' || i == 'o' || i == 'a')
                k++; //количество гласных букв в строке
            kol ++; //количество букв в строке
        }
    }
    cout << (kol-k)/str.length() << endl; //из общего количества букв вычетаем количество гласных и получаем количество согласных, потом берём их отношение к общему количеству символов в строке
    int l1, l2;
    cin >> l1 >> l2;
    cout << str.substr(l1, l2-l1+1) << endl;

    string stroka("Can you can a can as a canner can can a can?");
    string slovo;
    cin >> slovo;
    stroka.pop_back();
    stroka.push_back(' ');
    stroka[0] = tolower(stroka[0]);
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
    stroka.push_back('?');
    stroka[0] = toupper(stroka[0]);
    cout << stroka << endl;

    return 0;
}
