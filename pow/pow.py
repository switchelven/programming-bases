def pow(a, n):
    res = 1
    for _ in range(0, n):
        res = res * a
    return res

if __name__ == "__main__":
    pow(3,10)
