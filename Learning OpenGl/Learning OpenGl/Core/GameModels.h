#pragma once
#include <vector>
#include <map>

namespace Models 
{
	struct Model{
		unsigned int vao;
		std::vector<unsigned int > vbos;
		Model(){}
	};

	class GameModels
	{
	public:
		GameModels();
		~GameModels();
		void CreateTriangleModel(const std::string&);
		void DeleteModel(const std::string&);
		unsigned int GetModel(const std::string&);
	private:
		std::map<std::string, Model> GameModelList;
	};
}