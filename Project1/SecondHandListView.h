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
			// 중고거래 리스트 내용 구조체
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
		string result = "해당 카테고리엔 글이 없습니다.";

	public:
		SecondHandListView();
		~SecondHandListView();

		// 받은 문자열로 중고거래 리스트 토큰화
		void secondHandListToken(string);	
		// 정리된 중고거래 리스트 데이터 전달
		 string get_SecondHandListView();

		 // 개별 정보를 받을 수 있는 함수
		 string loadSecondHandPrice();
		 string loadSecondHandTitle();
		 string loadSecondHandUserNum();
		 string loadSecondHandLocation();
		 string loadSecondHandContent();
	};
}