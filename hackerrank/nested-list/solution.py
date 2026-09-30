n = int(input())
students = [[input(),float(input())] for _ in range(n)]
second_low = sorted({score for _, score in students})[1]
for name in sorted([name for name, score in students if score == second_low]):
    print(name)
