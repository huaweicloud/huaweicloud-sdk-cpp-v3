

#include "huaweicloud/cdn/v1/model/LogObject.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




LogObject::LogObject()
{
    domainName_ = "";
    domainNameIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    size_ = 0L;
    sizeIsSet_ = false;
    link_ = "";
    linkIsSet_ = false;
}

LogObject::~LogObject() = default;

void LogObject::validate()
{
}

web::json::value LogObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(linkIsSet_) {
        val[utility::conversions::to_string_t("link")] = ModelBase::toJson(link_);
    }

    return val;
}

bool LogObject::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("link"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLink(refVal);
        }
    }
    return ok;
}

std::string LogObject::getDomainName() const
{
    return domainName_;
}

void LogObject::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool LogObject::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void LogObject::unsetdomainName()
{
    domainNameIsSet_ = false;
}

int64_t LogObject::getStartTime() const
{
    return startTime_;
}

void LogObject::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool LogObject::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void LogObject::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t LogObject::getEndTime() const
{
    return endTime_;
}

void LogObject::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool LogObject::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void LogObject::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string LogObject::getName() const
{
    return name_;
}

void LogObject::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool LogObject::nameIsSet() const
{
    return nameIsSet_;
}

void LogObject::unsetname()
{
    nameIsSet_ = false;
}

int64_t LogObject::getSize() const
{
    return size_;
}

void LogObject::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool LogObject::sizeIsSet() const
{
    return sizeIsSet_;
}

void LogObject::unsetsize()
{
    sizeIsSet_ = false;
}

std::string LogObject::getLink() const
{
    return link_;
}

void LogObject::setLink(const std::string& value)
{
    link_ = value;
    linkIsSet_ = true;
}

bool LogObject::linkIsSet() const
{
    return linkIsSet_;
}

void LogObject::unsetlink()
{
    linkIsSet_ = false;
}

}
}
}
}
}


