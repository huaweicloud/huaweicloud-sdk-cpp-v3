

#include "huaweicloud/vod/v1/model/CdnLog.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CdnLog::CdnLog()
{
    domainName_ = "";
    domainNameIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    size_ = 0L;
    sizeIsSet_ = false;
    link_ = "";
    linkIsSet_ = false;
}

CdnLog::~CdnLog() = default;

void CdnLog::validate()
{
}

web::json::value CdnLog::toJson() const
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

bool CdnLog::fromJson(const web::json::value& val)
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


std::string CdnLog::getDomainName() const
{
    return domainName_;
}

void CdnLog::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool CdnLog::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void CdnLog::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string CdnLog::getStartTime() const
{
    return startTime_;
}

void CdnLog::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool CdnLog::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void CdnLog::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string CdnLog::getEndTime() const
{
    return endTime_;
}

void CdnLog::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool CdnLog::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void CdnLog::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string CdnLog::getName() const
{
    return name_;
}

void CdnLog::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CdnLog::nameIsSet() const
{
    return nameIsSet_;
}

void CdnLog::unsetname()
{
    nameIsSet_ = false;
}

int64_t CdnLog::getSize() const
{
    return size_;
}

void CdnLog::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool CdnLog::sizeIsSet() const
{
    return sizeIsSet_;
}

void CdnLog::unsetsize()
{
    sizeIsSet_ = false;
}

std::string CdnLog::getLink() const
{
    return link_;
}

void CdnLog::setLink(const std::string& value)
{
    link_ = value;
    linkIsSet_ = true;
}

bool CdnLog::linkIsSet() const
{
    return linkIsSet_;
}

void CdnLog::unsetlink()
{
    linkIsSet_ = false;
}

}
}
}
}
}


