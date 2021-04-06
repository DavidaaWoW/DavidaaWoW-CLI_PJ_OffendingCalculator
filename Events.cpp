#include "Events.h"
#include "MyForm.h"
#include <iostream>
#include <cstring>
#include <msclr\marshal_cppstd.h>
#include <fstream>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>

using namespace Project1;

std::ofstream outfile("D://vs//projects//Project1//logs.txt");

String^ MyForm::rand1()
{
	srand(time(0));
	int i;
	i = rand() % 20;
	switch (i)
	{
	case 0:
		return "Dumb";
		break;
	case 1:
		return "Idiot";
		break;
	case 2:
		return "Stupid";
		break;
	case 3:
		return "Bugger";
		break;
	case 4:
		return "Soapdodger";
		break;
	case 5:
		return "Minger";
		break;
	case 6:
		return "Div";
		break;
	case 7:
		return "Loser";
		break;
	case 8:
		return "Loner";
		break;
	case 9:
		return "Doormat";
		break;
	case 10:
		return "Dork";
		break;
	case 11:
		return "Layabout";
		break;
	case 12:
		return "Nerd";
		break;
	case 13:
		return "Spoilsport";
		break;
	case 14:
		return "Swot";
		break;
	case 15:
		return "Twit";
		break;
	case 16:
		return "Prat";
		break;
	case 17:
		return "Pushover";
		break;
	case 18:
		return "Scumbag";
		break;
	case 19:
		return "Slob";
		break;
	}
}

std::string MyForm::conv(String^ str)
{
	std::string s;
	s = msclr::interop::marshal_as<std::string>(str);
	return s;
}

String^ MyForm::ret(std::string str, char ch)
{
	std::stringstream ss;
	std::string str1;
	String^ str2;
	bool checker = false;
	char* arr = new char[str.length()];
	strcpy(arr, str.c_str());
	if (ch == ',')
	{
		for (int a = 0; a < str.length(); a++)
		{
			if (arr[a] == ',')
				checker = true;
		}
		if (checker == true)
		{
			ss << str;
			checker = false;
		}
		else
		{
			ss << str << ",";
		}
	}
	else if (str == "Dumb"||str == "Idiot"|| str == "Stupid"|| str == "Bugger"||str == "Soapdodger"|| str == "Minger"|| str == "Div"|| str == "Loser"|| str == "Loner"|| str == "Doormat"|| str == "Dork"|| str == "Layabout"|| str == "Nerd"|| str == "Spoilsport"|| str == "Swot"|| str == "Twit"|| str == "Prat"|| str == "Pushover"|| str == "Scumbag"|| str == "Slob")
	{
		std::string o = conv(rand1());
		ss << o;
	}
	else if (ch == 'e')
	{
		bool memch = false;
		for (int a = 0; a < str.length(); a++)
		{
			if (arr[a] == '=') {
				memch = true;
				continue;
			}
			if (memch == true)
			{
				ss << arr[a];
			}
		}
	}
	else if (ch == 'm')
	{
		if (arr[0] == 'm')
		{
			for (int a = 1; a < str.length(); a++)
			{
				ss << arr[a];
			}
		}
		else
		{
			if (str != "0")
			{
				ss << "-" << str;
			}
			else
			{
				ss << "0";
			}
		}
	}
	else if (ch == 'k')
	{
		if (str == "0")
		{
			ss << 0;
		}
		else 
		{
			for (int a = 0; a < str.length() - 1; a++)
			{
				ss << arr[a];
			}
		}
	}
	else if (ch == '+' || ch == '-' || ch == 'x' || ch == '/')
	{
		for (int a = 0; a < str.length(); a++)
		{
			if (arr[a] != ',' && arr[a] != '0')
				checker = true;
		}
		if (str == "0" || checker == false) {
			std::string o = conv(rand1());
			ss << o;
		}
		else
		{
			ss << str << ch;
			checker = false;
		}
		MyForm::check = true;
	}
	else if (str == "0"&&ch!=',')
	{
		ss << ch;
	}
	else
	{
		if (MyForm::check == false)
		{
			ss << str << ch;
		}
		else
		{
			ss << ch;
			MyForm::check = false;
		}
	}
	ss >> str1;
	str2 = gcnew System::String(str1.c_str());
	return str2;
}

String^ MyForm::ret2(String^ str)
{
	if (ret(conv(str), 'e')=="")
		return System::Convert::ToString(label1->Text);
	return ret(conv(str), 'e');
}

double MyForm::ret1(std::string str)
{
	double answer;
	std::stringstream ss;
	char* arr = new char[str.length()];
	strcpy(arr, str.c_str());
	//outfile << "AMA IN = " << str << std::endl;
	for (int a = 0; a < str.length(); a++)
	{
		//outfile << arr[a] << " ";
		if (arr[a] == ',')
		{
			ss << '.';
		}
		else
		{
			ss << arr[a];
		}
	}
	//outfile << std::endl;
	ss >> answer;
	return answer;
}

String^ MyForm::equals(std::string str1, std::string str2)
{
	if (str1 == "")
	{
		if (MyForm::check1 == false)
			return rand1();
		else
		{
			check2 = true;
			std::string s = conv(MyForm::last);
			char* arr = new char[s.length()];
			strcpy(arr, s.c_str());
			std::stringstream ss;
			for (int a = 1; a < s.length(); a++)
			{
				ss << arr[a];
			}
			double answer;
			double answer1 = ret1(str2);
			ss >> answer;
			char sym = arr[0];
			list2 = answer.ToString();
			sym_gl = sym;
			switch (sym)
			{
			case '+':
				answer1 += answer;
				break;
			case '-':
				answer1 -= answer;
				break;
			case 'x':
				answer1 *= answer;
				break;
			case '/':
				answer1 /= answer;
				break;
			}
			String^ ans = answer1.ToString("G");
			return ans;
		}
	}
	if (str1 == "Dumb" || str1 == "Idiot" || str1 == "Stupid" || str1 == "Bugger" || str1 == "Soapdodger" || str1 == "Minger" || str1 == "Div" || str1 == "Loser" || str1 == "Loner" || str1 == "Doormat" || str1 == "Dork" || str1 == "Layabout" || str1 == "Nerd" || str1 == "Spoilsport" || str1 == "Swot" || str1 == "Twit" || str1 == "Prat" || str1 == "Pushover" || str1 == "Scumbag" || str1 == "Slob")
		return rand1();
	String^ str3;
	double first = ret1(str1);
	double second = ret1(str2);
	double result;
	char* arr = new char[str1.length()];
	char sym;
	strcpy(arr, str1.c_str());
	sym = arr[str1.length() - 1];
	if (str2 == "0" && sym == '/')
	{
		return rand1();
	}
	//outfile << "AMA FIRST = " << first << " AMA SECOND = " << second << " AMA RESULT = " << result << std::endl;
	//outfile << "AMA FIRST = " << str1 << " AMA SECOND = " << str2 << " AMA SYM = " << sym << std::endl;
	switch (sym)
	{
	case '+' :
		result = first + second;
		break;
	case '-':
		result = first - second;
		break;
	case 'x':
		result = first * second;
		break;
	case '/':
		result = first / second;
		break;
	}
	//outfile << "AMA FIRST = " << first << " AMA SECOND = " << second << " AMA RESULT = " << result << std::endl;
	str3 = result.ToString("G");
	std::stringstream ss;
	std::string s;
	ss << sym << second;
	ss >> s;
	MyForm::last = "";
	MyForm::last = gcnew System::String(s.c_str());
	MyForm::check1 = true;
	check2 = false;
	return str3;
}

String^ MyForm::pow(double answer)
{
	//outfile << "AMA ANSWER = " << answer << std::endl;
	answer *= answer;
	String^ str1;
	str1 = answer.ToString("G");
	return str1;
}

String^ MyForm::oneon(double answer)
{
	if (answer == 0)
		return rand1();
	answer = 1 / answer;
	String^ str1;
	str1 = answer.ToString("G");
	return str1;
}

String^ MyForm::sqrtf(double answer)
{
	if (answer < 0)
		return rand1();
	answer = sqrt(answer);
	String^ str1;
	str1 = answer.ToString("G");
	return str1;
}

String^ MyForm::perc(std::string str1, std::string str2)
{
	double first = ret1(str1), second = ret1(str2),answer;
	//outfile << "AMA FIRST = " << first << " AMA SECOND = " << second << std::endl;
	first /= 100;
	//outfile << "AMA FIRST = " << first << " AMA SECOND = " << second << std::endl;
	answer = first * second;
	String^ str;
	str = answer.ToString("G");
	return str;
	return "";
}

void MyForm::list(String^ s)
{
	История->BeginUpdate();
	История->Items->Add(s);
	История->EndUpdate();
}

System::Void MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	int check = 0;
	std::string s;
	String^ s1;
	s1 = System::Convert::ToString(label1->Text);
	s = conv(s1);
	char* arr = new char[s.length()];
	strcpy(arr, s.c_str());
	for (int a = 0; a < s.length(); a++)
	{
		if (arr[a] == ',')
			check++;
		if (arr[a] != '0')
			check++;
	}
	if (check != 0)
	{
		label1->Text = ret(s,'0');
	}
}

System::Void MyForm::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
		label1->Text = ret(conv(System::Convert::ToString(label1->Text)),',');
}

System::Void MyForm::button8_Click(System::Object^ sender, System::EventArgs^ e)
{
	label1->Text = ret(conv(System::Convert::ToString(label1->Text)), '1');
}

System::Void MyForm::button7_Click(System::Object^ sender, System::EventArgs^ e)
{
	label1->Text = ret(conv(System::Convert::ToString(label1->Text)), '2');
}

System::Void MyForm::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
	label1->Text = ret(conv(System::Convert::ToString(label1->Text)), '3');
}

System::Void MyForm::button12_Click(System::Object^ sender, System::EventArgs^ e)
{
	label1->Text = ret(conv(System::Convert::ToString(label1->Text)), '4');
}

System::Void MyForm::button11_Click(System::Object^ sender, System::EventArgs^ e)
{
	label1->Text = ret(conv(System::Convert::ToString(label1->Text)), '5');
}

System::Void MyForm::button10_Click(System::Object^ sender, System::EventArgs^ e)
{
	label1->Text = ret(conv(System::Convert::ToString(label1->Text)), '6');
}

System::Void MyForm::button16_Click(System::Object^ sender, System::EventArgs^ e)
{
	label1->Text = ret(conv(System::Convert::ToString(label1->Text)), '7');
}

System::Void MyForm::button15_Click(System::Object^ sender, System::EventArgs^ e)
{
	label1->Text = ret(conv(System::Convert::ToString(label1->Text)), '8');
}

System::Void MyForm::button14_Click(System::Object^ sender, System::EventArgs^ e)
{
	label1->Text = ret(conv(System::Convert::ToString(label1->Text)), '9');
}

System::Void MyForm::button22_Click(System::Object^ sender, System::EventArgs^ e)
{
	label1->Text = "0";
	label2->Text = "";
}

System::Void MyForm::button23_Click(System::Object^ sender, System::EventArgs^ e)
{
	label1->Text = "0";
}

System::Void MyForm::button21_Click(System::Object^ sender, System::EventArgs^ e)
{
	label1->Text = ret(conv(System::Convert::ToString(label1->Text)), 'k');
}

System::Void MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	label1->Text = ret(conv(System::Convert::ToString(label1->Text)), 'm');
}

System::Void MyForm::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	label2->Text = ret(conv(System::Convert::ToString(label1->Text)), '+');
}

System::Void MyForm::button9_Click(System::Object^ sender, System::EventArgs^ e)
{
	label2->Text = ret(conv(System::Convert::ToString(label1->Text)), '-');
}

System::Void MyForm::button13_Click(System::Object^ sender, System::EventArgs^ e)
{
	label2->Text = ret(conv(System::Convert::ToString(label1->Text)), 'x');
}

System::Void MyForm::button17_Click(System::Object^ sender, System::EventArgs^ e)
{
	label2->Text = ret(conv(System::Convert::ToString(label1->Text)), '/');
}

System::Void MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	temp1 = System::Convert::ToString(label2->Text);
	temp2 = list2 = System::Convert::ToString(label1->Text);
	temp3 = fin;
	fin = equals(conv(System::Convert::ToString(label2->Text)), conv(System::Convert::ToString(label1->Text)));
	if (check2 == false)
	{
		list1 = temp1;
		list2 = temp2;
	}
	else
	{
		list1 = temp3;
		std::stringstream sss;
		sss << conv(temp3) << sym_gl;
		std::string s1;
		sss >> s1;
		list1 = gcnew System::String(s1.c_str());
	}
	label1->Text = fin;
	label2->Text = "";
	list(list1+list2+"="+fin);
}

System::Void MyForm::button19_Click(System::Object^ sender, System::EventArgs^ e)
{
	list1 = System::Convert::ToString(label1->Text);
	fin = pow(ret1(conv(System::Convert::ToString(label1->Text))));
	label1->Text = fin;
	list(list1 + "*" + list1 + "=" + fin);
}

System::Void MyForm::button20_Click(System::Object^ sender, System::EventArgs^ e)
{
	list1 = System::Convert::ToString(label1->Text);
	fin = oneon(ret1(conv(System::Convert::ToString(label1->Text))));
	label1->Text = fin;
	list("1 / " + list1 + " = " + fin);
}

System::Void MyForm::button18_Click(System::Object^ sender, System::EventArgs^ e)
{
	list1 = System::Convert::ToString(label1->Text);
	fin = sqrtf(ret1(conv(System::Convert::ToString(label1->Text))));
	label1->Text = fin;
	list("sqrt(" + list1 + ") = " + fin);
}

System::Void MyForm::button24_Click(System::Object^ sender, System::EventArgs^ e)
{
	label1->Text = perc(conv(System::Convert::ToString(label2->Text)), conv(System::Convert::ToString(label1->Text)));
}

System::Void MyForm::lboxclicked(System::Object^ sender, System::EventArgs^ e)
{
	label1->Text = ret2(System::Convert::ToString(История->SelectedItem));
}

System::Void MyForm::button25_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->История->Visible == false) {
		this->ClientSize = System::Drawing::Size(750, 610);
		this->История->Visible = true;
	}
	else
	{
		this->ClientSize = System::Drawing::Size(585, 610);
		this->История->Visible = false;
	}
}