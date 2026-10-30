#include <iostream>
using namespace std;

class Document{
    public:
        virtual void exportFile(){
            cout << "File exported!!!"<<endl;
        }
};

class PDFDocument : public Document{
    public:
        void exportFile() override{
            cout << "File exported!!! (.pdf)"<<endl;
        }
};

class TextDocument : public Document{
    public:
        void exportFile() override{
            cout << "File exported!!! (.txt)"<<endl;
        }
};

class CSVDocument : public Document{
    public:
        void exportFile() override{
            cout << "File exported!!! (.csv)"<<endl;
        }
};

int main() {
    PDFDocument pdf;
    TextDocument text;
    CSVDocument csv;

    Document *ptr;
    ptr = &pdf;
    ptr->exportFile();

    ptr = &text;
    ptr->exportFile();

    ptr = &csv;
    ptr->exportFile();

    return 0;
}