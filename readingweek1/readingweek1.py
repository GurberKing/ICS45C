def gradeGenerator():
    score = int(input("Enter a student score: "))
    condition = int(score / 10)

    match condition:
        case 10:
            print("A")
        case 9:
            print("A")
        case 8:
            print("B")
        case 7:
            print("C")
        case 6:
            print("D")
        case _:
            print("F")

gradeGenerator()