/*
Assumptions made:
    1. The number of containers present in the truck is equal to the number of varieties of beers given.
	2. Time to complete the journey will be given.
	3. The temperature reading of each container will be provided at regular intervals of the journey.
*/


#include<iostream>
#include<vector>

using namespace std;

int main() {
    int numberOfBeers = 6;  //number of varieties of beers(Given in problem statement as 6)

    //maximum and minimum temperature for 5 types of beers is given in problem statement, and assuming for 6th type as 1-4(degree celcius)
    vector<pair<int,int> > extremeLimits;
    extremeLimits.push_back(make_pair(4, 6));
    extremeLimits.push_back(make_pair(5, 6));
    extremeLimits.push_back(make_pair(4, 7));
    extremeLimits.push_back(make_pair(6, 8));
    extremeLimits.push_back(make_pair(3, 5));
    extremeLimits.push_back(make_pair(1, 4));
    //Uncomment below code if in case we want user to give temperature ranges for each type of beer
    /*
    cout<<"Enter the range of temperatures for each type of beer respectively:\n";
    for(int i=0;i<n;i++)
    {
    	cout<<"\tMinimum temperature for beer "<< i+1 << ": ";
        cin>>extremeLimits[i].first;
        cout<<"\tMaximum temperature for beer "<< i+1 << ": ";
        cin>>extremeLimits[i].second;
	}
    */
    int numOfSeconds; //number of seconds truck travels from start to destination
    cout<<"Enter the duration of journey(in seconds) from start to end: ";
    cin>>numOfSeconds;
    cout<<"\nTruck on it's way.\n\n";
    int currentTime=1; //Time spent in journey till now
    int checkingInterval=1;//Interval at which temperatures are checked periodically
    while(currentTime < numOfSeconds) {
        cout<<"\n-->> At second "<<currentTime<<":\n";
        //At each second, reading of the each temperature sensors is taken as input
        cout<<"Enter the present reading of each temperature sensor of the containers(in form of array, separated by space): ";

        int currentTemperatureAll[numberOfBeers];
        bool allContainersGood=true; //to check whether all containers are in good temperature range
        for(int i=0;i<numberOfBeers;i++)
            cin>>currentTemperatureAll[i];

        vector<int> temperatureLess, temperatureMore;
        for(int i=0;i<numberOfBeers;i++) {
            if(currentTemperatureAll[i]<extremeLimits[i].first) {
                temperatureLess.push_back(i + 1);
                allContainersGood=false; //if lower temperature than the required temperature found.
            }
            else if(currentTemperatureAll[i]>extremeLimits[i].second) {
                temperatureMore.push_back(i + 1);
                allContainersGood=false; //if higher temperature than the required temperature found.
            }
        }

        if(allContainersGood==true)
            cout<<"\tAll Beers are safe till now.\n";
        else {
            if(temperatureLess.size() == 0)
                cout<<"\tNo container has lower temperature than the minimum temperature of respective containers.\n";
            else {
                cout<<"\tFollowing containers have lower temperature than their minimum acceptable values:\n";
                for(int i=0;i<temperatureLess.size();i++)
                    cout<<"\t\t"<<i+1<<". Container number "<<temperatureLess[i]<<"\n";
            }
            cout<<"\n";

            if(temperatureMore.size() == 0)
                cout<<"\tNo container has higher temperature than the maximum temperature required by respective containers.\n";
            else {
                cout<<"\tFollowing containers have higher temperature than their maximum acceptable values:\n";
                for(int i=0;i<temperatureMore.size();i++)
                    cout<<"\t\t"<<i+1<<". Container number "<<temperatureMore[i]<<"\n";
            }
        }

        currentTime += checkingInterval;
    }

    cout << "\nTruck reached Destination: \n\n";
    return 0;
}
