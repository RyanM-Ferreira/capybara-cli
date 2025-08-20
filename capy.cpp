#include <iostream>
#include <stdint.h>
using namespace std;

const string capybara[9] = {
        "    /\\__/\\_",
        "   /       \\",
        "  /    0    \\----------_",
        " | Y                    \\",
        " \\______/                \\",
        "       \\                 |",
        "        |   /-______-|    \\",
        "        |   |         \\   /",
        "       //__/         //__/" 
};

// ? Talvez organizar isso aqui? Tá meio tenso de se entender.
constexpr uint8_t capybaraLines = sizeof(capybara) / sizeof(capybara[0]);
constexpr uint8_t maxPerLine = 19;
constexpr uint8_t textStartLine = 2;

int main(int argc, char *argv[])
{
    string input = "Capybara Supremacy!"; // se nenhum argumento for fornecido esse sera o padrão

    if (argc > 1)
    {
        input = argv[1];
    }

    // Calcula a maior linha
    size_t biggestLine = 0;
    for (const auto line : capybara)
    {
        if (line.length() > biggestLine)
        {
            biggestLine = line.length();
        }
    }

    // Quebra a linha
    for (int8_t i = 0; i < capybaraLines; i++)
    {
        cout << capybara[i];

        int32_t textIndex = i - textStartLine;
        int32_t startChar = textIndex * maxPerLine;

        if (textIndex >= 0 && startChar < input.length())
        {
            string preText(biggestLine - capybara[i].length() + 2, ' ');

            cout << preText << input.substr(startChar, maxPerLine);
        }

        cout << endl;
    }

    return 0;
}