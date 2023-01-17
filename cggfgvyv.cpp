#include <iostream>

using namespace std;


struct TUser
{
	string name;
	string login;
	string password;
	int id;
	int age;
	bool car;
};


void printUser (TUser Us) {
	cout << "\n\nname: " << Us.name << endl;
	cout << "login: " << Us.login << endl;
	cout << "password: " << Us.password << endl;
	cout << "id: " << Us.id << endl;
	cout << "age: " << Us.age << endl;
	cout << "car: " << Us.car << endl;
}


void bithday(TUser &Us) {
	cout << "Happy birthday, " << Us.name;
}


void changePass(TUser &Us) {
	string old_pass;
	cout << "Enter old password: ";
	cin >> old_pass;

	if (old_pass == Us.password) {
		cout << "Enter new password: ";
		cin >> Us.password;
	}
	else {
		cout << "Wrong password!! \n";
	}
}



int main()
{
	TUser users[100];
	for (int i = 0; i < 100; i++) {
		users[i] = i + 1;
	}
	
	
	/*TUser user1{"Maria", "mMouse", "M1803m", 1, 17, true};

	printUser(user1);
	bithday(user1);
	printUser(user1);

	changePass(user1);*/

	return 0;
}