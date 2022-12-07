#pragma once
#include <string>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>


//#include "MainManager.h"

using namespace std;

namespace TP {
	class SecondHandListView {
	private:
			// �߰�ŷ� ����Ʈ ���� ����ü
		struct SecondHandData {
			string SecondHandListCode;
			string SecondHandListTitle;
			string SecondHandListLocation;
			string SecondHandListPrice;
			string SecondHandListUserName;
			string SecondHandListContent;
			string SecondHandListChatNum;
			string SecondHandListLikeNum;
			string SecondHandListWritingTime;
		};

		SecondHandData *SecondHandListData;
		string result = "�ش� ī�װ��� ���� �����ϴ�.";

	public:
		SecondHandListView();
		~SecondHandListView();

		// ���� ���ڿ��� �߰�ŷ� ����Ʈ ��ūȭ
		void secondHandListToken(string);	
		// ������ �߰�ŷ� ����Ʈ ������ ����
		 string get_SecondHandListView();

		 // ���� ������ ���� �� �ִ� �Լ�
		 string loadSecondHandPrice();
		 string loadSecondHandTitle();
		 string loadSecondHandUserNum();
		 string loadSecondHandLocation();
		 string loadSecondHandContent();
	};
}