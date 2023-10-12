

#include "huaweicloud/cdn/v2/model/ShowTopUrlRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ShowTopUrlRequest::ShowTopUrlRequest()
{
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    statType_ = "";
    statTypeIsSet_ = false;
    serviceArea_ = "";
    serviceAreaIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

ShowTopUrlRequest::~ShowTopUrlRequest() = default;

void ShowTopUrlRequest::validate()
{
}

web::json::value ShowTopUrlRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(statTypeIsSet_) {
        val[utility::conversions::to_string_t("stat_type")] = ModelBase::toJson(statType_);
    }
    if(serviceAreaIsSet_) {
        val[utility::conversions::to_string_t("service_area")] = ModelBase::toJson(serviceArea_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool ShowTopUrlRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
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


int64_t ShowTopUrlRequest::getStartTime() const
{
    return startTime_;
}

void ShowTopUrlRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowTopUrlRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowTopUrlRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ShowTopUrlRequest::getEndTime() const
{
    return endTime_;
}

void ShowTopUrlRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowTopUrlRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowTopUrlRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ShowTopUrlRequest::getDomainName() const
{
    return domainName_;
}

void ShowTopUrlRequest::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ShowTopUrlRequest::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ShowTopUrlRequest::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string ShowTopUrlRequest::getStatType() const
{
    return statType_;
}

void ShowTopUrlRequest::setStatType(const std::string& value)
{
    statType_ = value;
    statTypeIsSet_ = true;
}

bool ShowTopUrlRequest::statTypeIsSet() const
{
    return statTypeIsSet_;
}

void ShowTopUrlRequest::unsetstatType()
{
    statTypeIsSet_ = false;
}

std::string ShowTopUrlRequest::getServiceArea() const
{
    return serviceArea_;
}

void ShowTopUrlRequest::setServiceArea(const std::string& value)
{
    serviceArea_ = value;
    serviceAreaIsSet_ = true;
}

bool ShowTopUrlRequest::serviceAreaIsSet() const
{
    return serviceAreaIsSet_;
}

void ShowTopUrlRequest::unsetserviceArea()
{
    serviceAreaIsSet_ = false;
}

std::string ShowTopUrlRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ShowTopUrlRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ShowTopUrlRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ShowTopUrlRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


