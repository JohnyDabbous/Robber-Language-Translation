#ifndef TRANSLATOR_H
#define TRANSLATOR_H
#include "Model.h"

class translator {
    public:
        translator();
        translator(model c);
        ~translator();
        model getModel();
        void changeModel(model c);
        std::string translateEnglishWord(std::string word);
        std::string translateEnglishSentence(std::string sentence);
    private:
        model m_model;
};

#endif