value = 0
scores = input("input the list of studend's score. \n").split()
for n in range(0, len(scores)):
  scores[n] = int(scores[n])
print(scores)

for score in scores:
  if score > value:
    value = score
print(f"the maximun value in your student's score list is: {value}.")