class Solution {
public:
    string intToRoman(int num) {
        string answer;
        while(num>=1000){
            num=num-1000;
            answer += 'M';
        }
        if(num>=900){
            num=num-900;
            answer += "CM";
        }
        while(num>=500){
            num=num-500;
            answer += 'D';
        }
        if(num>=400){
            num=num-400;
            answer += "CD";
        }
        while(num>=100){
            num=num-100;
             answer += 'C';
        }
        if(num>=90){
            num=num-90;
            answer += "XC";
        }
        while(num>=50){
            num=num-50;
            answer += 'L';
        }
        if(num>=40){
            num=num-40;
            answer += "XL";
        }
        while(num>=10){
            num=num-10;
            answer += 'X';
        }
        if(num==9){
            num=num-9;
            answer += "IX";
        }
        while(num>=5){
            num=num-5;
            answer += 'V';
        }
        if(num==4){
            num=num-4;
            answer += "IV";
        }
        while(num>=1){
            num=num-1;
            answer += 'I';
        }
        return answer;
        
    }
};
