#pragma once
#include <iostream>
#include <memory>
#include <optional>

namespace VectorSpace 
{
		
	class Vector 
	{
	public :
		Vector();
		virtual ~Vector() 
		{
			// Safe Delete
			if (m_pData)
				delete[]m_pData;
			std::cout << "Delete Vector" << std::endl;  
		};

		bool AddData(const int& data);
		bool DeleteData(const int& data);
	
		void PrintData();

		int GetSize();
		void SetVectorId(const int& autoId);
		const int GetVectorId() const;

	private:
		std::optional<int> IsDuplicateDataInVectorReturnIdx(const int& data);
		void ShiftLeftSortingAfterDeleteDataInVector(const int& index);

		int m_vectorId;
		int m_vectorSize;
		int *m_pData;
	};
	
}