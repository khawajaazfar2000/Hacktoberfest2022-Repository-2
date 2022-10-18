print('Welcome to GK Quiz')
answer=input('Are you ready to play the Quiz ? (yes/no) :')
score=0
total_questions=3

if answer.lower()=='yes':
    answer=input('Question 1: Dead Sea is located between which two countries?')
    if answer.lower()=='Jordan and Israel':
        score += 1
        print('correct')
    else:
        print('Wrong Answer :(')


    answer=input('Question 2: Which country is known as Country of Rising Sun?')
    if answer.lower()=='Japan':
        score += 1
        print('correct')
    else:
        print('Wrong Answer :(')

    answer=input('Question 3: White Elephant are found in .....')
    if answer.lower()=='Thailand':
        score += 1
        print('correct')
    else:
        print('Wrong Answer :(')

print('Well Done!, you attempted',score,"questions correctly!")
mark=(score/total_questions)*100
print('Marks obtained:',mark)
