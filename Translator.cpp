#include <iostream>
#include <sstream>
#include "Translator.h"
#include "Model.h"

translator::translator(){
    this->m_model = model();
}

translator::translator(model c){
    this->m_model = model(c);
}

translator::~translator(){

}

model translator::getModel(){
    return this->m_model;
}

void translator::changeModel(model c){
    this->m_model = c;
}

std::string translator::translateEnglishWord(std::string word){
    model a(word);
    for (int i = 0; i < word.size(); ++i){
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u'){
            a.translateSingleVowel(word[i]);
        }
        else{
            a.translateSingleConsonant(word[i]);
        }
    }
    a.changeString(a.getString().erase(0, word.size())); //modifies the string to remove the original from the word after translating
    this->changeModel(a);
    return this->getModel().getString();

}

std::string translator::translateEnglishSentence(std::string sentence){
    std::string x = "";
    std::istringstream stream(sentence);
    std::string word;
    while(stream >> word){
        x += translateEnglishWord(word) + ' ';
    }
    return x;
}