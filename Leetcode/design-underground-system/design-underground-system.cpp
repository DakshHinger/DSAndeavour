class UndergroundSystem {
    map<int,pair<string,int>> mpp;
    map<string,vector<int>> avgt;
public:
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        mpp[id]={stationName,t};
    }
    
    void checkOut(int id, string stationName, int t) {
        auto it= mpp[id];
        avgt[it.first +" "+ stationName].push_back(t-it.second);
    }
    
    double getAverageTime(string startStation, string endStation) {
        auto it = avgt[startStation+" "+endStation];
        int sum=0;
        for(auto x:it){
            sum+=x;
        }
        return 1.0*sum/it.size();
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */