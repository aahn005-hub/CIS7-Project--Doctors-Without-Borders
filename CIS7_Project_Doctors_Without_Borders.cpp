/*
Arnold Ahn
CIS-7
12/10/20
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    
    /*  UCR selects 100 graduates to particiate in program. 
        Matched based on specialized areas, language fluency, and preferences.
        Each pair of participants are given opportunity to aid on-site physicians for 60 days.
        Program expand over 20 countries.

    */

    // variables for user to input language and specialization
    int language, specialty;

    // asking using what language they are fluent in out of selected languages.
    cout << "What language are you fluent in? Input via number: \n";
    cout << "__________________________________________________\n\n";
    cout << "1.\t English \n";
    cout << "2.\t Spanish \n";
    cout << "3.\t Russian \n";
    cout << "4.\t Swahili \n";
    
    // user inputs fluent language via number.
    cin  >> language;
    

    // switch statement to output different lines of code depending on user input
    switch(language-1){

        // Countries that speak English : United States, France, India, Philippines, Thailand
        case 0:
        cout << "You have chosen English.\n";
        break;
        
        // Countries that speak Spanish: Mexico, El Salvador, Honduras, Nicaragua, Venezuela
        case 1:
        cout << "You have chosen Spanish.\n";
        break;

        // Countries that speak Russian: Russian Federation, Belarus, Kyrgyzstan, Ukraine, Georgia
        case 2:
        cout << "You have chosen Russian. \n";
        break;
        
        // Countries that speak Swahili: Tanzania, Uganda, Kenya, Ethiopia, Sudan
        case 3:
        cout << "You have chosen Swahili. \n";
        break;
    }

    // Used array to distribute the countries based off of common language. Will be used to
    // determine which countries the user will go to based off of language fluency
    string countries[4][5] = {{"United States", "France", "India", "Philippines", "Thailand"},
    {"Mexico", "El Salvador", "Honduras", "Nicaragua", "Venezuela"},
    {"Russian Federation", "Belarus", "Kyrgyzstan", "Ukraine", "Georgia"},
    {"Tanzania", "Uganda", "Kenya", "Ethiopia", "Sudan"}};

    // asking using what specialty they are fluent in out of selected specialty.
    cout << "What specialty are you fluent in? Input via number: \n";
    cout << "__________________________________________________\n\n";
    cout << "1.\t Cardiology \n";
    cout << "2.\t Family Medicine \n";
    cout << "3.\t Infectious disease \n";
    cout << "4.\t Neurology \n";
    cout << "5.\t Pathology \n";

    // User inputs specialty via number.
    cin  >> specialty;

    // switch statement to output different lines of code depending on user input
    switch(specialty-1){

        case 0:
        cout << "You have chosen Cardiology.\n";
        break;
        
        case 1:
        cout << "You have chosen Family Medicine.\n";
        break;
    
        case 2:
        cout << "You have chosen Infectious disease. \n";
        break;
              
        case 3:
        cout << "You have chosen Neurology. \n";
        break;

        case 4:
        cout << "You have chosen Pathology. \n";
        break;
    
    }

    // Implements Random seed generator. 
    // Using srand so results will always be different 
    srand(time(0));
    // random from 1 to 5
    int random = (rand() % 5);

    // random generator will determine country based off of language fluency
    cout << "Your country will be " << countries[language-1][random] << "!\n";
    cout << endl;

    // Determine the probability of participants matching based on language fluency.
    // Since there are only 5 countries available based of of language, probability is 20%
    cout << "If the student chooses a language flurency, ";
    cout << "the probability of participants matching to a country is 1/5 or 20%";
    return 0;
}