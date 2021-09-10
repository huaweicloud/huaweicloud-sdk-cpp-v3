

#include "huaweicloud/vod/v1/model/ShowCdnStatisticsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ShowCdnStatisticsRequest::ShowCdnStatisticsRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    statType_ = "";
    statTypeIsSet_ = false;
    domain_ = "";
    domainIsSet_ = false;
    interval_ = 0;
    intervalIsSet_ = false;
}

ShowCdnStatisticsRequest::~ShowCdnStatisticsRequest() = default;

void ShowCdnStatisticsRequest::validate()
{
}

web::json::value ShowCdnStatisticsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(statTypeIsSet_) {
        val[utility::conversions::to_string_t("stat_type")] = ModelBase::toJson(statType_);
    }
    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(intervalIsSet_) {
        val[utility::conversions::to_string_t("interval")] = ModelBase::toJson(interval_);
    }

    return val;
}

bool ShowCdnStatisticsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Authorization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("stat_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stat_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interval"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInterval(refVal);
        }
    }
    return ok;
}


std::string ShowCdnStatisticsRequest::getAuthorization() const
{
    return authorization_;
}

void ShowCdnStatisticsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowCdnStatisticsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowCdnStatisticsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowCdnStatisticsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowCdnStatisticsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowCdnStatisticsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowCdnStatisticsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowCdnStatisticsRequest::getStartTime() const
{
    return startTime_;
}

void ShowCdnStatisticsRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowCdnStatisticsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowCdnStatisticsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ShowCdnStatisticsRequest::getEndTime() const
{
    return endTime_;
}

void ShowCdnStatisticsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowCdnStatisticsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowCdnStatisticsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ShowCdnStatisticsRequest::getStatType() const
{
    return statType_;
}

void ShowCdnStatisticsRequest::setStatType(const std::string& value)
{
    statType_ = value;
    statTypeIsSet_ = true;
}

bool ShowCdnStatisticsRequest::statTypeIsSet() const
{
    return statTypeIsSet_;
}

void ShowCdnStatisticsRequest::unsetstatType()
{
    statTypeIsSet_ = false;
}

std::string ShowCdnStatisticsRequest::getDomain() const
{
    return domain_;
}

void ShowCdnStatisticsRequest::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ShowCdnStatisticsRequest::domainIsSet() const
{
    return domainIsSet_;
}

void ShowCdnStatisticsRequest::unsetdomain()
{
    domainIsSet_ = false;
}

int32_t ShowCdnStatisticsRequest::getInterval() const
{
    return interval_;
}

void ShowCdnStatisticsRequest::setInterval(int32_t value)
{
    interval_ = value;
    intervalIsSet_ = true;
}

bool ShowCdnStatisticsRequest::intervalIsSet() const
{
    return intervalIsSet_;
}

void ShowCdnStatisticsRequest::unsetinterval()
{
    intervalIsSet_ = false;
}

}
}
}
}
}


