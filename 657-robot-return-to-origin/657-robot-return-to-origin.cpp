class Solution {
public:
    bool judgeCircle(string moves) {
        
    int r1=0;
    int r2=0;
    int r3=0;
    int r4=0;
        
    for(int i=0 ; i<moves.size(); i++)
    {
        if(moves[i]=='L')r1++;
        if(moves[i]=='R')r2++;
        if(moves[i]=='U')r3++;
        if(moves[i]=='D')r4++;
}
        if(r1==r2 && r3==r4)return 1;
        return 0;

    }
};