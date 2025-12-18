

#include "huaweicloud/meeting/v1/model/ProgramResponseBase.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ProgramResponseBase::ProgramResponseBase()
{
    id_ = "";
    idIsSet_ = false;
    lastUpdatedBy_ = "";
    lastUpdatedByIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
    programName_ = "";
    programNameIsSet_ = false;
    materialSizeStr_ = "";
    materialSizeStrIsSet_ = false;
    playTime_ = 0;
    playTimeIsSet_ = false;
}

ProgramResponseBase::~ProgramResponseBase() = default;

void ProgramResponseBase::validate()
{
}

web::json::value ProgramResponseBase::toJson() const
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
    if(programNameIsSet_) {
        val[utility::conversions::to_string_t("programName")] = ModelBase::toJson(programName_);
    }
    if(materialSizeStrIsSet_) {
        val[utility::conversions::to_string_t("materialSizeStr")] = ModelBase::toJson(materialSizeStr_);
    }
    if(playTimeIsSet_) {
        val[utility::conversions::to_string_t("playTime")] = ModelBase::toJson(playTime_);
    }

    return val;
}
bool ProgramResponseBase::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("programName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("programName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgramName(refVal);
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


std::string ProgramResponseBase::getId() const
{
    return id_;
}

void ProgramResponseBase::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ProgramResponseBase::idIsSet() const
{
    return idIsSet_;
}

void ProgramResponseBase::unsetid()
{
    idIsSet_ = false;
}

std::string ProgramResponseBase::getLastUpdatedBy() const
{
    return lastUpdatedBy_;
}

void ProgramResponseBase::setLastUpdatedBy(const std::string& value)
{
    lastUpdatedBy_ = value;
    lastUpdatedByIsSet_ = true;
}

bool ProgramResponseBase::lastUpdatedByIsSet() const
{
    return lastUpdatedByIsSet_;
}

void ProgramResponseBase::unsetlastUpdatedBy()
{
    lastUpdatedByIsSet_ = false;
}

int64_t ProgramResponseBase::getUpdateTime() const
{
    return updateTime_;
}

void ProgramResponseBase::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ProgramResponseBase::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ProgramResponseBase::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ProgramResponseBase::getProgramName() const
{
    return programName_;
}

void ProgramResponseBase::setProgramName(const std::string& value)
{
    programName_ = value;
    programNameIsSet_ = true;
}

bool ProgramResponseBase::programNameIsSet() const
{
    return programNameIsSet_;
}

void ProgramResponseBase::unsetprogramName()
{
    programNameIsSet_ = false;
}

std::string ProgramResponseBase::getMaterialSizeStr() const
{
    return materialSizeStr_;
}

void ProgramResponseBase::setMaterialSizeStr(const std::string& value)
{
    materialSizeStr_ = value;
    materialSizeStrIsSet_ = true;
}

bool ProgramResponseBase::materialSizeStrIsSet() const
{
    return materialSizeStrIsSet_;
}

void ProgramResponseBase::unsetmaterialSizeStr()
{
    materialSizeStrIsSet_ = false;
}

int32_t ProgramResponseBase::getPlayTime() const
{
    return playTime_;
}

void ProgramResponseBase::setPlayTime(int32_t value)
{
    playTime_ = value;
    playTimeIsSet_ = true;
}

bool ProgramResponseBase::playTimeIsSet() const
{
    return playTimeIsSet_;
}

void ProgramResponseBase::unsetplayTime()
{
    playTimeIsSet_ = false;
}

}
}
}
}
}


