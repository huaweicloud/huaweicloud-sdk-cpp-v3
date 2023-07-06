

#include "huaweicloud/cdn/v2/model/ShowTopDomainNamesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ShowTopDomainNamesRequest::ShowTopDomainNamesRequest()
{
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    statType_ = "";
    statTypeIsSet_ = false;
    serviceArea_ = "";
    serviceAreaIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

ShowTopDomainNamesRequest::~ShowTopDomainNamesRequest() = default;

void ShowTopDomainNamesRequest::validate()
{
}

web::json::value ShowTopDomainNamesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(statTypeIsSet_) {
        val[utility::conversions::to_string_t("stat_type")] = ModelBase::toJson(statType_);
    }
    if(serviceAreaIsSet_) {
        val[utility::conversions::to_string_t("service_area")] = ModelBase::toJson(serviceArea_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}

bool ShowTopDomainNamesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("stat_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stat_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_area"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_area"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceArea(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    return ok;
}

int64_t ShowTopDomainNamesRequest::getStartTime() const
{
    return startTime_;
}

void ShowTopDomainNamesRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowTopDomainNamesRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowTopDomainNamesRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ShowTopDomainNamesRequest::getEndTime() const
{
    return endTime_;
}

void ShowTopDomainNamesRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowTopDomainNamesRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowTopDomainNamesRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ShowTopDomainNamesRequest::getStatType() const
{
    return statType_;
}

void ShowTopDomainNamesRequest::setStatType(const std::string& value)
{
    statType_ = value;
    statTypeIsSet_ = true;
}

bool ShowTopDomainNamesRequest::statTypeIsSet() const
{
    return statTypeIsSet_;
}

void ShowTopDomainNamesRequest::unsetstatType()
{
    statTypeIsSet_ = false;
}

std::string ShowTopDomainNamesRequest::getServiceArea() const
{
    return serviceArea_;
}

void ShowTopDomainNamesRequest::setServiceArea(const std::string& value)
{
    serviceArea_ = value;
    serviceAreaIsSet_ = true;
}

bool ShowTopDomainNamesRequest::serviceAreaIsSet() const
{
    return serviceAreaIsSet_;
}

void ShowTopDomainNamesRequest::unsetserviceArea()
{
    serviceAreaIsSet_ = false;
}

int32_t ShowTopDomainNamesRequest::getLimit() const
{
    return limit_;
}

void ShowTopDomainNamesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowTopDomainNamesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowTopDomainNamesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowTopDomainNamesRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ShowTopDomainNamesRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ShowTopDomainNamesRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ShowTopDomainNamesRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


