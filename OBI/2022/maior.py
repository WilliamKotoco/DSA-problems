N, M, S = [int(i) for i in input().split()]


def digitSum(val):
    sum = 0
    while val:
        sum = sum + (val % 10)
        val = val // 10  # // significa divisão inteira
    return sum


def getHighest(N, M, S):
    while M >= N:
        if digitSum(M) == S:
            return M
        M = M - 1
    return -1


print(getHighest(N, M, S))
