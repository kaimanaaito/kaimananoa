import sys

color = input("Remind me, what's your favorite color again? ")
if color.lower() == 'blue':  
    print("Oh, of course! It's blue, how could I forget?")
    sys.exit()  

else:
    print("Hmm... that's a tough one. I'm stumped.")

for i in range(6):
    print("...")

print("Just kidding! I totally knew it was " + color + " all along.")
print("See? I'm not a robot, I swear!")
