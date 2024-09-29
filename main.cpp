#include <iostream> 
#include "Translator.h"
#include "Model.h"
#include "FileProcessor.h"

int main(int argc, char** argv){
    fileProcessor the;
    the.processFile(argv[1], argv[2]);
    model a("hello there");
    translator myTrans;
    myTrans.changeModel(a);
    std::cout << myTrans.translateEnglishSentence("wass good there bro") << std::endl;
    return 0;

}