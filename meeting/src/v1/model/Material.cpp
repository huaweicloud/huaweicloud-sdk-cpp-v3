

#include "huaweicloud/meeting/v1/model/Material.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




Material::Material()
{
    id_ = "";
    idIsSet_ = false;
    lastUpdatedBy_ = "";
    lastUpdatedByIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
    materialName_ = "";
    materialNameIsSet_ = false;
    materialResolution_ = "";
    materialResolutionIsSet_ = false;
    materialSizeStr_ = "";
    materialSizeStrIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
}

Material::~Material() = default;

void Material::validate()
{
}

web::json::value Material::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(lastUpdatedByIsSet_) {
        val[utility::conversions::to_string_t("lastUpdatedBy")] = ModelBase::toJson(lastUpdatedBy_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("updateTime")] = ModelBase::toJson(updateTime_);
    }
    if(materialNameIsSet_) {
        val[utility::conversions::to_string_t("materialName")] = ModelBase::toJson(materialName_);
    }
    if(materialResolutionIsSet_) {
        val[utility::conversions::to_string_t("materialResolution")] = ModelBase::toJson(materialResolution_);
    }
    if(materialSizeStrIsSet_) {
        val[utility::conversions::to_string_t("materialSizeStr")] = ModelBase::toJson(materialSizeStr_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("filePath")] = ModelBase::toJson(filePath_);
    }

    return val;
}
bool Material::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lastUpdatedBy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lastUpdatedBy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastUpdatedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updateTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updateTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("materialName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("materialName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaterialName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("materialResolution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("materialResolution"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaterialResolution(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("materialSizeStr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("materialSizeStr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaterialSizeStr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("filePath"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filePath"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilePath(refVal);
        }
    }
    return ok;
}


std::string Material::getId() const
{
    return id_;
}

void Material::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Material::idIsSet() const
{
    return idIsSet_;
}

void Material::unsetid()
{
    idIsSet_ = false;
}

std::string Material::getLastUpdatedBy() const
{
    return lastUpdatedBy_;
}

void Material::setLastUpdatedBy(const std::string& value)
{
    lastUpdatedBy_ = value;
    lastUpdatedByIsSet_ = true;
}

bool Material::lastUpdatedByIsSet() const
{
    return lastUpdatedByIsSet_;
}

void Material::unsetlastUpdatedBy()
{
    lastUpdatedByIsSet_ = false;
}

int64_t Material::getUpdateTime() const
{
    return updateTime_;
}

void Material::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool Material::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void Material::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string Material::getMaterialName() const
{
    return materialName_;
}

void Material::setMaterialName(const std::string& value)
{
    materialName_ = value;
    materialNameIsSet_ = true;
}

bool Material::materialNameIsSet() const
{
    return materialNameIsSet_;
}

void Material::unsetmaterialName()
{
    materialNameIsSet_ = false;
}

std::string Material::getMaterialResolution() const
{
    return materialResolution_;
}

void Material::setMaterialResolution(const std::string& value)
{
    materialResolution_ = value;
    materialResolutionIsSet_ = true;
}

bool Material::materialResolutionIsSet() const
{
    return materialResolutionIsSet_;
}

void Material::unsetmaterialResolution()
{
    materialResolutionIsSet_ = false;
}

std::string Material::getMaterialSizeStr() const
{
    return materialSizeStr_;
}

void Material::setMaterialSizeStr(const std::string& value)
{
    materialSizeStr_ = value;
    materialSizeStrIsSet_ = true;
}

bool Material::materialSizeStrIsSet() const
{
    return materialSizeStrIsSet_;
}

void Material::unsetmaterialSizeStr()
{
    materialSizeStrIsSet_ = false;
}

std::string Material::getFilePath() const
{
    return filePath_;
}

void Material::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool Material::filePathIsSet() const
{
    return filePathIsSet_;
}

void Material::unsetfilePath()
{
    filePathIsSet_ = false;
}

}
}
}
}
}


