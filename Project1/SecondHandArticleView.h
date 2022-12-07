#pragma once
#include <string>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

//#include "MainManager.h"
using namespace std;

namespace TP {
	class SecondHandArticleView {
	private:
		// �߰�ŷ� ����Ʈ ���� ����ü
		struct SecondHandData {
			string SecondHandCode;
			string SecondHandTitle;
			string SecondHandLocation;
			string SecondHandPrice;
			string SecondHandUserName;
			string SecondHandContent;
			string SecondHandChatNum;
			string SecondHandLikeNum;
			string SecondHandWritingTime;
		};
		SecondHandData shData;
		string result = "�ش� ����� �����ϴ�.";

	public:
		SecondHandArticleView();
		~SecondHandArticleView();

		// ���� ���ڿ��� �߰�ŷ� ����Ʈ ��ūȭ
		void secondHandArticleToken(string, int);
		// ������ �߰�ŷ� ����Ʈ ������ ����
		string get_SecondHandArticleView() const;


		// ���� ������ ���� �� �ִ� �Լ�
		string loadSecondHandPrice();
		string loadSecondHandTitle();
		string loadSecondHandUserName();
		string loadSecondHandLocation();
		string loadSecondHandContent();
	};
}