class Solution {
public:
  
    int trap(vector<int>& height) {
        int maxleft=0,maxright=0,water=0,index=0,maxheight=height[0];

        for(int i=1;i<height.size();i++){
            if(maxheight<height[i]){
                maxheight=height[i];
                index=i;
            }

        }

        //leftside from maxheight
        for(int i=0;i<index;i++){
            if(maxleft>height[i]){
                water+=(maxleft-height[i]);
            }
            else{
                maxleft=height[i];
            }
        }
        //rightside from maxheight
        for(int i=height.size()-1;i>index;i--){
            if(maxright>height[i]){
                water+=(maxright-height[i]);
            }
            else{
                maxright=height[i];
            }
        }
        return water;
        
    }
};
