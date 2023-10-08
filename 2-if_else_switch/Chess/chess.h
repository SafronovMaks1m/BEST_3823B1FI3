int chess_rook(char a, int b, char c, int d){
    char mas[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    int i = 0, total = 0;
    for (i = 0; i<8; i++){
        if (a == mas[i]){
            total+=1;}
        if (c == mas[i]){
            total+=1;}
    }
    if (b<=8 && d <=8 && total == 2){
        if (a == c && b == d){
            return 0;}
        else if (a == c || b == d ){
            return 1;}
    }
    return 0;
}