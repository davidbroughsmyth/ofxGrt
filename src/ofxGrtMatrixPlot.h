/*
 GRT MIT License
 Copyright (c) <2012> <Nicholas Gillian, Media Lab, MIT>
 
 Permission is hereby granted, free of charge, to any person obtaining a copy of this software 
 and associated documentation files (the "Software"), to deal in the Software without restriction, 
 including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, 
 and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, 
 subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in all copies or substantial 
 portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT 
 LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. 
 IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, 
 WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE 
 SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
#pragma once

#include <GRT/GRT.h>

#include "ofPixels.h"
#include "ofTexture.h"
#include "ofConstants.h"

namespace GRT {
class ofxGrtMatrixPlot {
public:
    ofxGrtMatrixPlot();
    void update( const MatrixDouble &data );
    void update( float *data, const unsigned int rows, const unsigned int cols );
    bool draw(float x, float y) const;
    bool draw(float x, float y, float w, float h) const;

    unsigned int getRows() const;
    unsigned int getCols() const;
protected:
    unsigned int rows;
    unsigned int cols;
    std::vector<float> pixelData;
    ofFloatPixels pixels;
    ofTexture texture;
};
}
