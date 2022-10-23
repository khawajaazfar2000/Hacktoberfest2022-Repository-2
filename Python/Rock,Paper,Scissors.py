#About game:
print("You are going to play ROCK | PAPER | SCISSOR game with PC ----!")
print("You need to win at-least two games to become Winner !")
print("In this game 0 , 1 , 2 indicates Rock, Paper , Sicssor respectivley !")
#Initialization:
import random
i = 0
score = 0
#loop and conditions :
for i in range(0,3):
    rand = random.randint(0,2)
    choice = int(input("Enter your choice : "))
    if rand == choice:
        print("You win !")
        score += 1
    elif rand!= choice:
        print("You lose !")
        
print("Your score :", score)
if score >= 2:
    print("You win the series !")
else:
    print("You lose the series !")

