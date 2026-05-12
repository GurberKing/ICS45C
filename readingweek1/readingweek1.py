# 파이썬은 c++과는 다르게 매개변수안에 자신의 길이를 안넘겨줘도 됨.

def average(lst):
    total = 0.0
    for count in range(len(lst)):
        total += float(lst[count])
    
    return total / len(lst)

def average2(lst):
    return sum(lst)/len(lst)

print(average([10,20,30,40,50]))
print(average2([10,20,30,40,50]))