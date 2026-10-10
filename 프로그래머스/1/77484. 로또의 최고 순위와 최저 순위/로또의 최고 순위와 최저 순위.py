def solution(lottos, win_nums):
    answer = []
    cnt = 0
    cnt_zero = 0
    min_rank = 0
    max_rank = 0
    # 일단 lottos랑 win_nums랑 공통 원소를 찾고, 그 개수를 세서 최소 등수 min에 저장한다. 그리고, lottos의 0의 개수를 구한다. 그 개수만큼 로또 번호가 아무거나 win_nums랑 맞았다고 치고 최고 등수 max를 구한다.
    for x in range(6):
        if lottos[x] in win_nums:
            cnt += 1
        if lottos[x] == 0:
            cnt_zero += 1

        min_rank = min(6, 7 - cnt)
        max_rank = min(6, 7 - (cnt + cnt_zero))
    answer = [max_rank, min_rank]
    return answer