print('Welcome to Maths Quiz')
answer=input('Are you ready to play the Quiz ? (yes/no) :')
score=0
total_questions=3

if answer.lower()=='yes':
    answer=input('Question 1:25+36')
    if answer.lower()=='61':
        score += 1
        print('correct')
    else:
        print('Wrong Answer')


    answer=input('Question 2: 64*62')
    if answer.lower()=='3968':
        score += 1
        print('correct')
    else:
        print('Wrong Answer')

    answer=input('Question 3: 64-3')
    if answer.lower()=='61':
        score += 1
        print('correct')
    else:
        print('Wrong Answer')

print('Well Done!, you attempted',score,"questions correctly!")
mark=(score/total_questions)*100
print('Marks obtained:',mark)
