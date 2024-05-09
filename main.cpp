#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
using namespace std;

void crear_array() {
    // std::array
    array arr1 = {10, 20, 30};  // std::array<int, 3>
    array<double, 10> arr2{}; // double arr2[10];
    cout << arr2.size();
    for (auto it = arr1.begin(); it != arr1.end(); ++it)
        cout << *it << endl;
    cout << arr1.front();
    cout << arr1.back();
}

class point {
    int x;
    int y;
public:
    point(int x, int y): x(x), y(y) {}
};

void crear_vector() {
    // std::vector
    vector vec1 = {10, 20, 30};
    vector<int> vec2;
    vec2.push_back(10);
    vec2.insert(vec2.begin(), 5); // vec2.begin() equivale al subindice 0
    int pos = 1;
    vec2.insert(vec2.begin() + pos, 5); // vec2.begin() equivale al subindice 0
    vec2.emplace_back(10);

    vector<point> vec3;
    vec3.push_back(point(1, 2));
    vec3.emplace_back(1, 2);                      // Equivalente al push_back
//    vec3.insert(begin(vec3), point(1, 2));
    vec3.emplace(begin(vec3), 1, 2);    // Equivalente al insert

    cout << vec3.size() << endl;
    cout << vec3.capacity() << endl;
}

void crear_deque() {
    deque d1 = {10, 20, 30};
    d1.emplace_front(5);
    int pos = 1;
    d1.emplace(begin(d1)+pos, 7);
    d1.emplace_back(40);
    for (int i = 0; i < size(d1); ++i)
        cout << d1[i] << " ";

}

void ejemplo_capacity() {
    vector<int> v1;
    cout << v1.size() << " " << v1.capacity() << endl;
    for (int i = 0; i < 10; ++i) {
        v1.push_back(1);
        cout << v1.size() << " " << v1.capacity() << endl;
    }
}

int main() {
//    crear_vector();
    ejemplo_capacity();
    return 0;
}
