#include <iostream>

using namespace std;

/* �������� ����� � ������������ � ������������ �������*/
class TV {
public:
    // �������� ���������.
    void TurnOn() {
        // �������� ��� ����� ������
        is_turned_on_ = true;
    }

    // ��������� ���������
    void TurnOff() {
        // �������� ��� ����� ������
        is_turned_on_ = false;
    }

    // ���������� true, ���� ��������� ������� � false, ���� ��������� ��������
    bool IsTurnedOn() {
        // �������� ��� ����� ������
        if (is_turned_on_ == true) {
            return true;
        }
        return false;
    }

    // ���������� ����� �������� ������, ���� 0, ���� ��������� ��� ��������.
    // ��������� ��� ���������� ����������� ����� �������� ������,
    // � ��� ��������� � ���������������� ���.
    // ��� ������ ��������� ��������� ���������� ����� �1.
    int GetCurrentChannel() {
        // �������� ��� ����� ������
        if (is_turned_on_ == true && current_channel_ > 0) {
            return current_channel_;
        }
        return 0;
    }

    // �������� ����� � ��������� �������. ����� ������ ������ ���� � ��������� [1..99].
    // ���� ������ ������������ ����� ������, ���� ��������� ��������, ���������� false � �� ������
    // ������� �����. � ��������� ������ ���������� true.
    bool SelectChannel(int channel) {
        // �������� ��� ����� ������
        if (is_turned_on_ == true && (channel >= 1 && channel <= 99)) {
            current_channel_ = channel;
            return true;
        }
        return false;
    }
    
    private:
    bool is_turned_on_ = false;
    int current_channel_ = 1;
};

int main() {
    TV tv;
    cout << tv.IsTurnedOn() << ", channel:"s << tv.GetCurrentChannel() << endl;
    tv.TurnOn();
    cout << tv.IsTurnedOn() << ", channel: "s << tv.GetCurrentChannel() << endl;
    tv.SelectChannel(25);
    cout << tv.IsTurnedOn() << ", channel: "s << tv.GetCurrentChannel() << endl;
    tv.TurnOff();
    cout << tv.IsTurnedOn() << ", channel: "s << tv.GetCurrentChannel() << endl;
}