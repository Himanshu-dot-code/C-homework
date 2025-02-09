import pyttsx3

import pyttsx3

# Initialize the TTS engine
engine = pyttsx3.init()

# Set properties (optional)
engine.setProperty('rate', 150)    # Speed percent (can go over 100)
engine.setProperty('volume', 0.9)  # Volume 0-1

# Convert text to speech
engine.say("Hello, this is a text-to-speech conversion.")
engine.runAndWait()

