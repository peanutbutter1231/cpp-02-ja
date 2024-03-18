#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>

// 名前と電話番号を格納するマップ
std::map<std::string, std::string> phonebook;

// 名前と電話番号を追加する関数
void add_entry(const std::string& name, const std::string& phone) {
    phonebook[name] = phone;
    std::cout << "Added " << name << ": " << phone << std::endl;
}

// 名前とそれに紐づく電話番号を削除する関数
void remove_entry(const std::string& name) {
    auto it = phonebook.find(name);
    if (it != phonebook.end()) {
        phonebook.erase(it);
        std::cout << "Removed " << name << std::endl;
    } else {
        std::cout << name << " not found in the phonebook." << std::endl;
    }
}

// 特定の名前で電話番号を検索する関数
void search_number(const std::string& name) {
    auto it = phonebook.find(name);
    if (it != phonebook.end()) {
        std::cout << name << ": " << it->second << std::endl;
    } else {
        std::cout << name << " not found in the phonebook." << std::endl;
    }
}

// すべての名前と電話番号をアルファベット順に表示する関数
void display_all() {
    for (const auto& entry : phonebook) {
        std::cout << entry.first << ": " << entry.second << std::endl;
    }
}

//ファイルを読み込んで名前と電話番号をマップに格納する
void input_text(){
    std::ifstream infile("photobook.txt");
    std::string line;
    std::string name;
    std::string phone;

    while (std::getline(infile, line)){
//        std::cout << line << std::endl;
        std::basic_istringstream iss(line);
        iss >> name >> phone;
        add_entry(name, phone);
    }
}

int main() {

    input_text();
    // プログラム実行時に名前と電話番号を追加
//    add_entry("Bob", "123-456-7890");
//    add_entry("Alice", "987-654-3210");
//    add_entry("Denny", "111-111-1111");
//    add_entry("Elen", "222-222-2222");

    std::cout << "\n" << std::endl;

    // 名前を指定して電話番号を検索
    search_number("Denny");
    search_number("John");

    std::cout << "\n" << std::endl;
 
    // すべての名前と電話番号を表示
    display_all();

    std::cout << "\n" << std::endl;

    remove_entry("Bob");

    std::cout << "\n" << std::endl;

    display_all();

    return 0;
}