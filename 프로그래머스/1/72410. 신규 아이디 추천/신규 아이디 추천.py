def solution(new_id):
    answer = ''
    # 1단계
    new_id = new_id.lower()

    # 2단계
    tmp = ''
    for c in new_id:
        if c.isalnum() or c in '-_.':
            tmp += c
    new_id = tmp
    
    # 3단계
    while '..' in new_id:
        new_id = new_id.replace('..', '.')
    
    # 4단계
    new_id = new_id.strip('.')
    
    # 5단계
    if new_id == '':
        new_id = 'a'
    
    # 6단계
    new_id = new_id[:15]
    new_id = new_id.rstrip('.')
    
    while len(new_id) < 3:
        new_id += new_id[-1]
    
        
    return new_id