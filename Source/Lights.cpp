/*
  ==============================================================================

    Lights.cpp
    Created: 23 Feb 2019 8:36:04pm
    Author:  Mateo Yepes

  ==============================================================================
*/

#include "Lights.h"
#include "PluginEditor.h"

Lights::Lights()
{
    
}

void Lights::addReference (BallSoundAudioProcessorEditor& n)
{
    k = &n;
}

void Lights::paint (Graphics& g)
{
    if (isOn)
    {
        k->updateFrequency();
        g.setColour (Colour (Colours::white));
        g.fillEllipse(0, 0, getWidth(), getHeight());
    }
}

void Lights::resized() 
{
    
}

void Lights::mouseEnter(const juce::MouseEvent &)
{
    isOn = !isOn;
    repaint();
}

