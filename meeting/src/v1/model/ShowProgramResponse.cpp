

#include "huaweicloud/meeting/v1/model/ShowProgramResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowProgramResponse::ShowProgramResponse()
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
    programItemListIsSet_ = false;
}

ShowProgramResponse::~ShowProgramResponse() = default;

void ShowProgramResponse::validate()
{
}

web::json::value ShowProgramResponse::toJson() const
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
    if(programItemListIsSet_) {
        val[utility::conversions::to_string_t("programItemList")] = ModelBase::toJson(programItemList_);
    }

    return val;
}
bool ShowProgramResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("programItemList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("programItemList"));
        if(!fieldValue.is_null())
        {
            std::vector<ProgramItemResponseBase> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgramItemList(refVal);
        }
    }
    return ok;
}


std::string ShowProgramResponse::getId() const
{
    return id_;
}

void ShowProgramResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowProgramResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowProgramResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowProgramResponse::getLastUpdatedBy() const
{
    return lastUpdatedBy_;
}

void ShowProgramResponse::setLastUpdatedBy(const std::string& value)
{
    lastUpdatedBy_ = value;
    lastUpdatedByIsSet_ = true;
}

bool ShowProgramResponse::lastUpdatedByIsSet() const
{
    return lastUpdatedByIsSet_;
}

void ShowProgramResponse::unsetlastUpdatedBy()
{
    lastUpdatedByIsSet_ = false;
}

int64_t ShowProgramResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowProgramResponse::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowProgramResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowProgramResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ShowProgramResponse::getProgramName() const
{
    return programName_;
}

void ShowProgramResponse::setProgramName(const std::string& value)
{
    programName_ = value;
    programNameIsSet_ = true;
}

bool ShowProgramResponse::programNameIsSet() const
{
    return programNameIsSet_;
}

void ShowProgramResponse::unsetprogramName()
{
    programNameIsSet_ = false;
}

std::string ShowProgramResponse::getMaterialSizeStr() const
{
    return materialSizeStr_;
}

void ShowProgramResponse::setMaterialSizeStr(const std::string& value)
{
    materialSizeStr_ = value;
    materialSizeStrIsSet_ = true;
}

bool ShowProgramResponse::materialSizeStrIsSet() const
{
    return materialSizeStrIsSet_;
}

void ShowProgramResponse::unsetmaterialSizeStr()
{
    materialSizeStrIsSet_ = false;
}

int32_t ShowProgramResponse::getPlayTime() const
{
    return playTime_;
}

void ShowProgramResponse::setPlayTime(int32_t value)
{
    playTime_ = value;
    playTimeIsSet_ = true;
}

bool ShowProgramResponse::playTimeIsSet() const
{
    return playTimeIsSet_;
}

void ShowProgramResponse::unsetplayTime()
{
    playTimeIsSet_ = false;
}

std::vector<ProgramItemResponseBase>& ShowProgramResponse::getProgramItemList()
{
    return programItemList_;
}

void ShowProgramResponse::setProgramItemList(const std::vector<ProgramItemResponseBase>& value)
{
    programItemList_ = value;
    programItemListIsSet_ = true;
}

bool ShowProgramResponse::programItemListIsSet() const
{
    return programItemListIsSet_;
}

void ShowProgramResponse::unsetprogramItemList()
{
    programItemListIsSet_ = false;
}

}
}
}
}
}


