#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include <vector>
#include <fftw3.h>

#include "AudioFile.h"
#include "utilities.h"


int main()
{
    /* declare free parameters */
    int wlen = 1024;
    int timeStep = 512;
    int numFreq = 1024;

    /* Testing FFT
    fftw_complex in[N], out[N];
    fftw_plan p;
    */

    /* Load Audio File 1 */
    const std::string filePath = "res/examples_test-audio.wav";
    AudioFile<float> a;
    bool loadedOK = a.load (filePath);
    assert (loadedOK);
    
    /* load both audio tracks */
    std::vector<float> x1 = a.samples[0];
    std::vector<float> x2 = a.samples[1];

    /* define hamming window */
    std::vector<float> awin = hamming(wlen);

    /* returns a 2d complex float array 1024 x 127
    where 1024 is numFreq and 127 is ceil((numberSamples-length(awin)+1)/timeStep)+1
    tf1 = tfanalysis(x1, awin, timeStep, numFreq); */




    std::cout << "Bit Depth: " << a.getBitDepth() << std::endl;
    std::cout << "Sample Rate: " << a.getSampleRate() << std::endl;
    std::cout << "Num Channels: " << a.getNumChannels() << std::endl;
    std::cout << "Length in Seconds: " << a.getLengthInSeconds() << std::endl;
    std::cout << std::endl;
        
    return 0;
}