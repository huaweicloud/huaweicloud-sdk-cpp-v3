

#include "huaweicloud/aad/v2/model/ShowWafQpsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ShowWafQpsRequest::ShowWafQpsRequest()
{
    recent_ = "";
    recentIsSet_ = false;
    domains_ = "";
    domainsIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    overseasType_ = 0;
    overseasTypeIsSet_ = false;
}

ShowWafQpsRequest::~ShowWafQpsRequest() = default;

void ShowWafQpsRequest::validate()
{
}

web::json::value ShowWafQpsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recentIsSet_) {
        val[utility::conversions::to_string_t("recent")] = ModelBase::toJson(recent_);
    }
    if(domainsIsSet_) {
        val[utility::conversions::to_string_t("domains")] = ModelBase::toJson(domains_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(overseasTypeIsSet_) {
        val[utility::conversions::to_string_t("overseas_type")] = ModelBase::toJson(overseasType_);
    }

    return val;
}
bool ShowWafQpsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("recent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recent"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domains"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domains"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomains(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("overseas_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("overseas_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOverseasType(refVal);
        }
    }
    return ok;
}


std::string ShowWafQpsRequest::getRecent() const
{
    return recent_;
}

void ShowWafQpsRequest::setRecent(const std::string& value)
{
    recent_ = value;
    recentIsSet_ = true;
}

bool ShowWafQpsRequest::recentIsSet() const
{
    return recentIsSet_;
}

void ShowWafQpsRequest::unsetrecent()
{
    recentIsSet_ = false;
}

std::string ShowWafQpsRequest::getDomains() const
{
    return domains_;
}

void ShowWafQpsRequest::setDomains(const std::string& value)
{
    domains_ = value;
    domainsIsSet_ = true;
}

bool ShowWafQpsRequest::domainsIsSet() const
{
    return domainsIsSet_;
}

void ShowWafQpsRequest::unsetdomains()
{
    domainsIsSet_ = false;
}

std::string ShowWafQpsRequest::getStartTime() const
{
    return startTime_;
}

void ShowWafQpsRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowWafQpsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowWafQpsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ShowWafQpsRequest::getEndTime() const
{
    return endTime_;
}

void ShowWafQpsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowWafQpsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowWafQpsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ShowWafQpsRequest::getOverseasType() const
{
    return overseasType_;
}

void ShowWafQpsRequest::setOverseasType(int32_t value)
{
    overseasType_ = value;
    overseasTypeIsSet_ = true;
}

bool ShowWafQpsRequest::overseasTypeIsSet() const
{
    return overseasTypeIsSet_;
}

void ShowWafQpsRequest::unsetoverseasType()
{
    overseasTypeIsSet_ = false;
}

}
}
}
}
}


