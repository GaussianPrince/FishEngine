
/**************************************************
* auto generated by reflection system
**************************************************/

#include <Archive.hpp>
#include <private/CloneUtility.hpp>
#include "../AssetImporter.hpp" 
#include "../ModelImporter.hpp" 
#include "../ModelImporter.hpp" 
#include "../ProjectSettings.hpp" 
#include "../TextureImporter.hpp" 
#include "../TextureImporter.hpp" 

namespace FishEditor
{

	// FishEditor::AssetImporter
	void FishEditor::AssetImporter::Serialize ( FishEngine::OutputArchive & archive ) const
	{
		//archive.BeginClass();
		FishEngine::Object::Serialize(archive);
		archive << FishEngine::make_nvp("m_fileIDToRecycleName", m_fileIDToRecycleName); // std::map<int, std::string>
		//archive.EndClass();
	}

	void FishEditor::AssetImporter::Deserialize ( FishEngine::InputArchive & archive )
	{
		//archive.BeginClass(2);
		FishEngine::Object::Deserialize(archive);
		archive >> FishEngine::make_nvp("m_fileIDToRecycleName", m_fileIDToRecycleName); // std::map<int, std::string>
		//archive.EndClass();
	}

	FishEngine::ObjectPtr FishEditor::AssetImporter::Clone() const
	{
		auto ret = FishEngine::MakeShared<FishEditor::AssetImporter>();
		FishEngine::ObjectPtr obj = ret;
		FishEngine::Object::CopyValueTo(obj);
		FishEngine::CloneUtility::Clone(this->m_fileIDToRecycleName, ret->m_fileIDToRecycleName); // std::map<int, std::string>
		return ret;
	}

	void FishEditor::AssetImporter::CopyValueTo(ObjectPtr & target) const
	{
		FishEngine::Object::CopyValueTo(target);
		auto ptr = std::dynamic_pointer_cast<FishEditor::AssetImporter>(target);
		FishEngine::CloneUtility::Clone(this->m_fileIDToRecycleName, ptr->m_fileIDToRecycleName); // std::map<int, std::string>
	}


	// FishEditor::ModelNode
	FishEngine::OutputArchive & operator << ( FishEngine::OutputArchive & archive, FishEditor::ModelNode const & value )
	{
		archive.BeginClass();
		archive << FishEngine::make_nvp("index", value.index); // uint32_t
		archive << FishEngine::make_nvp("name", value.name); // std::string
		archive << FishEngine::make_nvp("meshesIndices", value.meshesIndices); // std::vector<uint32_t>
		archive << FishEngine::make_nvp("isBone", value.isBone); // bool
		archive.EndClass();
		return archive;
	}

	FishEngine::InputArchive & operator >> ( FishEngine::InputArchive & archive, FishEditor::ModelNode & value )
	{
		archive.BeginClass();
		archive >> FishEngine::make_nvp("index", value.index); // uint32_t
		archive >> FishEngine::make_nvp("name", value.name); // std::string
		archive >> FishEngine::make_nvp("meshesIndices", value.meshesIndices); // std::vector<uint32_t>
		archive >> FishEngine::make_nvp("isBone", value.isBone); // bool
		archive.EndClass();
		return archive;
	}

	// FishEditor::ModelImporter
	void FishEditor::ModelImporter::Serialize ( FishEngine::OutputArchive & archive ) const
	{
		//archive.BeginClass();
		FishEditor::AssetImporter::Serialize(archive);
		archive << FishEngine::make_nvp("m_fileScale", m_fileScale); // float
		archive << FishEngine::make_nvp("m_importNormals", m_importNormals); // FishEditor::ModelImporterNormals
		archive << FishEngine::make_nvp("m_importTangents", m_importTangents); // FishEditor::ModelImporterTangents
		archive << FishEngine::make_nvp("m_materialSearch", m_materialSearch); // FishEditor::ModelImporterMaterialSearch
		//archive.EndClass();
	}

	void FishEditor::ModelImporter::Deserialize ( FishEngine::InputArchive & archive )
	{
		//archive.BeginClass(2);
		FishEditor::AssetImporter::Deserialize(archive);
		archive >> FishEngine::make_nvp("m_fileScale", m_fileScale); // float
		archive >> FishEngine::make_nvp("m_importNormals", m_importNormals); // FishEditor::ModelImporterNormals
		archive >> FishEngine::make_nvp("m_importTangents", m_importTangents); // FishEditor::ModelImporterTangents
		archive >> FishEngine::make_nvp("m_materialSearch", m_materialSearch); // FishEditor::ModelImporterMaterialSearch
		//archive.EndClass();
	}

	FishEngine::ObjectPtr FishEditor::ModelImporter::Clone() const
	{
		auto ret = FishEngine::MakeShared<FishEditor::ModelImporter>();
		FishEngine::ObjectPtr obj = ret;
		FishEditor::AssetImporter::CopyValueTo(obj);
		FishEngine::CloneUtility::Clone(this->m_fileScale, ret->m_fileScale); // float
		FishEngine::CloneUtility::Clone(this->m_importNormals, ret->m_importNormals); // FishEditor::ModelImporterNormals
		FishEngine::CloneUtility::Clone(this->m_importTangents, ret->m_importTangents); // FishEditor::ModelImporterTangents
		FishEngine::CloneUtility::Clone(this->m_materialSearch, ret->m_materialSearch); // FishEditor::ModelImporterMaterialSearch
		return ret;
	}

	void FishEditor::ModelImporter::CopyValueTo(ObjectPtr & target) const
	{
		FishEditor::AssetImporter::CopyValueTo(target);
		auto ptr = std::dynamic_pointer_cast<FishEditor::ModelImporter>(target);
		FishEngine::CloneUtility::Clone(this->m_fileScale, ptr->m_fileScale); // float
		FishEngine::CloneUtility::Clone(this->m_importNormals, ptr->m_importNormals); // FishEditor::ModelImporterNormals
		FishEngine::CloneUtility::Clone(this->m_importTangents, ptr->m_importTangents); // FishEditor::ModelImporterTangents
		FishEngine::CloneUtility::Clone(this->m_materialSearch, ptr->m_materialSearch); // FishEditor::ModelImporterMaterialSearch
	}


	// FishEditor::ProjectSettings
	FishEngine::OutputArchive & operator << ( FishEngine::OutputArchive & archive, FishEditor::ProjectSettings const & value )
	{
		archive.BeginClass();
		archive.EndClass();
		return archive;
	}

	FishEngine::InputArchive & operator >> ( FishEngine::InputArchive & archive, FishEditor::ProjectSettings & value )
	{
		archive.BeginClass();
		archive.EndClass();
		return archive;
	}

	// FishEditor::TextureSettings
	FishEngine::OutputArchive & operator << ( FishEngine::OutputArchive & archive, FishEditor::TextureSettings const & value )
	{
		archive.BeginClass();
		archive << FishEngine::make_nvp("m_filterMode", value.m_filterMode); // FishEngine::FilterMode
		archive << FishEngine::make_nvp("m_aniso", value.m_aniso); // int
		archive << FishEngine::make_nvp("m_mipBias", value.m_mipBias); // float
		archive << FishEngine::make_nvp("m_wrapMode", value.m_wrapMode); // FishEngine::TextureWrapMode
		archive.EndClass();
		return archive;
	}

	FishEngine::InputArchive & operator >> ( FishEngine::InputArchive & archive, FishEditor::TextureSettings & value )
	{
		archive.BeginClass();
		archive >> FishEngine::make_nvp("m_filterMode", value.m_filterMode); // FishEngine::FilterMode
		archive >> FishEngine::make_nvp("m_aniso", value.m_aniso); // int
		archive >> FishEngine::make_nvp("m_mipBias", value.m_mipBias); // float
		archive >> FishEngine::make_nvp("m_wrapMode", value.m_wrapMode); // FishEngine::TextureWrapMode
		archive.EndClass();
		return archive;
	}

	// FishEditor::TextureImporter
	void FishEditor::TextureImporter::Serialize ( FishEngine::OutputArchive & archive ) const
	{
		//archive.BeginClass();
		FishEditor::AssetImporter::Serialize(archive);
		archive << FishEngine::make_nvp("m_allowAlphaSplitting", m_allowAlphaSplitting); // bool
		archive << FishEngine::make_nvp("m_alphaIsTransparency", m_alphaIsTransparency); // bool
		archive << FishEngine::make_nvp("m_alphaSource", m_alphaSource); // FishEditor::TextureImporterAlphaSource
		archive << FishEngine::make_nvp("m_anisoLevel", m_anisoLevel); // int
		archive << FishEngine::make_nvp("m_borderMipmap", m_borderMipmap); // bool
		archive << FishEngine::make_nvp("m_compressionQuality", m_compressionQuality); // int
		archive << FishEngine::make_nvp("m_convertToNormalmap", m_convertToNormalmap); // bool
		archive << FishEngine::make_nvp("m_crunchedCompression", m_crunchedCompression); // bool
		archive << FishEngine::make_nvp("m_fadeout", m_fadeout); // bool
		archive << FishEngine::make_nvp("m_heightmapScale", m_heightmapScale); // float
		archive << FishEngine::make_nvp("m_generateCubemap", m_generateCubemap); // FishEditor::TextureImporterGenerateCubemap
		archive << FishEngine::make_nvp("m_textureType", m_textureType); // FishEditor::TextureImporterType
		archive << FishEngine::make_nvp("m_textureShape", m_textureShape); // FishEditor::TextureImporterShape
		archive << FishEngine::make_nvp("m_textureSettings", m_textureSettings); // FishEditor::TextureSettings
		archive << FishEngine::make_nvp("m_sRGBTexture", m_sRGBTexture); // bool
		archive << FishEngine::make_nvp("m_isReadable", m_isReadable); // bool
		archive << FishEngine::make_nvp("m_mipmapEnabled", m_mipmapEnabled); // bool
		//archive.EndClass();
	}

	void FishEditor::TextureImporter::Deserialize ( FishEngine::InputArchive & archive )
	{
		//archive.BeginClass(2);
		FishEditor::AssetImporter::Deserialize(archive);
		archive >> FishEngine::make_nvp("m_allowAlphaSplitting", m_allowAlphaSplitting); // bool
		archive >> FishEngine::make_nvp("m_alphaIsTransparency", m_alphaIsTransparency); // bool
		archive >> FishEngine::make_nvp("m_alphaSource", m_alphaSource); // FishEditor::TextureImporterAlphaSource
		archive >> FishEngine::make_nvp("m_anisoLevel", m_anisoLevel); // int
		archive >> FishEngine::make_nvp("m_borderMipmap", m_borderMipmap); // bool
		archive >> FishEngine::make_nvp("m_compressionQuality", m_compressionQuality); // int
		archive >> FishEngine::make_nvp("m_convertToNormalmap", m_convertToNormalmap); // bool
		archive >> FishEngine::make_nvp("m_crunchedCompression", m_crunchedCompression); // bool
		archive >> FishEngine::make_nvp("m_fadeout", m_fadeout); // bool
		archive >> FishEngine::make_nvp("m_heightmapScale", m_heightmapScale); // float
		archive >> FishEngine::make_nvp("m_generateCubemap", m_generateCubemap); // FishEditor::TextureImporterGenerateCubemap
		archive >> FishEngine::make_nvp("m_textureType", m_textureType); // FishEditor::TextureImporterType
		archive >> FishEngine::make_nvp("m_textureShape", m_textureShape); // FishEditor::TextureImporterShape
		archive >> FishEngine::make_nvp("m_textureSettings", m_textureSettings); // FishEditor::TextureSettings
		archive >> FishEngine::make_nvp("m_sRGBTexture", m_sRGBTexture); // bool
		archive >> FishEngine::make_nvp("m_isReadable", m_isReadable); // bool
		archive >> FishEngine::make_nvp("m_mipmapEnabled", m_mipmapEnabled); // bool
		//archive.EndClass();
	}

	FishEngine::ObjectPtr FishEditor::TextureImporter::Clone() const
	{
		auto ret = FishEngine::MakeShared<FishEditor::TextureImporter>();
		FishEngine::ObjectPtr obj = ret;
		FishEditor::AssetImporter::CopyValueTo(obj);
		FishEngine::CloneUtility::Clone(this->m_allowAlphaSplitting, ret->m_allowAlphaSplitting); // bool
		FishEngine::CloneUtility::Clone(this->m_alphaIsTransparency, ret->m_alphaIsTransparency); // bool
		FishEngine::CloneUtility::Clone(this->m_alphaSource, ret->m_alphaSource); // FishEditor::TextureImporterAlphaSource
		FishEngine::CloneUtility::Clone(this->m_anisoLevel, ret->m_anisoLevel); // int
		FishEngine::CloneUtility::Clone(this->m_borderMipmap, ret->m_borderMipmap); // bool
		FishEngine::CloneUtility::Clone(this->m_compressionQuality, ret->m_compressionQuality); // int
		FishEngine::CloneUtility::Clone(this->m_convertToNormalmap, ret->m_convertToNormalmap); // bool
		FishEngine::CloneUtility::Clone(this->m_crunchedCompression, ret->m_crunchedCompression); // bool
		FishEngine::CloneUtility::Clone(this->m_fadeout, ret->m_fadeout); // bool
		FishEngine::CloneUtility::Clone(this->m_heightmapScale, ret->m_heightmapScale); // float
		FishEngine::CloneUtility::Clone(this->m_generateCubemap, ret->m_generateCubemap); // FishEditor::TextureImporterGenerateCubemap
		FishEngine::CloneUtility::Clone(this->m_textureType, ret->m_textureType); // FishEditor::TextureImporterType
		FishEngine::CloneUtility::Clone(this->m_textureShape, ret->m_textureShape); // FishEditor::TextureImporterShape
		FishEngine::CloneUtility::Clone(this->m_textureSettings, ret->m_textureSettings); // FishEditor::TextureSettings
		FishEngine::CloneUtility::Clone(this->m_sRGBTexture, ret->m_sRGBTexture); // bool
		FishEngine::CloneUtility::Clone(this->m_isReadable, ret->m_isReadable); // bool
		FishEngine::CloneUtility::Clone(this->m_mipmapEnabled, ret->m_mipmapEnabled); // bool
		return ret;
	}

	void FishEditor::TextureImporter::CopyValueTo(ObjectPtr & target) const
	{
		FishEditor::AssetImporter::CopyValueTo(target);
		auto ptr = std::dynamic_pointer_cast<FishEditor::TextureImporter>(target);
		FishEngine::CloneUtility::Clone(this->m_allowAlphaSplitting, ptr->m_allowAlphaSplitting); // bool
		FishEngine::CloneUtility::Clone(this->m_alphaIsTransparency, ptr->m_alphaIsTransparency); // bool
		FishEngine::CloneUtility::Clone(this->m_alphaSource, ptr->m_alphaSource); // FishEditor::TextureImporterAlphaSource
		FishEngine::CloneUtility::Clone(this->m_anisoLevel, ptr->m_anisoLevel); // int
		FishEngine::CloneUtility::Clone(this->m_borderMipmap, ptr->m_borderMipmap); // bool
		FishEngine::CloneUtility::Clone(this->m_compressionQuality, ptr->m_compressionQuality); // int
		FishEngine::CloneUtility::Clone(this->m_convertToNormalmap, ptr->m_convertToNormalmap); // bool
		FishEngine::CloneUtility::Clone(this->m_crunchedCompression, ptr->m_crunchedCompression); // bool
		FishEngine::CloneUtility::Clone(this->m_fadeout, ptr->m_fadeout); // bool
		FishEngine::CloneUtility::Clone(this->m_heightmapScale, ptr->m_heightmapScale); // float
		FishEngine::CloneUtility::Clone(this->m_generateCubemap, ptr->m_generateCubemap); // FishEditor::TextureImporterGenerateCubemap
		FishEngine::CloneUtility::Clone(this->m_textureType, ptr->m_textureType); // FishEditor::TextureImporterType
		FishEngine::CloneUtility::Clone(this->m_textureShape, ptr->m_textureShape); // FishEditor::TextureImporterShape
		FishEngine::CloneUtility::Clone(this->m_textureSettings, ptr->m_textureSettings); // FishEditor::TextureSettings
		FishEngine::CloneUtility::Clone(this->m_sRGBTexture, ptr->m_sRGBTexture); // bool
		FishEngine::CloneUtility::Clone(this->m_isReadable, ptr->m_isReadable); // bool
		FishEngine::CloneUtility::Clone(this->m_mipmapEnabled, ptr->m_mipmapEnabled); // bool
	}


} // namespace FishEditor
