void countApplesAndOranges(int s, int t, int a, int b, int apples_count, int* apples, int oranges_count, int* oranges) {
    int countapples =0;
    int countoranges=0;
    for(int i=0;i<apples_count;i++)
    {
        apples[i]=apples[i]+a;
        if(apples[i]>=s&&apples[i]<=t)
        {
            countapples++;
        }
    }
    for(int j=0;j<oranges_count;j++)
    {
        oranges[j]=oranges[j]+b;
        if(oranges[j]>=s&&oranges[j]<=t)
        {
            countoranges++;
        }
    }
    printf("%d\n",countapples);
    printf("%d",countoranges);
}
