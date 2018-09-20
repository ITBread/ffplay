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
		ET_STATUS_UNKNOW=-1,  ///<  ET_STATUS_UNKNOW	未知 
		ET_STATUS_PLAYING=0,  ///<  ET_STATUS_PLAYING	播放
		ET_STATUS_ERROR=1,    ///<  ET_STATUS_ERROR		错误
		ET_STATUS_STOP=2,     ///<  ET_STATUS_STOP		停止
	};

/**  
	@brief StatusChangeCallback状态变化回调 .
	@param statusCode 状态码
	@enum StatusCode
	@param mediaBase 参数
	@param userPtr 用户参数	
	@return 无返回值。
	*/
typedef void(*StatusChangeCallback)(StatusCode statusCode,void *mediaBase,void* userPtr);

