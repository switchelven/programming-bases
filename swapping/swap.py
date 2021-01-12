def swap(a, b):
    b = a + b
    a = b - a
    b = b - a
    return a, b


if __name__ == "__main__":
    print(swap(2, 7))
