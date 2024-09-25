import sys

color = input("Remind me, what's your favorite color again? ")
if color.lower() == 'blue':  
    print("Oh, of course! It's blue, how could I forget?")
    sys.exit()  

else:
    print("Hmm... I have no idea at all.")

for i in range(6):
    print("...")

print("Just kidding! I totally knew it was " + color + " obiously.")
print("I'm not a robot, I swear!")
