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
		// 동네질문 리스트 내용 구조체
		struct LifeQueData {
			string LifeQueListCode;						// 게시글 번호
			string LifeQueListTitle;						// 제목
			string LifeQueListLocation;				// 장소
			string LifeQueListUserName;			// 작성자
			string LifeQueListContent;				// 내용
			string LifeQueListCuriousNum;		// 궁금해요 수
			string LifeQueListCommentNum;	// 댓글 수
		};

		LifeQueData* LifeQueListData;
		string result = "해당 카테고리엔 글이 없습니다.";

	public:
		LifeQueListView();
		~LifeQueListView();

		// 받은 문자열로 동네 질문 리스트 토큰화
		void lifeQueListToken(string);
		// 정리된 동네 질문 리스트 데이터 전달
		string get_LifeQueListView();
		// 개별 정보를 받을 수 있는 함수
		string loadLifeQueTitle();
		string loadLifeQueUserName();
		string loadLifeQueLocation();
		string loadLifeQueCuriousNum();
	};
}