#include "member.h"

int main() {
    // Create some team members
    Person alice("Alice");
    Person bob("Bob");
    Person charlie("Charlie");
    Person denny("Denny");

    // Create an initial team
    Team initial_team;
    initial_team.add_member(alice);
    initial_team.add_member(bob);

    // Create a project and add more team members
    Project my_project(initial_team);
    my_project.add_team_member(denny);

    // Print the project team members
    my_project.print_team_members();

    return 0;
}