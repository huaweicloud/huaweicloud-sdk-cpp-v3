

#include "huaweicloud/live/v1/model/LogInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




LogInfo::LogInfo()
{
    name_ = "";
    nameIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    size_ = 0L;
    sizeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

LogInfo::~LogInfo() = default;

void LogInfo::validate()
{
}

web::json::value LogInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}

bool LogInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}

std::string LogInfo::getName() const
{
    return name_;
}

void LogInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool LogInfo::nameIsSet() const
{
    return nameIsSet_;
}

void LogInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string LogInfo::getUrl() const
{
    return url_;
}

void LogInfo::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool LogInfo::urlIsSet() const
{
    return urlIsSet_;
}

void LogInfo::unseturl()
{
    urlIsSet_ = false;
}

int64_t LogInfo::getSize() const
{
    return size_;
}

void LogInfo::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool LogInfo::sizeIsSet() const
{
    return sizeIsSet_;
}

void LogInfo::unsetsize()
{
    sizeIsSet_ = false;
}

std::string LogInfo::getStartTime() const
{
    return startTime_;
}

void LogInfo::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool LogInfo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void LogInfo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string LogInfo::getEndTime() const
{
    return endTime_;
}

void LogInfo::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool LogInfo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void LogInfo::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


