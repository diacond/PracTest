class Solution {
    public int[] solution(int[] num_list) {
        int[] answer = new int[2];
        int cnt_e = 0;
        int cnt_o = 0;
        for(int i = 0; i < num_list.length; i++){
            if(num_list[i] % 2 == 0) cnt_e++;
            else cnt_o++;
        }
        answer[0] = cnt_e;
        answer[1] = cnt_o;
        return answer;
    }
}