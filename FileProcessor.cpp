#include <iostream>
#include <fstream>
#include "FileProcessor.h"

fileProcessor::fileProcessor(){
    this->m_translate = translator();
}

fileProcessor::~fileProcessor(){

}

void fileProcessor::processFile(std::string htmlFile, std::string txtFile){
    translator wordTranslator;
    std::ofstream file(htmlFile);
    if (file.is_open()){
        std::ifstream file2(txtFile);
        if (file2.is_open()){
            std::string line;
            file << "<!DOCTYPE html>" << std::endl;
            file << "<html>" << std::endl;
            file << "   <body>" << std::endl;
            file << "   <h1><b>Translated Words:</b></h1>" << std::endl;
            file << "   <p><i>" << std::endl;
            while (file2 >> line){
                file << "        " << wordTranslator.translateEnglishWord(line) << std::endl;
            }
            file << "   </p></i>" << std::endl;
            file << "   </body>" << std::endl;
            file << "</html>" << std::endl;
            file2.close();
        }
        else{
            std::cout << "Error. the text file did not open correctly." << std::endl;
        }
        file.close();
    }
    else {
        std::cout << "Error. The html file did not open correctly." << std::endl;
    }
}