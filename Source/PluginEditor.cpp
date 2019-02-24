/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
BallSoundAudioProcessorEditor::BallSoundAudioProcessorEditor (BallSoundAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (400, 300);
    
    for (auto i = 0; i < luzX * luzY; ++i)
    {
        addAndMakeVisible(nLights[i]);
        nLights[i].addReference(*this);
    }
}

void BallSoundAudioProcessorEditor::resized()
{
    float divX = getWidth() / luzX;
    float divY = getHeight() / luzY;
    
    int counter = 0;
    
    for (auto i = 0; i < luzX; ++i)
    {
        for (auto j = 0; j < luzY; ++j)
        {
            nLights[counter++].setBounds(i * divX, j * divY, divX, divY);
        }
    }
}

void BallSoundAudioProcessorEditor::updateFrequency()
{
    processor.frequency = randomFreq.nextInt(3875) + 125;
}

BallSoundAudioProcessorEditor::~BallSoundAudioProcessorEditor()
{
}

//==============================================================================
void BallSoundAudioProcessorEditor::paint (Graphics& g)
{
    g.fillAll(Colour(Colours::black));
}

