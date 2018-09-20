#pragma once
#ifdef MEDIACOREAPI_EXPORTS
#define MEDIACORE_API __declspec(dllexport)
#else
#define MEDIACORE_API __declspec(dllimport)
#endif

	/**  
	@brief enum StatusCode.
	*/
	enum StatusCode
	{
		ET_STATUS_UNKNOW=-1,  ///<  ET_STATUS_UNKNOW	δ֪ 
		ET_STATUS_PLAYING=0,  ///<  ET_STATUS_PLAYING	����
		ET_STATUS_ERROR=1,    ///<  ET_STATUS_ERROR		����
		ET_STATUS_STOP=2,     ///<  ET_STATUS_STOP		ֹͣ
	};

/**  
	@brief StatusChangeCallback״̬�仯�ص� .
	@param statusCode ״̬��
	@enum StatusCode
	@param mediaBase ����
	@param userPtr �û�����	
	@return �޷���ֵ��
	*/
typedef void(*StatusChangeCallback)(StatusCode statusCode,void *mediaBase,void* userPtr);

