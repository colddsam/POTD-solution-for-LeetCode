int maxConsecutiveAnswers(string answerKey, int k) {

        int ans=0,T=0,F=0,i=0;
        for(int j=0;j<answerKey.size();j++){
            if(answerKey[j]=='T') 
                T++;
            else 
                F++;
            if(min(T,F)>k){
                if(answerKey[i]=='T') 
                    T--;
                else 
                    F--;       
                i++;
            }
            ans=max(ans,T+F);
        }
        return ans;
    }
