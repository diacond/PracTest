class Solution {
    public String solution(int age) {
        StringBuilder sb = new StringBuilder();
        String s = String.valueOf(age);
        
        for(int i = 0; i< s.length(); i++){
            sb.append((char)(s.charAt(i) - '0' + 97));
        }
        return sb.toString();
    }
}