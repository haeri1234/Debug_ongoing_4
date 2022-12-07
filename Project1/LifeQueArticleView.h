#pragma once
#include <string>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

//#include "MainManager.h"

using namespace std;

namespace TP {
	class LifeQueArticleView {
	private:
		// �������� ����Ʈ ���� ����ü
		struct LifeQueData {
			string LifeQueCode;						// �Խñ� ��ȣ
			string LifeQueTitle;						// ����
			string LifeQueLocation;				// ���
			string LifeQueUserName;			// �ۼ���
			string LifeQueContent;				// ����
			string LifeQueCuriousNum;		// �ñ��ؿ� ��
			string LifeQueCommentNum;	// ��� ��
		};
		LifeQueData lqData;

		string result = "�ش� ����� �����ϴ�.";

	public:
		LifeQueArticleView();
		~LifeQueArticleView();

		// ���� ���ڿ��� �߰�ŷ� ����Ʈ ��ūȭ
		void lifeQueArticleToken(string, int);
		// ������ �߰�ŷ� ����Ʈ ������ ����
		string get_LifeQueArticleView() const;

		// ���� ������ ���� �� �ִ� �Լ�
		string loadLifeQueTitle();
		string loadLifeQueUserName();
		string loadLifeQueLocation();
		string loadLifeQueContent();
		string loadListQueCuriousNum();
	};
}