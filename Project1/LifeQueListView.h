#pragma once
#include <string>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>


//#include "MainManager.h"
using namespace std;

namespace TP {
	class LifeQueListView {
	private:
		// �������� ����Ʈ ���� ����ü
		struct LifeQueData {
			string LifeQueListCode;						// �Խñ� ��ȣ
			string LifeQueListTitle;						// ����
			string LifeQueListLocation;				// ���
			string LifeQueListUserName;			// �ۼ���
			string LifeQueListContent;				// ����
			string LifeQueListCuriousNum;		// �ñ��ؿ� ��
			string LifeQueListCommentNum;	// ��� ��
		};

		LifeQueData* LifeQueListData;
		string result = "�ش� ī�װ��� ���� �����ϴ�.";

	public:
		LifeQueListView();
		~LifeQueListView();

		// ���� ���ڿ��� ���� ���� ����Ʈ ��ūȭ
		void lifeQueListToken(string);
		// ������ ���� ���� ����Ʈ ������ ����
		string get_LifeQueListView();
		// ���� ������ ���� �� �ִ� �Լ�
		string loadLifeQueTitle();
		string loadLifeQueUserName();
		string loadLifeQueLocation();
		string loadLifeQueCuriousNum();
	};
}