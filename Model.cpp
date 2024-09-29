#include <iostream>
#include "Model.h"

model::model(){
    this->m_string = "";
}

model::model(std::string word){
    this->m_string = word; 
}

model::~model(){

}

std::string model::getString(){
    return this->m_string;
}

std::string model::changeString(std::string changedWord){
    this->m_string = changedWord;
    return this->m_string;
}

std::string model::translateSingleConsonant(char c){
    std::string word = this->getString();
    std::string newWord = "";
    word += tolower(c);
    word += 'o';
    word += tolower(c);
    this->changeString(word);
    return word;

}

std::string model::translateSingleVowel(char v){
    std::string word = this->getString();
    word += tolower(v);
    this->changeString(word);
    return word;
}