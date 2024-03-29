class Solution{   
  public:
  
    //for prime number
    void seive(vector<int> &isprime){
        for(int i=2;i<10000;i++){
            for(int j=i+i;j<10000;j=j+i){
                isprime[j]=0;
            }
        }
    }
    
    int shortestPath(int Num1,int Num2)
    {   bool a=false;
        vector<int> isprime(10000,1);
        
        if(!a){
            seive(isprime);
            a=true;
        }
        queue<pair<int,int>> q;
        q.push({Num1,0});
        vector<int> vis(10000,0);
        vis[Num1]=1;
        while(q.size()){
            auto t = q.front();
            q.pop();
            if(t.first==Num2)return t.second;
            string num = to_string(t.first);
            for(int j=0;j<4;j++){
                for(int k=0;k<=9;k++){
                    char c= '0'+k;
                    string num2=num;
                    num2[j]=c;
                    int temp = stoi(num2);
                    if(isprime[temp] and num2[0]!='0' and vis[temp]==0){
                        q.push({temp,t.second+1});
                        vis[temp]=1;
                    }
                }
            }
        }
        return -1;
    }
};