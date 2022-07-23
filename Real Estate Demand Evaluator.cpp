#include <iostream>
#include <cstdlib> 
#include <Windows.h>
#include <stdlib.h> 
#include <unistd.h>
#include <time.h> 
#include <vector>
#include <cmath>
#include <fstream>
using namespace std;
class Searching_AVL;
class Evaluator;

#define Maxparking 1800
#define Maxbedroom 1800
#define Maxroom 1800
#define Maxwashroom 1800
#define Maxbalcony 1800
#define Maxfurnish 1800
#define Maxquality 1800
#define Maxh_type 1800
#define MaxsqrFeetsWeight 100
#define MaxmaidRoom 1800
#define Maxbalconies 1800
#define MaxbarbecueArea 1800
#define MaxbuiltInWardRobe 1800
#define MaxchildrenPlayArea 1800
#define MaxchildrenPool 1800
#define MaxkitchenAppliances 1800
#define MaxlobbyInBuilding 1800
#define MaxmaidService 1800
#define MaxpetsAllowed 1800
#define Maxsecurity 1800
#define MaxsharedGym 1800
#define MaxsharedPool 1800
#define Maxstudy 1800
#define MaxviewOfLandMark 1800
#define MaxviewOfWater 1800
#define MaxwalkInCloset 1800
#define someValue 0.124
int cnt = 0;
static int IDENT = 0;
void set_interface();

class weights{
	public:
	double parking;
	double bedroom;
	double room;
	double washroom;
	double furnish;
	double quality;
	double h_type;
	double sqrFeetsWeight;
	
	double maidRoomWeight;
	double balconiesWeight;
	double barbecueAreaWeight;
	double builtInWardRobeWeight;
	double childrenPlayAreaWeight;
	double childrenPoolWeight;
	double kitchenAppliancesWeight;
	double lobbyInBuildingWeight;
	double maidServiceWeight;
	double petsAllowedWeight;
	double securityWeight;
	double sharedGymWeight;
	double sharedPoolWeight;
	double studyWeight;
	double viewOfLandMarkWeight;
	double viewOfWaterWeight;
	double walkInClosetWeight;	
	weights();
};

weights::weights()
{
	parking = 9000;
	bedroom = 9000;
	room = 9000;
	washroom = 9000;
	furnish = 9000;
	quality = 9000;
	h_type = 9000;
	sqrFeetsWeight = 1000;
	maidRoomWeight = 9000;
	balconiesWeight = 9000;
	barbecueAreaWeight = 9000;
	builtInWardRobeWeight = 9000;
	childrenPlayAreaWeight = 9000;
	childrenPoolWeight = 9000;
	kitchenAppliancesWeight = 9000;
	lobbyInBuildingWeight = 9000;
	maidServiceWeight = 9000;
	petsAllowedWeight = 9000;
	securityWeight = 9000;
	sharedGymWeight = 9000;
	sharedPoolWeight = 9000;
	studyWeight = 9000;
	viewOfLandMarkWeight = 9000;
	viewOfWaterWeight = 9000;
	walkInClosetWeight = 9000;
}


class Home{
	string location;
	int propertyID;
	int houseQuality;
	int squareFeets;
	int noOfBedRooms;
	int noOfTotalRooms;
	int noOfWashrooms;
	double longitude, latitude;
	double pricePerSquareFeet;
	long tot_price;
	bool central_ac, maidRoom, balconies, barbecueArea, builtInWardRobe, childrenPlayArea, childrenPool, conceirge, covered_parking;
	bool kitchenAppliances, lobbyInBuilding, maidService, networked, petsAllowed, pvt_garden, pvt_gym, pvt_pool, pvt_jacuzzi, security;
	bool sharedGym, sharedPool, sharedspa, vastu_complaint, study, viewOfLandMark, viewOfWater, walkInCloset, furnished;
	
	public:
		void readAllHomes(vector<Home> &allHome);
		void trainEvaluator(Evaluator &ev, const string place, const vector<Home> & allHome);
		Home();
		Home (bool covered_parking, int propertyID, int houseQuality,
			int squareFeets, int noOfBedRooms, int noOfTotalRooms, int noOfWashrooms, bool furnished,
			bool maidRoom, bool balconies, bool barbecueArea, bool builtInWardRobe, bool childrenPlayArea, bool childrenPool,
			bool kitchenAppliances, bool lobbyInBuilding, bool maidService, bool petsAllowed, bool security, bool sharedGym,
			bool sharedPool, bool study, bool viewOfLandMark, bool viewOfWater, bool walkInCloset);
			
			//setters & getters:
			void setWalkInCloset(bool x){this->walkInCloset = x;}
			bool getWalkInCloset() const{return this->walkInCloset;}	
			void setViewOfWater(bool x){this->viewOfWater = x;}
			bool getViewOfWater() const{return this->viewOfWater;}
			void setViewOfLandMark(bool x){this->viewOfLandMark = x;}
			bool getViewOfLandMark() const{return this->viewOfLandMark;}
			void setStudy(bool x){this->study = x;}
			bool getStudy() const{return this->study;}
			void setSharedPool(bool x){this->sharedPool = x;}
			bool getSharedPool() const{return this->sharedPool;}	
			void setSharedGym(bool x){this->sharedGym = x;}
			bool getSharedGym() const{return this->sharedGym;}
			void setSecurity(bool x){this->security = x;}
			bool getSecurity() const{return this->security;}
			void setBalconies(bool x){this->balconies = x;}
			bool getBalconies() const{return this->balconies;}
			bool getMaidRoom() const{return maidRoom;}
			void setMaidRoom(const bool x){maidRoom = x;}
			bool getBarbecueArea() const{return barbecueArea;}
			void setBarbecueArea(const bool x){barbecueArea = x;}
			bool getBuiltInWardRobe() const{return builtInWardRobe;}
			void setBuiltInWardRobe(const bool x){builtInWardRobe = x;}
			bool getChildrenPlayArea() const{return childrenPlayArea;}
			void setChildrenPlayArea(const bool x){childrenPlayArea = x;}
			bool getChildrenPool() const{return childrenPool;}
			void setChildrenPool(const bool x){childrenPool = x;}
			bool getKitchenAppliances() const{return kitchenAppliances;}
			void setKitchenAppliances(const bool x){kitchenAppliances = x;}
			bool getLobbyInBuilding() const{return lobbyInBuilding;}
			void setLobbyInBuilding(const bool x){lobbyInBuilding = x;}
			bool getMaidService() const{return maidService;}
			void setMaidService(const bool x){maidService = x;}
			bool getPetsAllowed() const{return petsAllowed;}
			void setPetsAllowed(const bool x){petsAllowed = x;}
			void set_totprice(const long price){tot_price = price;}
			long get_totprice()	const{return tot_price;}
			bool getcovered_parking()	const{return covered_parking;}
			void setpropertyIDs(const int x){this->propertyID = x;}
			int getpropertyID()	const{return this->propertyID;}
			void setQuality(int x){this->houseQuality = x;}
			int getQuality()	const{return this->houseQuality;}
			void setsquareFeets(int x){this->squareFeets = x;}
			int getsquareFeets()	const{return this->squareFeets;}
			void setnoOfBedRooms(int x){this->noOfBedRooms = x;}
			int getnoOfBedRooms()	const{return this->noOfBedRooms;}
			void setnoOfTotalRooms(int x){this->noOfTotalRooms = x;}
			int getnoOfTotalRooms()	const{return this->noOfTotalRooms;}
			void setnoOfWashrooms(int x){this->noOfWashrooms = x;}
			int getnoOfWashrooms()	const{return this->noOfWashrooms;}
			void setFurnished(bool x){this->furnished = x;}
			bool getFurnished()	const{return this->furnished;}
			void setpricePerSquareFeet(double x){this->pricePerSquareFeet = x;}
			double getpricePerSquareFeet()	const{return this->pricePerSquareFeet;}
			
			void setlocation(string x){this->location = x;}
			string getlocation()	const{return this->location;}
			
			void print_attributes(const string place1, const string place2)	const;
};

class Node{				
	public:
		Home Property;
		Node *left;
		Node *right;
		int height;
		int key;
		
		Node(const Home tmp, int treeNo){
			Property = tmp;
			left = right = NULL;
			height = 1;
			if(treeNo == 1)
				key = Property.getsquareFeets();
			else if(treeNo == 2)
				key = Property.get_totprice();
			else if(treeNo == 3)
				key = Property.getnoOfTotalRooms();
		}
};

class Searching_AVL{
	Node *root;
	
	public:
		Searching_AVL(){
			root = NULL;
		}
		
		int max(int x, int y){
			return (x > y) ? x : y; 
		}
		
		int getHeight(Node *temp)const{
			if(temp == NULL)
				return 0;
			return temp->height;
		}
		
		int getBalanceFactor(Node *temp){
			return (getHeight(temp->left) - getHeight(temp->right));
		}
				
		Node* leftRotation(Node *temp){
			Node *temp2 = temp->right;
			Node *temp3 = temp2->left;
			
			temp2->left = temp;
			temp->right = temp3;
			
			temp->height = max(getHeight(temp->left), getHeight(temp->right)) + 1;
			temp2->height = max(getHeight(temp->left), getHeight(temp->right)) + 1;
			
			return temp2;
		}
		
		Node* rightRotation(Node *temp){
			
			Node *temp2 = temp->left; 
			Node *temp3 = temp2->right;
			
			temp2->right = temp;
			temp->left = temp3;
			
			temp->height = max(getHeight(temp->left), getHeight(temp->right)) + 1;
			temp2->height = max(getHeight(temp->left), getHeight(temp->right)) + 1;
			
			return temp2;
		}
		
		Node* Insert(Node *temp, int key, Home home, int treeNo){
			if(temp == NULL) 
				return new Node(home, treeNo);
			if(key < temp->key)
				temp->left = Insert(temp->left, key, home, treeNo);  
			else if(key >= temp->key)
				temp->right = Insert(temp->right, key, home, treeNo);


			temp->height = max(getHeight(temp->left), getHeight(temp->right)) + 1;
			
			int blnce = getBalanceFactor(temp);
			
			//RR
			if(blnce < -1 && key > temp->right->key)
				return leftRotation(temp);
			//LL
			if(blnce > 1 && key < temp->left->key)
				return rightRotation(temp);
			
			//RL
			if(blnce < -1 && key < temp->right->key){
				temp->right = rightRotation(temp->right);
				return leftRotation(temp);	
			}
			
			//LR
			if(blnce > 1 && key > temp->left->key){
				temp->left = leftRotation(temp->left);
				return rightRotation(temp);	
			}
			
			return temp;
		}
		
		void InsertNode(Home home, int treeNo){
			if(treeNo == 1)
				root = Insert(root, home.getsquareFeets(), home, treeNo);
			else if(treeNo == 2)
				root = Insert(root, home.get_totprice(), home, treeNo);
			else if(treeNo == 3)
				root = Insert(root, home.getnoOfTotalRooms(), home, treeNo);
			return;
		}
		
		Node* SearchNode(int key, Node *temp){
			if(temp == NULL || temp->key == key)
				return temp;
			if(key < temp->key)
				SearchNode(key, temp->left);
			else
				SearchNode(key, temp->right);
		}
		
		void InOrder(Node *temp, long low_lim, long high_lim)const{  
		    if(temp != NULL){    
		        InOrder(temp->left, low_lim, high_lim);
				if( (temp->Property.get_totprice()>=low_lim) && (temp->Property.get_totprice()<=high_lim) )
					temp->Property.print_attributes("XAB", temp->Property.getlocation());
		        InOrder(temp->right, low_lim, high_lim);  
		    }  
		}
		
		void callInorder_disp(long low_lim, long high_lim){
			cout << endl<< endl<< "The property between your range is(according to the input sequence): "<< endl;
			InOrder(root, low_lim, high_lim);
			cout << endl << endl;
		}
};

class Evaluator{
	double ev_pts;			
	Node *Real_Estate;
	weights myWeights;
	
	void UpdateWeights()
	{
		myWeights.parking = change_weights(Maxparking);
		myWeights.bedroom = change_weights(Maxbedroom);
		myWeights.room = change_weights(Maxroom);
		myWeights.washroom = change_weights(Maxwashroom);
		myWeights.balconiesWeight = change_weights(Maxbalcony);
		myWeights.furnish = change_weights(Maxfurnish);
		myWeights.quality = change_weights(Maxquality);
		myWeights.h_type = change_weights(Maxh_type);
		myWeights.sqrFeetsWeight = change_weights(MaxsqrFeetsWeight);
		
		myWeights.maidRoomWeight = change_weights(MaxmaidRoom);
		myWeights.balconiesWeight = change_weights(Maxbalconies);
		myWeights.barbecueAreaWeight = change_weights(MaxbarbecueArea);
		myWeights.builtInWardRobeWeight = change_weights(MaxbuiltInWardRobe);
		myWeights.childrenPlayAreaWeight = change_weights(MaxchildrenPlayArea);
		myWeights.childrenPoolWeight = change_weights(MaxchildrenPool);
		myWeights.kitchenAppliancesWeight = change_weights(MaxkitchenAppliances);
		myWeights.lobbyInBuildingWeight = change_weights(MaxlobbyInBuilding);
		myWeights.maidServiceWeight = change_weights(MaxmaidService);
		myWeights.petsAllowedWeight = change_weights(MaxpetsAllowed);
		myWeights.securityWeight = change_weights(Maxsecurity);
		myWeights.sharedGymWeight = change_weights(MaxsharedGym);
		myWeights.sharedPoolWeight = change_weights(MaxsharedPool);
		myWeights.studyWeight = change_weights(Maxstudy);
		myWeights.viewOfLandMarkWeight = change_weights(MaxviewOfLandMark);
		myWeights.viewOfWaterWeight = change_weights(MaxviewOfWater);
		myWeights.walkInClosetWeight = change_weights(MaxwalkInCloset);
	}
	
	public:
		Evaluator(){
			Real_Estate = NULL;	
			ev_pts = 0;
		}
		
		Evaluator(Node *temp);
		
		float find_accuracy(long predicted, long expected);
		double change_weights(double limitw);
		
		double getevaluation_persqft()	const{return ev_pts;}
		void assign_totprice();
		void covered_parking_pts();
		void houseQuality_pts();
		void squareFeets_pts();
		void noOfBedRooms_pts();
		void noOfTotalRooms_pts();
		void noOfWashrooms_pts();
		void noOfBalconies_pts();
		void furnished_pts();
		void Evaluation();
		void train(vector<Home> inputValues, vector<long> targetValues);
		void setHome(Node *temp);
		
		void maidRoom();
		void barbecueArea();
		void builtInWardRobe();
		void childrenPlayArea();
		void childrenPool();
		void kitchenAppliances();
		void lobbyInBuilding();
		void maidService();
		void petsAllowed();
		void security();
		void sharedGym();
		void sharedPool();
		void study();
		void viewOfLandMark();
		void viewOfWater();
		void walkInCloset();
		
		long totPriceJumeirah();
		long totPriceGreensGreenAndDIFC();
		long totDowntownDubai();
		void printWeights()
		{
			if(cnt == 8000){
				cout<< ". ";
				cnt = 0;
			}
			cout<<myWeights.parking<<endl;
			cout<<myWeights.bedroom<<endl;
			cout<<myWeights.room<<endl;
			cout<<myWeights.washroom<<endl;
			cout<<myWeights.balconiesWeight<<endl;
			cout<<myWeights.furnish<<endl;
			cout<<myWeights.quality<<endl;
			cout<<myWeights.h_type<<endl;
			cout<<myWeights.sqrFeetsWeight<<endl;
		}
};

Evaluator::Evaluator(Node *temp){
	ev_pts = 0;
	Real_Estate = temp; 
}

double Evaluator :: change_weights(double limitw){
	return (static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * limitw + 1;
}

void Evaluator::setHome(Node *temp)
{
	ev_pts = 0;
	Real_Estate = temp;
}

void Evaluator::train(vector<Home> inputValues, vector<long> targetValues){
	bool keepRunning = true;
	long cost = 0;
	vector<long> gotValues;
	cout<< "Please wait! The system is evaluating the price ";
	sleep(1);
	for(int iter = 0; iter<3; iter++){
		cout<< ". ";
		sleep(1);
	}
	while(keepRunning){
		keepRunning = false;
		gotValues.clear();
		for(int i = 0; i < inputValues.size(); i++)
		{
			Node temp(inputValues[i], 0);
			this->setHome(&temp);
			this->Evaluation();
			this->assign_totprice();
			gotValues.push_back(temp.Property.get_totprice());
		}
		cost = 0;
		for(int i = 0 ; i< targetValues.size(); i++){
			cost += abs((gotValues[i] - targetValues[i]));
		}
		cost /= targetValues.size();
		if(cost > 150000)
		{
			cnt+=1;
			keepRunning = true;
			UpdateWeights();
		}
	}
}

long sigMoid(double x){					//function of sigmoid for training
	return 1/(1+exp(-x));
}

void Evaluator::assign_totprice(){		//assigning total price of the hous which has to be predicted
	long totprice = 0;
	if(Real_Estate->Property.getlocation() == "Jumeirah") totprice = totPriceJumeirah();
	else if(Real_Estate->Property.getlocation() == "Green" || Real_Estate->Property.getlocation() == "DIFC")
		totprice = totPriceGreensGreenAndDIFC();
	else if(Real_Estate->Property.getlocation() == "Dubai")	totprice = totDowntownDubai();
	else return;
	Real_Estate->Property.set_totprice(totprice);	
}

long Evaluator::totPriceJumeirah()
{
	return log(ev_pts)*sqrt(Real_Estate->Property.getsquareFeets())*7500;
}

long Evaluator::totDowntownDubai()
{
	return ev_pts*sqrt(Real_Estate->Property.getsquareFeets());
}

long Evaluator::totPriceGreensGreenAndDIFC()
{
	return ev_pts*sqrt(Real_Estate->Property.getsquareFeets());
}

void Evaluator::Evaluation(){
	ev_pts = 0;
	covered_parking_pts();
	houseQuality_pts();
	noOfBedRooms_pts();
	noOfTotalRooms_pts();
	noOfWashrooms_pts();
	noOfBalconies_pts();
	furnished_pts();
	maidRoom();
	barbecueArea();
	builtInWardRobe();
	childrenPlayArea();
	childrenPool();
	kitchenAppliances();
	lobbyInBuilding();
	maidService();
	petsAllowed();
	security();
	sharedGym();
	sharedPool();
	study();
	viewOfLandMark();
	viewOfWater();
	walkInCloset();
}

void Evaluator::maidRoom(){
	this->ev_pts += Real_Estate->Property.getMaidRoom()*myWeights.maidRoomWeight;
}

void Evaluator::barbecueArea(){
	this->ev_pts += Real_Estate->Property.getBarbecueArea()*myWeights.barbecueAreaWeight;
}

void Evaluator::builtInWardRobe(){
	this->ev_pts += Real_Estate->Property.getBuiltInWardRobe()*myWeights.builtInWardRobeWeight;
}

void Evaluator::childrenPlayArea(){
	this->ev_pts += Real_Estate->Property.getChildrenPlayArea()*myWeights.childrenPlayAreaWeight;
}

void Evaluator::childrenPool(){
	this->ev_pts += Real_Estate->Property.getChildrenPool()*myWeights.childrenPoolWeight;
}

void Evaluator::kitchenAppliances(){
	this->ev_pts += Real_Estate->Property.getKitchenAppliances()*myWeights.kitchenAppliancesWeight;
}

void Evaluator::lobbyInBuilding(){
	this->ev_pts += Real_Estate->Property.getLobbyInBuilding()*myWeights.lobbyInBuildingWeight;
}

void Evaluator::maidService(){
	this->ev_pts += Real_Estate->Property.getMaidService()*myWeights.maidServiceWeight;
}

void Evaluator::petsAllowed(){
	this->ev_pts += Real_Estate->Property.getPetsAllowed()*myWeights.petsAllowedWeight;
}

void Evaluator::security(){
	this->ev_pts += Real_Estate->Property.getSecurity()*myWeights.securityWeight;
}

void Evaluator::sharedGym(){
	this->ev_pts += Real_Estate->Property.getSharedGym()*myWeights.sharedGymWeight;
}

void Evaluator::sharedPool(){
	this->ev_pts += Real_Estate->Property.getSharedPool()*myWeights.sharedPoolWeight;
}

void Evaluator::study(){
	this->ev_pts += Real_Estate->Property.getStudy()*myWeights.studyWeight;
}

void Evaluator::viewOfLandMark(){
	this->ev_pts += Real_Estate->Property.getViewOfLandMark()*myWeights.viewOfLandMarkWeight;
}

void Evaluator::viewOfWater(){
	this->ev_pts += Real_Estate->Property.getViewOfWater()*myWeights.viewOfWaterWeight;
}

void Evaluator::walkInCloset(){
	this->ev_pts += Real_Estate->Property.getWalkInCloset()*myWeights.walkInClosetWeight;
}

void Evaluator::covered_parking_pts(){
	if(Real_Estate->Property.getcovered_parking() == true)
		this->ev_pts += myWeights.parking;
}
		
void Evaluator::houseQuality_pts(){
	int num = ( Real_Estate->Property.getQuality() )*myWeights.quality;
	ev_pts+= num;
}
	
void Evaluator::squareFeets_pts(){
	int num = Real_Estate->Property.getsquareFeets();
	num = num*myWeights.sqrFeetsWeight;
	ev_pts+= num;
}
		
void Evaluator::noOfBedRooms_pts(){
	int num = Real_Estate->Property.getnoOfBedRooms();
	num *= myWeights.room  * 50;
	ev_pts+= num;
}
		
void Evaluator::noOfTotalRooms_pts(){
	int num = Real_Estate->Property.getnoOfTotalRooms();
	num *= myWeights.bedroom  * 50;
	ev_pts+= num;
}
		
void Evaluator::noOfWashrooms_pts(){
	int num = Real_Estate->Property.getnoOfWashrooms();
	num *= myWeights.washroom * 50;
	ev_pts+= num;
}
		
void Evaluator::noOfBalconies_pts(){
	int num = Real_Estate->Property.getBalconies();
	num *= myWeights.balconiesWeight;
	ev_pts+= num;
}
		
void Evaluator::furnished_pts(){
	if( Real_Estate->Property.getFurnished() == true)
		ev_pts+= myWeights.furnish;
}

Home::Home(){
	this->latitude = 0;
	this->longitude = 0;
	propertyID = 0;
	houseQuality = 1;
	squareFeets = 0;
	noOfBedRooms = 0;
	noOfTotalRooms = 0;
	noOfWashrooms = 0;
	furnished = false;
	pricePerSquareFeet = 0;
	this->maidRoom = false;
	this->balconies = false;
	this->barbecueArea = false;
	this->builtInWardRobe = false;
	this->childrenPlayArea = false;
	this->childrenPool = false;
	this->kitchenAppliances = false;
	this->lobbyInBuilding = false;
	this->maidService = false;
	this->petsAllowed = false;
	this->security = false;
	this->sharedGym = false;
	this->sharedPool = false;
	this->study = false;
	this->viewOfLandMark = false;
	this->viewOfWater = false;
	this->walkInCloset = false;
}

Home::Home (bool covered_parking, int propertyID,
	int houseQuality, int squareFeets, int noOfBedRooms,
	int noOfTotalRooms, int noOfWashrooms, bool furnished, bool maidRoom, bool balconies, bool barbecueArea,
	bool builtInWardRobe, bool childrenPlayArea, bool childrenPool, bool kitchenAppliances, bool lobbyInBuilding, bool maidService, bool petsAllowed,
	bool security, bool sharedGym, bool sharedPool, bool study, bool viewOfLandMark, bool viewOfWater, bool walkInCloset)
	{
		this->covered_parking = covered_parking;
		this->propertyID = propertyID;
		this->houseQuality = houseQuality;
		this->squareFeets = squareFeets;
		this->noOfBedRooms = noOfBedRooms;
		this->noOfTotalRooms = noOfTotalRooms;
		this->noOfWashrooms = noOfWashrooms;
		this->furnished = furnished;
		this->pricePerSquareFeet = 0;
		this->tot_price = 0;
		
		this->maidRoom = maidRoom;
		this->balconies = balconies;
		this->barbecueArea = barbecueArea;
		this->builtInWardRobe = builtInWardRobe;
		this->childrenPlayArea = childrenPlayArea;
		this->childrenPool = childrenPool;
		this->kitchenAppliances = kitchenAppliances;
		this->lobbyInBuilding = lobbyInBuilding;
		this->maidService = maidService;
		this->petsAllowed = petsAllowed;
		this->security = security;
		this->sharedGym = sharedGym;
		this->sharedPool = sharedPool;
		this->study = study;
		this->viewOfLandMark = viewOfLandMark;
		this->viewOfWater = viewOfWater;
		this->walkInCloset = walkInCloset;
}

void Home :: print_attributes(const string place1, const string place2)	const{
	cout<< "ATTRIBUTES:"<< propertyID << ' ' << place2 << ' ' << squareFeets << ' ' << ' ' << noOfBedRooms << ' '
		<< noOfWashrooms << ' ' << houseQuality << ' ' << maidRoom << ' ' << furnished << ' ' << balconies << ' '
		<< barbecueArea << ' ' << builtInWardRobe << ' ' << central_ac 
		<< ' ' << childrenPlayArea << ' ' << childrenPool << ' ' << conceirge << ' ' << covered_parking << ' ' << kitchenAppliances << ' ' << lobbyInBuilding 
		<< ' ' << maidService << ' ' << networked << ' ' << petsAllowed << ' ' << pvt_garden << ' ' << pvt_gym << ' ' << pvt_pool << ' ' << pvt_jacuzzi << ' ' << security 
		<< ' ' << sharedGym << ' ' << sharedPool << ' ' << sharedspa << ' ' << study << ' ' << vastu_complaint << ' ' << viewOfLandMark << ' ' << viewOfWater << ' ' << walkInCloset << endl;	
}

void Home::readAllHomes(vector<Home> &allHome){		//2nd name of the place is coming here since it's unique for every property
	ifstream fin;
	float accuracy;								//attribute to give the accuracy of the prediction
	
	cout<< endl;
	fin.open("properties_data.txt");
	if(!fin.is_open()){
		cout << "Error while opening file!"<< endl;
		exit(1);
	}
	
	int itedn = 0;
	while( (!fin.eof() ) && ((itedn)!= 900) ){
		fflush(stdin);
		Home temp;
		fflush(stdin);
		string loc1, loc2;
		itedn++;
		
		fin >> propertyID;		
		fin >> loc1;
		fin >> loc2;
		
		temp.location = loc2;
		fin >> temp.latitude >> temp.longitude >> temp.tot_price >> temp.squareFeets >> temp.pricePerSquareFeet
			>> temp.noOfBedRooms >> temp.noOfWashrooms>> temp.houseQuality >> temp.maidRoom >> temp.furnished
			>> temp.balconies >> temp.barbecueArea >> temp.builtInWardRobe >> temp.central_ac >> temp.childrenPlayArea
			>> temp.childrenPool >> temp.conceirge >> temp.covered_parking >> temp.kitchenAppliances >> temp.lobbyInBuilding 
			>> temp.maidService >> temp.networked >> temp.petsAllowed >> temp.pvt_garden >> temp.pvt_gym >> temp.pvt_pool
			>> temp.pvt_jacuzzi >> temp.security >> temp.sharedGym >> temp.sharedPool >> temp.sharedspa >> temp.study
			>> temp.vastu_complaint >> temp.viewOfLandMark >> temp.viewOfWater >> temp.walkInCloset;
		
		allHome.push_back(temp);
	}

	fin.close();
}

void Home :: trainEvaluator(Evaluator &ev, const string place, const vector<Home> & allHome){		//2nd name of the place is coming here since it's unique for every property
	int iterr = 0;
	vector<Home> for_training;
	float accuracy;								//attribute to give the accuracy of the prediction
	
	cout<< endl;
	
	int itedn = 0;
	for(int i = 0; i< allHome.size(); i++){
		fflush(stdin);
		Home temp = allHome[i];
		fflush(stdin);
		
		if(temp.location == place && (iterr)<4){
			for_training.push_back(temp);
			iterr++;
		}
	}
	
	if(iterr <= 1){
		cout<< endl<< "WARNING: The System hadn't find enough data to get trained for the prediction of the specified House!"<< endl;
		return;
	}
	
	vector<long int> prices;
	for(int lp = 0; lp<iterr; lp++){
		const Home *temp = 	&for_training[lp];
		prices.push_back((temp->get_totprice()));
	}

	Node n3(for_training[3],0);
	
	long expected_price = prices[3];
	prices.pop_back();
	for_training.pop_back();	
	
	ev.train(for_training, prices);

	ev.setHome(&n3);
	ev.Evaluation();
	ev.assign_totprice();
	cout<< endl<< endl<< "EVALUATED PRICE: " << n3.Property.get_totprice() << " USD" << endl;
	accuracy = ev.find_accuracy(n3.Property.get_totprice(), expected_price);
	
	cout<< "WITH ACCURACY LEVEL: "<< accuracy << " %" << endl<< endl;
	system("PAUSE");
}


//function to find the accuracy of the prediction:
float Evaluator :: find_accuracy(const long predicted, const long expected){
	float accuracy = (predicted * 100 ) / expected;
		if(accuracy > 100){
			accuracy -= 100;
			accuracy = 100 - accuracy;
		}
	return accuracy;
}

//Implementation of Searching_AVL for searching:

//SCOPE OF MAIN:
int main(){
	srand(time(0));
	
	bool x;
	int num_predictions, lp2 = 0, xint;
	long lower_lim, upper_lim;
	Searching_AVL Tree_sqfts, Tree_totrooms, Tree_totprice;
	int choice = 1;
	//Each tree is created for different attributes based upon choice number
	
	set_interface();
	
	cout<< endl<< "Enter the number of properties you wanna predict: ";
	cin>> num_predictions;
	
	Home temp_test;
	vector<Home> allHome;
	temp_test.readAllHomes(allHome);
	
	while(lp2++ != num_predictions){
		Home house_predict;
		string location;
		cout<< endl<< "PROPERTY-"<< lp2<< ": "<< endl;
		cout<< "Enter the location of the property: ";
		cin>> location;
		house_predict.setlocation(location);
		
		cout<< "Walk-in Closet(1/0): ";
		cin>> x;
		house_predict.setWalkInCloset(x);
		
		cout<< "View of Water(1/0): ";
		cin>> x;
		house_predict.setViewOfWater(x);
		
		cout<< "View of LandMark(1/0): ";
		cin>> x;
		house_predict.setViewOfLandMark(x);
		
		cout<< "Study Room(1/0): ";
		cin>> x;
		house_predict.setStudy(x);
		
		cout<< "Shared-Pool(1/0): ";
		cin>> x;
		house_predict.setSharedPool(x);
		
		cout<< "Shared-Gym(1/0): ";
		cin>> x;
		house_predict.setSharedGym(x);
		
		cout<< "Security(1/0): ";
		cin>> x;
		house_predict.setSecurity(x);
		
		cout<< "Balconies(1/0): ";
		cin>> x;
		house_predict.setBalconies(x);
		
		cout<< "Maid-Rooms(1/0): ";
		cin>> x;
		house_predict.setMaidRoom( x);
	
		cout<< "Barbecue Area(1/0): ";
		cin>> x;
		house_predict.setBarbecueArea( x);
		
		cout<< "Built-in Wardrobe(1/0): ";
		cin>> x;
		house_predict.setBuiltInWardRobe( x);
	
		cout<< "Children-Play Area(1/0): ";
		cin>> x;
		house_predict.setChildrenPlayArea( x);
		
		cout<< "Children Pool(1/0): ";
		cin>> x;
		house_predict.setChildrenPool( x);
		
		cout<< "Kitchen-appliances(1/0): ";
		cin>> x;	
		house_predict.setKitchenAppliances( x);
		
		cout<< "Lobby in Building(1/0): ";
		cin>> x;
		house_predict.setLobbyInBuilding( x);
	
		cout<< "Maid Service(1/0): ";
		cin>> x;
		house_predict.setMaidService( x);
		
		cout<< "Pets Allowed(1/0): ";
		cin>> x;
		house_predict.setPetsAllowed(x);
		house_predict.setpropertyIDs(IDENT++);
		
		cout<< "Quality(1/2/3): ";
		cin>> xint;
		house_predict.setQuality(xint);
		
		cout<< "Area in Squarefeets: ";
		cin>> xint;
		house_predict.setsquareFeets(xint);
		
		cout<< "Number of Bedrooms: ";
		cin>> xint;
		house_predict.setnoOfBedRooms(xint);
		house_predict.setnoOfTotalRooms(xint);
		
		cout<< "Number of Washrooms: ";
		cin>> xint;
		house_predict.setnoOfWashrooms(xint);
		
		cout<< "Furnished(1/0): ";
		cin>> x;
		house_predict.setFurnished(x);
		
		Node *temp_node =  new Node(house_predict, choice);
		Evaluator evaluation;
		temp_test.trainEvaluator(evaluation, location, allHome);
		evaluation.setHome(temp_node);
		evaluation.Evaluation();
		evaluation.assign_totprice();
		long pred_price = temp_node->Property.get_totprice();
		house_predict.set_totprice(pred_price);
		house_predict.print_attributes("XCA", location);

		//Addition of nodes in AVL-Tree:
		Tree_sqfts.InsertNode(house_predict, choice);				
		Tree_totprice.InsertNode(house_predict, choice+1);
		Tree_totrooms.InsertNode(house_predict, choice+2);
	}
	
	cout<< endl<< endl<< "Enter your range to get a property from the already predicted ones: "<< endl;
	cout<< "Lower Limit Price: ";
	cin>> lower_lim;
	cout<< "Upper Limit Price: ";
	cin>> upper_lim;
	Tree_totprice.callInorder_disp(lower_lim, upper_lim); // SUGGESTION BETWEEN THE RANGE
	cout<< endl<< endl<< endl;				//Predicted prices will be printed between the desired range
	
	system("PAUSE");
	return 0;
}
//SCOPE OF MAIN ENDED

//function to set backgrounds & foregrounds:
void set_interface(){
	system("COLOR 3F");
	cout<< "\t\t\t\t\t\t\t\tREAL ESTATE DEMAND EVALUATOR" << endl << endl << endl << endl << endl;		//jo bhi represent krrha hou apne hisaab se adjust krle \t's ko
	system("PAUSE");
	cout<< endl<< "Please Wait! You're now proceeding towards the evaluation";
	for(int cntl = 0; cntl<3; cntl++){
		sleep(1);
		cout<< " .";
	}
	system("cls");
}
