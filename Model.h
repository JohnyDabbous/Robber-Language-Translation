#ifndef MODEL_H 
#define MODEL_H

class model {
    public:
        model();
        model(std::string word);
        ~model();
        int getSize();
        std::string translateSingleConsonant(char c);
        std::string translateSingleVowel(char v);
        std::string getString();
        std::string changeString(std::string changedWord);
    private:
        std::string m_string;
};

#endif