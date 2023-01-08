if __name__ == '__main__':
    n = int(input())

    m = str(n)
    for i in range(1, n, 1):
        j = n - i
        m = str(j) + m
    print(m)