# OscProb

OscProb is a small set of classes aimed at computing exact neutrino oscillation probabilities with a few different models.

OscProb contains a basic framework for computing neutrino oscillation probabilities. It is integrated into ROOT, so that each class can be used as you would any ROOT class.

Available classes are:
- PremModel: Used for determining neutrino paths through the earth
- PMNS_Fast: Standard 3-flavour oscillations
- PMNS_Sterile: Oscillations with any number of neutrinos
- PMNS_NSI: Oscillations with 3 flavours including Non-Standard Interactions

A few example macros on how to use OscProb are available in a tutorial directory.

# Installing OscProb

OscProb is very easy to install. The only requirements is to have ROOT installed with the GSL libraries.
IMPORTANT: OscProb currently does NOT build with ROOT 6

Once you have ROOT setup, simply do:
cd OscProb
make

A shared library will be produced: libOscProb.so

This should take a few seconds and you are all set.

Just load the shared library in your ROOT macros with:
gSystem->Load("/full/path/to/libOscProb.so");

# Tutorial

In the directory OscProb/tutorial you will find a few macros with examples using OscProb.

Two macros are particularly useful:
- simpleExamples.C : Contains some short pieces of code on how to perform different tasks.
- MakeOscillogram.C : Runs a full example of how to plot an oscillogram with the PREM model.

Additionally, the macro SetNiceStyle.C will provide simple tools to make your plots look nicer. Feel free to use it anytime you're making plots, even if you're not running OscProb. This is completely independent of OscProb.
