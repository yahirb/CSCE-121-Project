
#include "std_lib_facilities_4.h"
using namespace std;

struct highScore {
	int score;
	string name;
	highScore();
	highScore(string nm, int sc);

	bool operator<(const highScore& str) const
    {
        return (score < str.score);
    }

};


highScore::highScore(string nm, int sc){
	score = sc;
	name = nm;
}
highScore::highScore(){
	score = 0;
	name = " ";
}


ostream& operator<<(ostream& out, const highScore& hs)
{
   return out << hs.name << "      " << hs.score;
}





 
    


// ===================================
// Scores List 
// ===================================


class scoresList
{
	vector<highScore> v;
	string scores_list;
	int level;
public:
	scoresList();
	scoresList(highScore hs, int lvl);
  scoresList(int lvl);
	//~scores();
	void addHighScore(highScore hs);
	void writeToFile();
	void readFile();
	void gameLevel(int lvl);
  vector<highScore> getVector() {return v;}

};

void scoresList::gameLevel(int lvl){
	switch (lvl) {
        case 3: 
        	scores_list = "scores_list_level3.txt";
        	break;
        case 4: 
        	scores_list = "scores_list_level4.txt";
        	break;
        case 5: 
        	scores_list = "scores_list_level5.txt";
        	break;
        case 6: 
        	scores_list = "scores_list_level6.txt";
        	break;
        case 7: 
        	scores_list = "scores_list_level7.txt";
        	break;
    }
}


// CONSTRUCTOR
scoresList::scoresList(){
}


scoresList::scoresList(highScore hs, int lvl){
	v.push_back(hs);
	level = lvl;
}

// CONSTRUCTOR
scoresList::scoresList(int lvl){
  level = lvl;
}

void scoresList::addHighScore(highScore hs){
	v.push_back(hs);
}

void scoresList::writeToFile(){
	gameLevel(level);
	//cout << scores_list << endl;

	sort(v.rbegin(), v.rend());
	ofstream out;
  	out.open (scores_list);
  	for(int i = 0; i < v.size(); i++){
  		out << v[i] << endl;
      //cout << v[i] << endl;
  	}
  	out.close();
}

void scoresList::readFile(){
	gameLevel(level);
	vector<highScore> vec;
	ifstream in;
  	in.open (scores_list);
  	string line;
  	string nm;
  	int sc;
  	while (getline (in,line))
    {
      istringstream is_line(line);
      is_line >> nm >> sc;
      highScore temp(nm, sc);
      vec.push_back(temp);
      //cout << line << endl;
    }
  	in.close();
  	v = vec;
}

