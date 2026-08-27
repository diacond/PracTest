def solution(price, money, count):
    answer = -1
    for x in range(1, count + 1):
        money -= x * price
        if money <= 0:
            answer = -money
        else:
            answer = 0
    return answer