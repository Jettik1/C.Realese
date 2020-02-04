#include <iostream>
#include <fstream>
#include <string>


#ifndef CLASS_H_INCLUDED
#define CLASS_H_INCLUDED

using namespace std;

class Second;

class Selection_criteria {
    public:
	char criteria[4][128];
	int value[4];//Ценнсоть
	int threshold[4];//Допустимый порог
public:
	void set_criteria() {
	    cout << "Enter criteria's for :" << endl;
		for (int i = 0; i < 4; i++) {
			cout << i + 1 << ". ";
			//cin.ignore();
			cin.getline((char*)&criteria+(i*128),128);
		}
	}
	void set_threshold() {
        cout << "Enter threshold for : " << endl;
		for (int i = 0; i < 4; i++) {
			cout << i + 1 << ". ";
			//cin.ignore();
			cin >> threshold[i];
//			cin.ignore();
		}
	}
	void set_value() {
        cout << "Enter value for : " << endl;
		for (int i = 0; i < 4; i++) {
			cout << i + 1 << ". ";
			//cin.ignore();
			cin >> value[i];
		}
	}
	/*string get_criteria(){
		for(int i=0;i<4;i++){
			return criteria[i];
		}
	}*/
//	char get_criteria_for_i_j(int i,int j) {
//		return criteria[i][j];
//	}
//	int get_threshold_for_i(int i) {
//		return threshold[i];
//	}
//	int get_value_for_i(int i) {
//		return value[i];
//	}
};


class First {
    public:
	char specialization[128];
	char nearby_Spec[128];
public:
	Selection_criteria getSelection;

	void set_specialization() {
	    cout << "Enter specialization of player : ";
	    //cin.ignore();
		cin.getline(specialization,128);
	}

	void set_nearby_Specialization() {
        cout << "Enter nearby specialization of player : ";
        //cin.ignore();
		cin.getline(nearby_Spec,128);
	}

//	char get_specialization() {
//		return specialization;
//	}
//
//	char get_nearby_Specialization() {
//		return nearby_Spec;
//	}
};


class Ready_lvl {
    public:
	char criteria_ready_lvl[4][128];
	int value_ready_lvl[4];
public:
	void set_criteria_ready_lvl() {
		cout << "Enter criteria ready lvl for : " << endl;
		for (int i = 0; i < 4; i++) {
			cout << i + 1 << ". ";
			//cin.ignore();
			cin.getline((char*)&criteria_ready_lvl+(i*128),128);
		}
	}
	void set_value_ready_lvl() {
		cout << "Enter value ready lvl for : " << endl;
		for (int i = 0; i < 4; i++) {
			cout << i + 1 << ". ";
			//cin.ignore();
			cin >> value_ready_lvl[i];//Можно через присваивание
		}
	}
//	int get_value_ready_lvl_for_i(int i) {
//		return value_ready_lvl[i];
//	}
};


class Second {
    public:
	char name[128];
	char club[128];

	char arr_specPast[4][128];
	/*for (int i=0; i<row; i++){
		cout << i+1 <
		< ". ";           //диалог программы с пользователем
		getline(cin,arr_specPast[i]);//чтение строки с клавиатуры
	} */

public:
	First specNow;
	Ready_lvl lvl;
	void set_name() {
	    cout << "Enter name of player: ";
	    cin.ignore();
		cin.getline((char*)&name,128);

	}
	void set_club() {
		cout << "Enter club of player: ";
		//cin.ignore();
		cin.getline((char*)&club,128);
	}
	char get_name() {
		return name[128];
	}
	char get_club() {
		return club[128];
		}
	void set_PastSpec() {
	    cout << "Enter 4 Past specialization's of player : ";
		for (int i = 0; i < 4; i++) {
			cout << i + 1 << ". ";           //диалог программы с пользователем
			//cin.ignore();
			cin.getline((char*)&arr_specPast+(i*128),128);
		}
	}
//	char get_PastSpec(int i) {
//		return arr_specPast;
//	}


};



#endif // CLASS_H_INCLUDED
