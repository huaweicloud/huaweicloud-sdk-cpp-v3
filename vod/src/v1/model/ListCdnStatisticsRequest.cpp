

#include "huaweicloud/vod/v1/model/ListCdnStatisticsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ListCdnStatisticsRequest::ListCdnStatisticsRequest()
{
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

ListCdnStatisticsRequest::~ListCdnStatisticsRequest() = default;

void ListCdnStatisticsRequest::validate()
{
}

web::json::value ListCdnStatisticsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool ListCdnStatisticsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string ListCdnStatisticsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListCdnStatisticsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListCdnStatisticsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListCdnStatisticsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListCdnStatisticsRequest::getStartTime() const
{
    return startTime_;
}

void ListCdnStatisticsRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListCdnStatisticsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListCdnStatisticsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListCdnStatisticsRequest::getEndTime() const
{
    return endTime_;
}

void ListCdnStatisticsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListCdnStatisticsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListCdnStatisticsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListCdnStatisticsRequest::getStatType() const
{
    return statType_;
}

void ListCdnStatisticsRequest::setStatType(const std::string& value)
{
    statType_ = value;
    statTypeIsSet_ = true;
}

bool ListCdnStatisticsRequest::statTypeIsSet() const
{
    return statTypeIsSet_;
}

void ListCdnStatisticsRequest::unsetstatType()
{
    statTypeIsSet_ = false;
}

std::string ListCdnStatisticsRequest::getDomain() const
{
    return domain_;
}

void ListCdnStatisticsRequest::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ListCdnStatisticsRequest::domainIsSet() const
{
    return domainIsSet_;
}

void ListCdnStatisticsRequest::unsetdomain()
{
    domainIsSet_ = false;
}

int32_t ListCdnStatisticsRequest::getInterval() const
{
    return interval_;
}

void ListCdnStatisticsRequest::setInterval(int32_t value)
{
    interval_ = value;
    intervalIsSet_ = true;
}

bool ListCdnStatisticsRequest::intervalIsSet() const
{
    return intervalIsSet_;
}

void ListCdnStatisticsRequest::unsetinterval()
{
    intervalIsSet_ = false;
}

}
}
}
}
}


