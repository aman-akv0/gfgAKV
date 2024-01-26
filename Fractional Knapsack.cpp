class Solution
{
    public:
    // static bool cmp(struct Item a, struct Item b)
    // {
    //     double r1 = (double)a.value / (double)a.weight;
    //     double r2 = (double)b.value / (double)b.weight;
    //     return r1 > r2;
    // }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int w, Item arr[], int n)
    {
        // Your code here
        auto cmp=[](struct Item a, struct Item b)
        {
        double r1 = (double)a.value / (double)a.weight;
        double r2 = (double)b.value / (double)b.weight;
        return r1 > r2;
        };
        double final=0.0;
        sort(arr, arr+n , cmp);
        for(int i = 0; i<n;i++){
            if(arr[i].weight<=w){
                w-=arr[i].weight;
                final+=arr[i].value;
            }else{
                final+=w*((double)arr[i].value/arr[i].weight);
                break;
            }
            
        }return final;
    }
        
};
