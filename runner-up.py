# Sample Input :
# 5
# 2 3 6 6 5
# Sample Output :
# 5
# Given list is [2,3,6,6,5]. The maximum score is 6, second maximum is 5. Hence, we print 5 as the runner-up score.

if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    print(sorted(set(arr), reverse=True)[1])

