#include "LifeQueArticleView.h"
namespace TP {
	LifeQueArticleView::LifeQueArticleView() {

	};

	// �Խñ� �ڵ� �Է¹����� �ش� �� ã��
	void LifeQueArticleView::lifeQueArticleToken(string articleData, int code) {

		struct LifeQueData lqData;
		istringstream ss(articleData);
		string firstStringBuffer;
		vector<string> x;
		x.clear();
		// 1�� ������ ,
		while (getline(ss, firstStringBuffer, ',')) {
			x.push_back(firstStringBuffer);
		}

		// 2�� ������ /
		int num = 0;
		for (string data : x) {
			istringstream ss(data);
			string stringBuffer;
			vector<string> y;
			y.clear();
			while (getline(ss, stringBuffer, '/')) {
				y.push_back(stringBuffer);
			}
			// ã�� �Խñ� �ڵ�� ��ġ�ϴ� �κи� ����
			if (y[0] == to_string(code)) {
				lqData.LifeQueCode = y[0];
				lqData.LifeQueTitle = y[1];
				lqData.LifeQueLocation = y[2];
				lqData.LifeQueUserName = y[3];
				lqData.LifeQueContent = y[4];
				lqData.LifeQueCuriousNum = y[5];
				lqData.LifeQueCommentNum = y[6];
			}
		}
		this->lqData = lqData;
		this->result = "����: " + lqData.LifeQueTitle + "\n"
			+ "����: " + lqData.LifeQueLocation + "\n"
			+ "���̵�: " + lqData.LifeQueUserName + "\n"
			+ "����: " + lqData.LifeQueContent + "\n"
			+ "�ñ��ؿ�: " + lqData.LifeQueCuriousNum + "��\n"
			+ "���: " + lqData.LifeQueCommentNum + "��\n";
	}

	// �����  ��� �����ϱ�
	string LifeQueArticleView::get_LifeQueArticleView() const {
		return this->result;
	}

	// ������ �������� ����
	string LifeQueArticleView::loadLifeQueTitle() {
		return this->lqData.LifeQueTitle;
	}
	string LifeQueArticleView::loadLifeQueUserName() {
		return this->lqData.LifeQueUserName;
	}
	string LifeQueArticleView::loadLifeQueLocation() {
		return this->lqData.LifeQueLocation;
	}
	string LifeQueArticleView::loadLifeQueContent() {
		return this->lqData.LifeQueContent;
	}
	string LifeQueArticleView::loadListQueCuriousNum() {
		return this->lqData.LifeQueCuriousNum;
	}
}