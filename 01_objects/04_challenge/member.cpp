#include <iostream>
#include <string>

#include "member.h"

// コンストラクタの実装、引数nをnameメンバー変数に設定(メンバー変数nameの初期化を含む)
Person::Person(const std::string& n) : name(n) {};
//Person::Person(const std::string& n){
//    name = {};
//    name = n;
//}

// メンバ変数nameを取得する関数の実装
std::string Person::get_name() const{
    return name;
}

// メンバーを追加する関数の実装
void Team::add_member(const Person& member) {
    members.push_back(member);
}

// メンバー一覧を取得する関数の実装
const std::vector<Person>& Team::get_members() const {
    return members;
}

// プロジェクトチームを初期化するコンストラクタの実装
Project::Project(const Team& initial_team) : project_team(initial_team) {};

// チームにメンバーを追加する関数の実装
void Project::add_team_member(const Person& member) {
    project_team.add_member(member);
}

// チームのメンバーを出力する関数の実装
void Project::print_team_members() const {
    for (const Person& member : project_team.get_members()) {
        std::cout << "Team Member: " << member.get_name() << std::endl;
    }
}