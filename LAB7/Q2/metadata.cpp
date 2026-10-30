#include <iostream>
using namespace std;

class Image {
protected:
    int width, height;

public:
    Image(int w, int h) {
        width = w;
        height = h;
    }
};

class CompressedImage : public Image {
protected:
    double compressionRatio;

public:
    CompressedImage(int w, int h, double ratio)
        : Image(w, h) {
        compressionRatio = ratio;
    }
};

class EncryptedImage : public CompressedImage {
    string algorithm;

public:
    EncryptedImage(int w, int h, double ratio, string algo)
        : CompressedImage(w, h, ratio) {
        algorithm = algo;
    }

    void display() {
        int originalPixels = width * height;
        double effectiveSize =
            originalPixels * compressionRatio / 100.0;

        cout << "Image Width: " << width << endl;
        cout << "Image Height: " << height << endl;
        cout << "Original Pixels: " << originalPixels << endl;
        cout << "Compression Ratio: "
             << compressionRatio << "%" << endl;
        cout << "Effective Pixel Size: "
             << effectiveSize << endl;
        cout << "Encryption Algorithm: "
             << algorithm << endl;
    }
};

int main() {
    EncryptedImage img(1920, 1080, 50, "AES");
    img.display();

    return 0;
}