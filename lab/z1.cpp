/******************************************************************************

                              1.Zabawa z ASCII - Patryk Nowoszynski

Napisz w c++ program typu „ascii-art”, który generuje mniej więcej rysunki takiej postaci plus jedna postać dowolna:

*******************************************************************************/

#include <iostream>
#include <string>

// Używanie przestrzeni nazw w celu zapobiegania potencjalnym konfliktom nazewnictwa i logicznego grupowania
// powiązanych funkcjonalności.
namespace AsciiArtUtils {

    /**
    * @class AsciiArtGenerator
    * Generuje grafikę ASCII na podstawie podanego tekstu.
    */
    class AsciiArtGenerator {
    private:
        std::string text;

        /**
        * Generuje grafikę ASCII dla podanego tekstu.
        *
        * @return std::string Reprezentacja tekstu w formacie ASCII.
        */
        std::string GenerateAsciiArt() {

            std::string asciiArt = R"(

   /"""\          /"""\       /"""\      /"""\    
   |○ ○|          |0 0|       |○ ○|      |@ @|
   \ - /          \ U /       \ ~ /      \ = /
    |_|            |_|         |_|        |_|
  normalny      szcześliwy   zakochany   po sesji   


                                                          .......
      ***           @@@@@@@       #############       .:::::::::::::.  
    *******         @@  @@@@      ##         ##      .::'  '''''  '::. 
   *********       @@    @@@      #  ~~   ~~  #      :::           ::: 
/\* ### ### */\    @ 0  0 @@@     #  ()   ()  #      :::           ::: 
|    @ / @    |   @@  I   @@@@    (     ^     )      :::           ::: 
\/\    ^    /\/   @@      @@@@     |         |       ::'           ':: 
   \  ===  /      @@  ==  @@@      |  {===}  |      : : /~~~' '~~~\ : :
    \_____/        @+     @@        \       /       :(:   |   :):
     _|_|_         @+++  +@@       /  -----  \      '.:     / \     :.'
  *$$$$$$$$$*       @+   +@     ---  |%\ /%|  ---    ':    (. .)    :' 
                     +88$8     /     |%%%%%|     \    '.  .:::::.  .'
                                     |%/ \%|           :  <----->  :   
                                                       '.  ~:::~  .'
                                                         '.  '  .'     
                                                           '''''
)";

            return asciiArt;
        }

    public:
        /**
        * Konstruuje obiekt AsciiArtGenerator z podanym tekstem.
        *
        * @param inputText Tekst, z którego ma zostać wygenerowana grafika ASCII.
        */
        AsciiArtGenerator(const std::string& inputText) {
            text = inputText;
        }

        /**
        * Generuje i drukuje grafikę ASCII dla podanego tekstu.
        */
        void GenerateAndPrintAsciiArt() {
            std::string asciiArt = GenerateAsciiArt();
            std::cout << asciiArt << std::endl;
        }
    };
}

int main() {
    std::string inputText = "wow";
    AsciiArtUtils::AsciiArtGenerator asciiArtGenerator(inputText);
    asciiArtGenerator.GenerateAndPrintAsciiArt();

    return 0;
}
