#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

template <typename It>
void PrintRange(It range_begin, It range_end) {
    for (auto it = range_begin; it != range_end; ++it) {
        cout << *it << " "s;
    }
    cout << endl;
}

template <typename Container>
void EraseAndPrint(Container& container, int del_position, int it_begin, int it_end){
    container.erase(container.begin()+del_position);
    PrintRange(container.begin(),container.end());
    container.erase(container.begin()+it_begin, container.begin()+it_end);
    PrintRange(container.begin(),container.end());
}

int main() {
    vector<string> langs = {"Python"s, "Java"s, "C#"s, "Ruby"s, "C++"s};
    EraseAndPrint(langs, 0, 0, 2);
    return 0;
} 