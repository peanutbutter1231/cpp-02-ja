#pragma once

#include <string>
#include <vector>

class Person
{
public:
    // コンストラクタ：nameを引数として受け取り、メンバ変数に設定
    Person(const std::string &n);

    // メンバ変数nameを取得する関数
    std::string get_name() const;

private:
    std::string name;
};

class Team
{
public:
    // メンバーを追加する関数
    void add_member(const Person& member);

    // メンバー一覧を取得する関数
    const std::vector<Person> &get_members() const;

private:
    std::vector<Person> members;
};

class Project
{
public:
    // プロジェクトチームを初期化するコンストラクタ
    Project(const Team& initial_team);

    // チームにメンバーを追加する関数
    void add_team_member(const Person& member);

    // チームのメンバーを出力する関数
    void print_team_members() const;

private:
    Team project_team;
};