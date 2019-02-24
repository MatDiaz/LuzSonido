/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"
#include "Lights.h"

//==============================================================================
/**
*/
class BallSoundAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    BallSoundAudioProcessorEditor (BallSoundAudioProcessor&);
    ~BallSoundAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;
    
    void updateFrequency();
    
    Random randomFreq;
    
    constexpr static int luzX = 30, luzY = 30;
    
    Lights nLights[luzX * luzY];

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    BallSoundAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (BallSoundAudioProcessorEditor)
};
