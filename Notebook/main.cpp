//
//  main.cpp
//  Notebook
//
//  Created by Iosif Dubikovski on 9/28/23.
//

#include <iostream>
#include <string>
#include <vector>

int main(int argc, const char * argv[]) {
    std::vector<std::string> notesArray;
    std::string note;
    
    while (true) {
        std::cout << "Enter the notes you want to save (type 'Quit' to exit):\n";
        std::getline(std::cin, note);

        
        if (note == "Quit") {
            break;
        }
        
        notesArray.push_back(note);
        
    }
    
    int num = 0;
    
    for (const std::string& savedNote : notesArray) {
        num += 1;
        std::cout << num << ":" << savedNote << "\n";
    }
    
    return 0;
}
