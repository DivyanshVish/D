class Solution {
    public String intToRoman(int num) {
        int[] intcode = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        String[] code = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        StringBuilder ab = new StringBuilder();
        for(int i = 0;i<intcode.length;i++){
            while(num>=intcode[i]){
                ab.append(code[i]);
                num-=intcode[i];
            }
        }
        return ab.toString();
    }
}