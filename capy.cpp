#include <iostream>
#include <format>
using namespace std;

int main(int argc, char* argv[])
{

    std::string input;

    if (argc > 1) {
        input = argv[1];
    }
    else {
        input = "Capybara Supremacy!";
    }

    std::string capybara;
        
    capybara = std::format(R"(

    /\__/\_
   /       \
  /    0    \----------_
 | Y                    \  {}
 \______/                \
       \                 |
        |   /-______-|    \
        |   |         \   /
       //__/         //__/

    )",input);

    cout << capybara << endl;
    return 0;
}