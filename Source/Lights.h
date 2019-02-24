/*
  ==============================================================================

    Lights.h
    Created: 23 Feb 2019 8:36:04pm
    Author:  Mateo Yepes

  ==============================================================================
*/

#pragma once
#include "../JuceLibraryCode/JuceHeader.h"

class BallSoundAudioProcessorEditor;

class Lights: public Component
{
    public:
    
    Lights();
    
    void addReference (BallSoundAudioProcessorEditor& n);
    
    void paint(Graphics& g) override;
    
    void resized() override;
    
    void mouseEnter (const MouseEvent&) override;
    
    bool isOn = false;
    
    BallSoundAudioProcessorEditor* k;
};
