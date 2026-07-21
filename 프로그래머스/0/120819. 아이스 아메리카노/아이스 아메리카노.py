def solution(money):
    answer = []
    num = int(money / 5500)
    balance = money % 5500
    answer.append(num)
    answer.append(balance)
    return answer