//A program to determine whether the seller has made profit or incurred loss.
#include<stdio.h>
    int main(){
        float cp;
        float sp;
    float loss;
    float profit;
    printf("Enter cost price: ");
    scanf("%f", &cp);
    printf("Enter selling price: ");
    scanf("%f", &sp);

    if (cp < sp){
            profit=sp-cp;
        printf("Seller has made profit\n");
        printf("Profit=%.1f Tk", profit);
    }
    else {
            loss=cp-sp;
    printf("Seller has incurred loss\n");
    printf("loss=%.1f Tk", loss);
    }
return 0;
}
