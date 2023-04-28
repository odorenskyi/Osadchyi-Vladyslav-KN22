#include "main.h"
#include <math.h>
#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>
#include <clocale>
#include <time.h>
#include <map>
#include <unordered_map>
#include <bitset>
using namespace std;
double s_calculation(double x,double y,double z)
{   double S=(1/2)*pow(x,2)-sqrt(fabs(pow((y+z),2)-pow(x,5)))-log(fabs(sin(z)));
    return S;

}

std::string task10_1(const string& filename)
{
    setlocale(LC_ALL, "uk_UA.UTF-8");
    ofstream file(filename, ios::app);
     if(file.is_open())
     {
      file << "Осадчий В.К" << endl
      << " ЦНТУ" << endl
      << " Кропивницький" << endl
      << " Україна" << endl
      << " 2023" << endl << endl;
      cout << "У файл була успішно записана інформація" << endl;
      file.close();
     }
     else
    {
     cout << "Помилка!Такого файлу немає" << endl;
    }
}
int task10_1_2(const string& filename)
{   setlocale(LC_ALL, "uk_UA.UTF-8");
    ifstream file(filename);
    if (file.is_open())
    {
    int count = 0;
    string line;
    while (getline(file, line))
    {
    count +=std::count(line.begin(), line.end(), ':');
    cout<<count<<endl;
    return count;
    }
    }
    else
    {
        cout<<"Помилка!Такого файлу немає"<< endl;
        return 0;
    }
}
int task10_1_3(const std::string& filename)
{
    setlocale(LC_ALL, "ukr");
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Помилка! Неможливо відкрити файл " << filename << endl;
        return -1;
    }
    string line;
    string sentence;
    while (getline(file, line)) {
        for (char c : line) {
            if (c == '.' || c == '!' || c == '?') {
                // End of sentence
                string sentence_without_vowels;
                for (char s : sentence) {
                    if (s != 'a' && s != 'e' && s != 'i' && s != 'o' && s != 'u' &&
                        s != 'A' && s != 'E' && s != 'I' && s != 'O' && s != 'U') {
                        sentence_without_vowels += s;
                    }
                }
                cout << sentence_without_vowels << c << " ";
                sentence.clear();
            } else {
                sentence += c;
            }
        }
    }
    file.close();
    return 0;
}
std::string transliterate_text(const string& input) {
    setlocale(LC_ALL, "uk_UA.UTF-8");
    string output = "";
    unordered_map<char, string> translit_map {
        {'А', "A"}, {'Б', "B"}, {'В', "V"}, {'Г', "H"}, {'Ґ', "G"},
        {'Д', "D"}, {'Е', "E"}, {'Є', "Ye"}, {'Ж', "Zh"}, {'З', "Z"},
        {'И', "Y"}, {'І', "I"}, {'Ї', "Yi"}, {'Й', "Y"}, {'К', "K"},
        {'Л', "L"}, {'М', "M"}, {'Н', "N"}, {'О', "O"}, {'П', "P"},
        {'Р', "R"}, {'С', "S"}, {'Т', "T"}, {'У', "U"}, {'Ф', "F"},
        {'Х', "Kh"}, {'Ц', "Ts"}, {'Ч', "Ch"}, {'Ш', "Sh"}, {'Щ', "Shch"},
        {'Ь', ""}, {'Ю', "Yu"}, {'Я', "Ya"}, {'а', "a"}, {'б', "b"},
        {'в', "v"}, {'г', "h"}, {'ґ', "g"}, {'д', "d"}, {'е', "e"},
        {'є', "ie"}, {'ж', "zh"}, {'з', "z"}, {'и', "y"}, {'і', "i"},
        {'ї', "i"}, {'й', "i"}, {'к', "k"}, {'л', "l"}, {'м', "m"},
        {'н', "n"}, {'о', "o"}, {'п', "p"}, {'р', "r"}, {'с', "s"},
        {'т', "t"}, {'у', "u"}, {'ф', "f"}, {'х', "kh"}, {'ц', "ts"},
        {'ч', "ch"}, {'ш', "sh"}, {'щ', "shch"}, {'ь', ""}, {'ю', "iu"},
        {'я', "ia"}
    };

    for (const char& c : input) {
        if (translit_map.count(c) > 0) {
            output += translit_map[c];
            cout<<output<<endl;
        }
        else {
            output += c;
        }
    }
    return output;
}
void task10_2(const string& filename) {
    setlocale(LC_ALL, "uk_UA.UTF-8");
    time_t now = time(0);
    tm* ltm = localtime(&now);
    string date = to_string(ltm->tm_mday) + "\\" + to_string(ltm->tm_mon + 1) + "\\" + to_string(ltm->tm_year + 1900);
    ifstream input_file(filename);
    ofstream output_file("output.txt");
    if (input_file.is_open() && output_file.is_open()) {
        string line;
        while (getline(input_file, line)) {
            string transliterated_line = transliterate_text(line);
            output_file << transliterated_line << endl;
        }
        output_file << date << endl;
        input_file.close();
        output_file.close();

        cout << "Текст успішно доданий до файлу з назвою 'output.txt'." <<endl;
    }
    else {
    cout << "Помилка!Такого файлу немає" <<endl;
    }
}
double task10_3(double x, double y, double z, int b) {
    setlocale(LC_ALL, "uk_UA.UTF-8");
    ofstream outfile("output.txt", ios_base::app);
    double result = s_calculation(x, y, z);
    outfile << "Результат: " << result << endl;
    outfile << "b у двійковій системі числення: " << bitset<32>(b) << endl;
    outfile.close();
    cout << "Дані успішно додані до файлу 'output.txt'." << endl;
}


