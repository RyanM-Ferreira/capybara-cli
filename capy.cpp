#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    string input;

    if (argc > 1)
    {
        input = argv[1];
    }
    else
    {
        input = "Capybara Supremacy!";
    }

    string capybara[] = {
        "    /\\__/\\_",
        "   /       \\",
        "  /    0    \\----------_",
        " | Y                    \\",
        " \\______/                \\",
        "       \\                 |",
        "        |   /-______-|    \\",
        "        |   |         \\   /",
        "       //__/         //__/"};

    // ? Talvez organizar isso aqui? Tá meio tenso de se entender.
    const int capybaraLines = sizeof(capybara) / sizeof(capybara[0]);
    const int maxPerLine = 19;
    int textStartLine = 2;

    size_t biggestLine = 0;
    for (const auto line : capybara)
    {
        if (line.length() > biggestLine)
        {
            biggestLine = line.length();
        }
    }

    for (int i = 0; i < capybaraLines; i++)
    {
        cout << capybara[i];

        int textIndex = i - textStartLine;
        int startChar = textIndex * maxPerLine;

        if (textIndex >= 0 && startChar < input.length())
        {
            string preText(biggestLine - capybara[i].length() + 2, ' ');

            cout << preText << input.substr(startChar, maxPerLine);
        }

        cout << endl;
    }

    return 0;
}