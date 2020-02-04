#include <windows.h>
#include "CLASS.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
	cout << "Hi world!" << endl;

	Second player;
    //char *buf;
		int n;
		cout << "Press 1 to add player or 2 to read file" << endl;//!!!
		cin >> n;
		if (n == 1) {
            ofstream fs("football.dat", ios::binary | ios::app);

			SetConsoleCP(1251);

            player.set_name();
            player.set_club();
            player.set_PastSpec();
            player.specNow.set_specialization();
            player.specNow.set_nearby_Specialization();
            player.specNow.getSelection.set_criteria();
            player.lvl.set_criteria_ready_lvl();
            player.specNow.getSelection.set_threshold();
            player.specNow.getSelection.set_value();
            player.lvl.set_value_ready_lvl();
            fs.write((char*)&player,sizeof(Second));
            fs.close();
		}
        ////////////////////////
////////////////////////
////////////////////////
////////////////////////
        ////////////////////////
		if (n == 2) {
            ifstream fs("football.dat", ios::binary);
            fs.clear();
            fs.seekg(0, ios_base::beg);
            while (!fs.eof()) {
                fs.read((char*)&player.name,sizeof(player.name));
                cout << player.name << endl;
                fs.read((char*)&player.club,sizeof(player.club));
                cout << player.club << endl;
                for (int i=0;i<4;i++){
                    fs.read((char*)&player.arr_specPast[i],sizeof(player.arr_specPast[i]));
                    cout << player.arr_specPast[i] << endl;
                }
                fs.read((char*)&player.specNow.specialization,sizeof(player.specNow.specialization));
                cout << player.specNow.specialization << endl;
                //fs.read((char*)&player.specNow.specialization,sizeof(player.specNow.specialization));
                //cout << player.specNow.specialization << endl;
                fs.read((char*)&player.specNow.nearby_Spec,sizeof(player.specNow.nearby_Spec));
                cout << player.specNow.nearby_Spec << endl;
                for (int i=0;i<4;i++){
                    fs.read((char*)&player.specNow.getSelection.criteria[i],sizeof(player.specNow.getSelection.criteria[i]));
                    cout << player.specNow.getSelection.criteria[i] << endl;
                }
                //
                for (int i=0;i<4;i++){
                    fs.read((char*)&player.specNow.getSelection.threshold[i],sizeof(player.specNow.getSelection.threshold[i]));
                    cout << player.specNow.getSelection.threshold[i] << endl;
                }

                for (int i=0;i<4;i++){
                    fs.read((char*)&player.specNow.getSelection.value[i],sizeof(player.specNow.getSelection.value[i]));
                    cout << player.specNow.getSelection.value[i] << endl;
                }
                for (int i=0;i<4;i++){
                    fs.read((char*)&player.lvl.criteria_ready_lvl[i],sizeof(player.lvl.criteria_ready_lvl[i]));
                    cout << player.lvl.criteria_ready_lvl[i] << endl;
                }

                for (int i=0;i<4;i++){
                    fs.read((char*)&player.lvl.value_ready_lvl[i],sizeof(player.lvl.value_ready_lvl[i]));
                    cout << player.lvl.value_ready_lvl[i] << endl;
                }
                //fs >> player.name;
                //fs.read((char*)&player,sizeof(Second));
               // cout << player.get_name();
            }
            fs.close();
		}

    return 0;
}
