

#include "huaweicloud/meeting/v1/model/ProgramItemResponseBase.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ProgramItemResponseBase::ProgramItemResponseBase()
{
    materialId_ = "";
    materialIdIsSet_ = false;
    materialName_ = "";
    materialNameIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
    playTime_ = 0;
    playTimeIsSet_ = false;
}

ProgramItemResponseBase::~ProgramItemResponseBase() = default;

void ProgramItemResponseBase::validate()
{
}

web::json::value ProgramItemResponseBase::toJson() const
{
    web::json::value val = web::json::value::object();

    if(materialIdIsSet_) {
        val[utility::conversions::to_string_t("materialId")] = ModelBase::toJson(materialId_);
    }
    if(materialNameIsSet_) {
        val[utility::conversions::to_string_t("materialName")] = ModelBase::toJson(materialName_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("filePath")] = ModelBase::toJson(filePath_);
    }
    if(playTimeIsSet_) {
        val[utility::conversions::to_string_t("playTime")] = ModelBase::toJson(playTime_);
    }

    return val;
}
bool ProgramItemResponseBase::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("materialId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("materialId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaterialId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("filePath"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filePath"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilePath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("playTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("playTime"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlayTime(refVal);
        }
    }
    return ok;
}


std::string ProgramItemResponseBase::getMaterialId() const
{
    return materialId_;
}

void ProgramItemResponseBase::setMaterialId(const std::string& value)
{
    materialId_ = value;
    materialIdIsSet_ = true;
}

bool ProgramItemResponseBase::materialIdIsSet() const
{
    return materialIdIsSet_;
}

void ProgramItemResponseBase::unsetmaterialId()
{
    materialIdIsSet_ = false;
}

std::string ProgramItemResponseBase::getMaterialName() const
{
    return materialName_;
}

void ProgramItemResponseBase::setMaterialName(const std::string& value)
{
    materialName_ = value;
    materialNameIsSet_ = true;
}

bool ProgramItemResponseBase::materialNameIsSet() const
{
    return materialNameIsSet_;
}

void ProgramItemResponseBase::unsetmaterialName()
{
    materialNameIsSet_ = false;
}

std::string ProgramItemResponseBase::getFilePath() const
{
    return filePath_;
}

void ProgramItemResponseBase::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool ProgramItemResponseBase::filePathIsSet() const
{
    return filePathIsSet_;
}

void ProgramItemResponseBase::unsetfilePath()
{
    filePathIsSet_ = false;
}

int32_t ProgramItemResponseBase::getPlayTime() const
{
    return playTime_;
}

void ProgramItemResponseBase::setPlayTime(int32_t value)
{
    playTime_ = value;
    playTimeIsSet_ = true;
}

bool ProgramItemResponseBase::playTimeIsSet() const
{
    return playTimeIsSet_;
}

void ProgramItemResponseBase::unsetplayTime()
{
    playTimeIsSet_ = false;
}

}
}
}
}
}


