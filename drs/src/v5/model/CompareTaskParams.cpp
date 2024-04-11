

#include "huaweicloud/drs/v5/model/CompareTaskParams.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CompareTaskParams::CompareTaskParams()
{
    compareTaskId_ = "";
    compareTaskIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    optionIsSet_ = false;
    dbObjectIsSet_ = false;
    dataProcessInfoIsSet_ = false;
}

CompareTaskParams::~CompareTaskParams() = default;

void CompareTaskParams::validate()
{
}

web::json::value CompareTaskParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(compareTaskIdIsSet_) {
        val[utility::conversions::to_string_t("compare_task_id")] = ModelBase::toJson(compareTaskId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(optionIsSet_) {
        val[utility::conversions::to_string_t("option")] = ModelBase::toJson(option_);
    }
    if(dbObjectIsSet_) {
        val[utility::conversions::to_string_t("db_object")] = ModelBase::toJson(dbObject_);
    }
    if(dataProcessInfoIsSet_) {
        val[utility::conversions::to_string_t("data_process_info")] = ModelBase::toJson(dataProcessInfo_);
    }

    return val;
}
bool CompareTaskParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("compare_task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("option"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("option"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOption(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_object"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_object"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, DatabaseObject> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbObject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_process_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_process_info"));
        if(!fieldValue.is_null())
        {
            std::vector<DataProcessInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataProcessInfo(refVal);
        }
    }
    return ok;
}


std::string CompareTaskParams::getCompareTaskId() const
{
    return compareTaskId_;
}

void CompareTaskParams::setCompareTaskId(const std::string& value)
{
    compareTaskId_ = value;
    compareTaskIdIsSet_ = true;
}

bool CompareTaskParams::compareTaskIdIsSet() const
{
    return compareTaskIdIsSet_;
}

void CompareTaskParams::unsetcompareTaskId()
{
    compareTaskIdIsSet_ = false;
}

std::string CompareTaskParams::getType() const
{
    return type_;
}

void CompareTaskParams::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CompareTaskParams::typeIsSet() const
{
    return typeIsSet_;
}

void CompareTaskParams::unsettype()
{
    typeIsSet_ = false;
}

std::string CompareTaskParams::getStartTime() const
{
    return startTime_;
}

void CompareTaskParams::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool CompareTaskParams::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void CompareTaskParams::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::map<std::string, std::string>& CompareTaskParams::getOption()
{
    return option_;
}

void CompareTaskParams::setOption(const std::map<std::string, std::string>& value)
{
    option_ = value;
    optionIsSet_ = true;
}

bool CompareTaskParams::optionIsSet() const
{
    return optionIsSet_;
}

void CompareTaskParams::unsetoption()
{
    optionIsSet_ = false;
}

std::map<std::string, DatabaseObject>& CompareTaskParams::getDbObject()
{
    return dbObject_;
}

void CompareTaskParams::setDbObject(const std::map<std::string, DatabaseObject>& value)
{
    dbObject_ = value;
    dbObjectIsSet_ = true;
}

bool CompareTaskParams::dbObjectIsSet() const
{
    return dbObjectIsSet_;
}

void CompareTaskParams::unsetdbObject()
{
    dbObjectIsSet_ = false;
}

std::vector<DataProcessInfo>& CompareTaskParams::getDataProcessInfo()
{
    return dataProcessInfo_;
}

void CompareTaskParams::setDataProcessInfo(const std::vector<DataProcessInfo>& value)
{
    dataProcessInfo_ = value;
    dataProcessInfoIsSet_ = true;
}

bool CompareTaskParams::dataProcessInfoIsSet() const
{
    return dataProcessInfoIsSet_;
}

void CompareTaskParams::unsetdataProcessInfo()
{
    dataProcessInfoIsSet_ = false;
}

}
}
}
}
}


