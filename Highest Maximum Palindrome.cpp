bool checkPalindrome(string s){
    int start = 0;
    int end = s.length() - 1;
    
    while(start <= end){
        if(s[start] != s[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

string highestValuePalindrome(string s, int n, int k) {
    string ans = "";
    int start = 0, end = s.length() - 1;
    vector<bool> changed(n, false); 
    // track of changed positions

    while(start <= end){
        if(s[start] != s[end]){
            if(k >= 1 && (s[start] == '9' || s[end] =='9')){
                s[start] = '9';
                s[end] = '9';
                k--;
                changed[start] = changed[end] = true;
            }
            else if (k >= 2 && s[start] != '9' && s[end] !='9'){
                s[start] = '9';
                s[end] = '9';
                k -= 2;
                changed[start] = changed[end] = true;
            }
            else if (k > 0){
                char maxi = max(s[start], s[end]);
                s[start] = maxi;
                s[end] = maxi;
                k--;
                changed[start] = changed[end] = true;
            }
        }
        start++;
        end--;
    }

    // Second pass to make highest value palindrome
    start = 0;
    end = s.length() - 1;
    while(start <= end && k > 0){
        if(start == end && k > 0){ 
            // middle element in odd length strings
            s[start] = '9';
            k--;
        }
        if(s[start] < '9'){
            if(changed[start] && k >= 1){
                s[start] = s[end] = '9';
                k--;
            }
            else if(!changed[start] && k >= 2){
                s[start] = s[end] = '9';
                k -= 2;
            }
        }
        start++;
        end--;
    }

    if(checkPalindrome(s)){
        return s;
    } else {
        return "-1";
    }
}
