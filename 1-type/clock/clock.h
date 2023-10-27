int get_time(long long angle) {
    int min, chas, sec;
    if (angle<360){
        return angle/6;}
    else if(angle>=360 && angle<3600){
        min = angle/360;
        sec = (angle-(min*360))/6;
        return min*100+sec;}
    else{
        chas = angle/3600;
        min = (angle-(chas*3600))/360;
        sec = (angle-(chas*3600)-(min*360))/6;
        return ((chas*10)+min)*100+sec;}
}