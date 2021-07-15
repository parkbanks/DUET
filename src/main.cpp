#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include <vector>
#include <fftw3.h>

#include "AudioFile.h"
#include "utilities.h"


int main()
{
    int wlen = 1024;
    int timeStep = 512;
    int numFreq = 1024;

    fftw_complex in[N], out[N];
    fftw_plan p;

    /* Load Audio File 1 */
    const std::string filePath = "res/examples_test-audio.wav";
    AudioFile<float> a;
    bool loadedOK = a.load (filePath);
    assert (loadedOK);
        
    std::vector<float> v1 = a.samples[0];
    std::vector<float> v2 = hamming(wlen);




    std::cout << "Bit Depth: " << a.getBitDepth() << std::endl;
    std::cout << "Sample Rate: " << a.getSampleRate() << std::endl;
    std::cout << "Num Channels: " << a.getNumChannels() << std::endl;
    std::cout << "Length in Seconds: " << a.getLengthInSeconds() << std::endl;
    std::cout << std::endl;
        
    return 0;
}