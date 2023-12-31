#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
template <typename Term>
map<Term, int> ComputeTermFreqs(const vector<Term>& terms) {
    map<Term, int> term_freqs;
    for (const Term& term : terms) {
        ++term_freqs[term];
    }
    return term_freqs;
}
pair<string, int> FindMaxFreqAnimal(const vector<pair<string, int>>& animals) {
auto F = ComputeTermFreqs(animals);
auto max = max_element(F.begin(), F.end(),
                           [](const auto &name1, const auto &name2) { return name1.second < name2.second; });
    return max->first;
}

int main() {
    const vector<pair<string, int>> animals = {
        {"Murka"s, 5},  // 5-летняя Мурка
        {"Belka"s, 6},  // 6-летняя Белка
        {"Murka"s, 7},  // 7-летняя Мурка не та же, что 5-летняя!
        {"Murka"s, 5},  // Снова 5-летняя Мурка
        {"Belka"s, 6},  // Снова 6-летняя Белка
    };
    const pair<string, int> max_freq_animal = FindMaxFreqAnimal(animals);
    cout << max_freq_animal.first << " "s << max_freq_animal.second << endl;
}