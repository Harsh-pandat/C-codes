import pyttsx3
engine = pyttsx3.init()

# For Mac, If you face error related to "pyobjc" when running the `init()` method :
# Install 9.0.1 version of pyobjc : "pip install pyobjc>=9.0.1"

engine.say(""""Twinkle, twinkle, little star,
How we wonder what you are.
Up above the world so high,
Like a diamond in the sky.

When the glorious sun has set,
And the grass with dew is wet,
Then you show your little light,
Twinkle, twinkle, all the night.

When the golden sun doth rise,
Fills with shining light the skies,
Then you fade away from sight,
Shine no more 'till comes the night.""")
engine.runAndWait()