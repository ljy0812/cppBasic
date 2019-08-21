#pragma once

#include "vector.h"
#include <vector>
#include <map>


namespace VectorSpace 
{	
	class VectorManager 
	{	
	public : 
		VectorManager();
		virtual ~VectorManager() = default;
		
		void CreateVector(std::shared_ptr<Vector> newVector);
		bool Append(const int& varId, const int& data);

		void PrintInformation();

		bool DeleteDataInVector(const int& varId, const int& data);
		bool DeleteVector(const int& varId);

	private :
		std::map<int, std::shared_ptr<Vector>> m_id2Vector;
		int autoIncreasementVectorId;
	};
}