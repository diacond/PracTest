class Solution {
    public int solution(int n, int k) {
        int answer = 0;
        int free_drink = 0;
        if(n >= 10){
            free_drink = n/10;
        }
        answer = 12000 * n + 2000 * (k - free_drink);
        return answer;
    }
}