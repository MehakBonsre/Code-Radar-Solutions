
int main(){
    int i,N;
    scanf("%d", &N);
    int arr[N];
    int max=arr[0];
    int min=arr[0];
    for(i=0;i<N;i++){
        scanf("%d", arr[i]);
    }
    for(i=0;i<N;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("%d ", min);
    printf("%d ", max);

    return 0;
}