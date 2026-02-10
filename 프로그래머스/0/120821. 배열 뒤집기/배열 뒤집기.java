class Solution {
    public int[] solution(int[] num_list) {
        int[] answer = new int[num_list.length]; // 같은 크기 배열 생성
        for(int i = 0; i<num_list.length; i++){
            answer[num_list.length-i-1] = num_list[i];
        }
        return answer;
    }
}