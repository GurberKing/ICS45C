def overload(n, m=None):
    if m is None:
        print("Value: ", n)
    else:
        print("1st Value: ", n)
        print("2nd Value: ", m)

overload(1)
overload(2, 3)