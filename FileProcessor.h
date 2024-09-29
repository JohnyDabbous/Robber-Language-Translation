#include <fstream>
#include "Translator.h"
#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H

class fileProcessor {
    public:
        fileProcessor();
        ~fileProcessor();
        void processFile(std::string file1, std::string file2);
    private:
        translator m_translate;
};

#endif