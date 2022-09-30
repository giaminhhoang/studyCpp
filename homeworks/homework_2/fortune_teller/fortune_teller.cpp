#include <iostream>
#include <map>
#include <array>
#include <string>
#include <vector>
#include <algorithm>

using std::endl;

int main() {
    std::string user_name, season_of_birth, temp;
    std::vector<std::string> adjective;
    const std::map<std::string, std::string> noun{{"spring", "STL guru"}, 
        {"summer", "C++ expert"}, {"autumn", "coding beast"}, {"winter", "software design hero"}};
    const std::array<std::string, 3> ending{"eats UB for breakfast", "finds errors quicker than the compiler",
        "is not afraid of C++ error messages"};
    const std::vector<std::string> seasons{"spring", "summer", "autumn", "winter"};
    std::cout << "Welcome to the fortune teller program!" << endl;
    std::cout << "Please enter your name:" << endl;
    std::cin >> user_name;    
    do {
        std::cout << "Please enter the time of year when you were born:" << endl 
            << "(pick from 'spring', 'summer', 'autumn', 'winter')" << endl;
        std::cin >> season_of_birth;
    } while (std::find(seasons.begin(), seasons.end(), season_of_birth) == seasons.end());
    
    std::cout << "Please enter an adjective:" << endl;
    std::cin >> temp;
    adjective.push_back(temp);
    std::cout << "Please enter another adjective:" << endl;
    std::cin >> temp;
    adjective.push_back(temp);

    int index_of_adjective = user_name.size() % adjective.size();
    int index_of_ending = user_name.size() % ending.size(); 
    std::cout << endl << "Here is your description:" << endl;
    std::cout << user_name << ", the " << adjective.at(index_of_adjective) << " " << noun.at(season_of_birth) << " that " << ending.at(index_of_ending) << endl;
    return 0;
}