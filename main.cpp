#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v1, v2, v3, v4, v5, v6;

    for (int i=0; i<5; i++) {
        v1.push_back((i+1)*10);
    }

    cout << "v1 = ";
    for (auto& v : v1){
        cout << v << " ";
    }

    cout << endl << "The first element of v1 is " << v1.front() << endl;
    cout << "The third element of v1 is " << v1.at(2) << endl;
    cout << "The last element of v1 is " << v1.back() << endl << endl;

    v2.assign(v1.begin(), v1.end());
    cout << "v2 = ";
    for (auto& v : v2){
        cout << v << " ";
    }
    v2.erase(v2.begin()+1, v2.begin()+3);
    cout << endl << "v2 after delete = ";
    for (auto& v : v2){
        cout << v << " ";
    }
    v2.pop_back();
    cout << endl << "v2 after delete#2 = ";
    for (auto& v : v2){
        cout << v << " ";
    }
    cout << endl << endl;

    v3=v1;
    cout << "v3 = ";
    for (auto& v : v3){
        cout << v << " ";
    }
    cout << "The maximum possible length of the v3 is " << v3.max_size()  << endl << endl;

    v4.push_back(15);
    cout << "v4 = ";
    for (auto& v : v4){
        cout << v << " ";
    }
    cout << endl;
    cout << "The length of storage allocated is " << v4.capacity( ) << endl;
    v4.push_back(3);
    cout << "v4 = ";
    for (auto& v : v4){
        cout << v << " ";
    }
    cout << endl;
    cout << "The length of storage allocated is " << v4.capacity( ) << endl;
    v4.reserve(20);
    cout << "The length of storage allocated is " << v4.capacity( ) << endl;
    v4.shrink_to_fit();
    cout << "The length of storage allocated is " << v4.capacity( ) << endl;
    cout << "The size of v4: " <<  v4.size() << endl;
    if (v4.empty()) {
        cout << "The v4 is empty" << endl;
    } else {
        cout << "The v4 isn't empty" << endl;
    }
    v4.clear();
    cout << "The size of v4 after cleaning: " <<  v4.size() << endl;
    if (v4.empty()) {
        cout << "The v4 is empty" << endl << endl;
    } else {
        cout << "The v4 isn't empty" << endl << endl;
    }

    v5.push_back( 1 );
    v5.push_back( 2 );
    v5.push_back( 3 );

    v6.push_back( 10 );
    v6.push_back( 20 );

    cout << "The number of elements in v5 = " << v5.size( ) << endl;
    cout << "The number of elements in v6 = " << v6.size( ) << endl;

    v5.swap( v6 );

    cout << "The number of elements in v5 = " << v5.size( ) << endl;
    cout << "The number of elements in v6 = " << v6.size( ) << endl;
}
