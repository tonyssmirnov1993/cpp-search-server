#include <iostream>

using namespace std;

class SearchServer {
public:
    // ���������� ���� DocumentStatus
    enum class DocumentStatus {
    ACTUAL,
    IRRELEVANT,
    BANNED,
    REMOVED,
};
};

int main() {
    // �������� ��������� �������� ������� BANNED
    cout << static_cast<int>(SearchServer::DocumentStatus::BANNED) << endl;
    return 0;
}