#include <iostream>
#include <fstream> 
#include <string>
#include <windows.h>
using namespace std;


string text;

//������ �������
void NOPROBEL(string ctext) {

    for (int i = 0; i < ctext.size(); i++)
    {
        if (ctext[i] == ' ' && ctext[i + 1] == ' ')
            while (ctext[i + 1] == ' ')
                ctext.erase((i + 1), 1);
    }
    text = ctext;
    cout << "2.1) ������ ������ �������: " << text << "\n";
}
//������������� �����
void NOZNAK(string ctext) {

    for (int i = 0; i <= ctext.size(); i++)
    {
        if ((ctext[i] == '.' || ctext[i] == ',' || ctext[i] == '?' || ctext[i] == '!' || ctext[i] == ':' || ctext[i] == ';') && (ctext[i + 1] == '.' || ctext[i + 1] == ',' || ctext[i + 1] == '?' || ctext[i + 1] == '!' || ctext[i + 1] == ':' || ctext[i + 1] == ';'))
            if (ctext[i] == '.' && ctext[i + 1] == '.' && ctext[i + 2] == '.' && ctext[i + 3] == ' ')
                i += 3;
            else
            {
                while (ctext[i + 1] == '.' || ctext[i + 1] == ',' || ctext[i + 1] == '?' || ctext[i + 1] == '!' || ctext[i + 1] == ':' || ctext[i + 1] == ';')
                    ctext.erase((i + 1), 1);
            }
    }
    text = ctext;
    cout << "2.2) ������ ������ ����� : " << text << "\n";
}
//������������ ��������� ������
void Proverka(string ctext)
{

    for (int i = 0; i < ctext.size(); i++)
    {
        if (ctext[i] == ' ')
            i += 2;
        ctext[i] = tolower(ctext[i]);
    }
    text = ctext;
    cout << "2.3) ���������� ������ ����� : " << text << "\n";
}
//����� �������� 
void Obratno() {

    int a = 0;
    text += " ";//�������� � ����� ������

    for (int i = text.length(); i >= 0; i--)
    {
        if (text[i] == ' ')
        {
            for (int j = i + 1; j <= (i + a); j++)
            {
                cout << text[j];
            }
            a = 0;
        }
        a++;
    }
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') break;
        cout << text[i];
    }

}

char n;
void deleteCim(string ctext) {

    for (int i = 0; i < ctext.size(); i++)
    {
        if (ctext[i] == n)
            while (ctext[i] == n)
                ctext[i] = ' ';
    }
    text = ctext;
    cout << "����� ����� << " << n << " >> : " << text << "\n";
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    //  1 ������� 
    {
        int input;
    Menu: {
        cout << "��� �� ������ ������� \n"
            "1. �������� ����� ������� \n";
        cin >> input;
        }
    if (input == 1) { // �������� ������
        cout << "������� ������ " << "\n";
        

        cin.ignore();
        getline(cin, text);
    }

    else if (input == 2) { // � ������
        cout << "��� ����� " << "\n";
        text = "He IS gOnE     tO bEd     ,,,,,,,,,,,,,   DoNT WAKE HiM UP";
    }
    else
        goto Menu;
    cout << "\n";
    cout << "1) �������� ������ �������� ���: " << text << "\n";
    }
    // 2 �������
    {
        NOPROBEL(text);
        NOZNAK(text);
        Proverka(text);
        cout << "2(����)) � ����� ��������: " << text << "\n";
    }
    // 3 �������
    {
        cout << "3) C����� � �������� �������: ";
        Obratno();
    }
    // 4 �������
    {
        cout << "\n";
        cout << "4)������� ������ ������� ������ ������� : ";
        cin >> n;
        cout << "\n";
        deleteCim(text);
    }
    // �����
    {
        cout << "\n";
        cout << "\n";
        cout << "           .'\   /`." << "\n";
        cout << "         .'.-.-'.-.." << "\n";
        cout << "    ..._:   .-. .-.   :_..." << "\n";
        cout << "  .'    '-.(o ) (o ).-'    `." << "\n";
        cout << " :  _    _ _~(_)~_ _    _  :" << "\n";
        cout << ":  /:   ' .-=_   _=-. `   ;\  :" << "\n";
        cout << ":   :|-.._  '     `  _..-|:   :" << "\n";
        cout << " :   :| |:-:-.-:-:'| |:'   :" << "\n";
        cout << "  .   .| | | | | | |.'   .'" << "\n";
        cout << "     -._   ```    _.-'" << "\n";
        cout << "         ``-------''" << "\n";
        cout << "��������� 4, ����������" << "\n";
    }


    return 0;
}