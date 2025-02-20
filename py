
name = input("What is your name?\n")
print(f"Hello {name}.")

student_id = input("What is your Student ID?\n")
print(f"Your ID is {student_id}.")



var1 = float(input("Enter value for var1:\n"))
var2 = float(input("Enter value for var2:\n"))

sum_result = var1 + var2
diff_result = var1 - var2
prod_result = var1 * var2

print(f"var1: {var1}")
print(f"var2: {var2}")
print(f"sum: {sum_result}")
print(f"diff: {diff_result}")
print(f"prod: {prod_result}")



student_name = input("Enter student's name:\n")

lab_grade = float(input("Enter lab grade (%25):\n"))
midterm_grade = float(input("Enter midterm grade (%35):\n"))
final_grade = float(input("Enter final grade (%40):\n"))

last_score = (lab_grade * 0.25) + (midterm_grade * 0.35) + (final_grade * 0.40)

print(f"Name: {student_name}")
print(f"Lab: {lab_grade}")
print(f"Midterm: {midterm_grade}")
print(f"Final: {final_grade}")
print(f"Last Score: {last_score}")




print("*\n**\n***\n**\n*")
