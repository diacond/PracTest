def solution(N, stages):
    answer = []
    # 실패율 = 스테이지에 도달 but 클리어 못한 사람 수 / 스테이지 도달한 사람 수
    # 전체 스테이지 개수 N, stages = [] 사용자가 멈춰있는 스테이지 번호가 담긴 배열
    # 실패율이 높은 스테이지부터 내림차순으로 리턴
    # stages 는 사람 숫자인거네
    # 1번은 1/8 2번은 3/7 3번은 2/4 4번은 1/2 5번은 0/1
    # 1 2 2 2 3 3 4 6
    fail_rate = 0
    fail_list = []
    stages.sort()
    for i in range(1, N + 1):
        fail = stages.count(i)
        if len(stages) == 0:
            fail_rate = 0
        else:
            fail_rate = fail / len(stages)
        stages = stages[fail:]
        fail_list.append((-fail_rate, i))
    fail_list.sort()
    for rate, num in fail_list:
        answer.append(num)
    return answer