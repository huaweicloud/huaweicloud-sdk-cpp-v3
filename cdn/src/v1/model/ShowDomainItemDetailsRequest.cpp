

#include "huaweicloud/cdn/v1/model/ShowDomainItemDetailsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




ShowDomainItemDetailsRequest::ShowDomainItemDetailsRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    serviceArea_ = "";
    serviceAreaIsSet_ = false;
    statType_ = "";
    statTypeIsSet_ = false;
}

ShowDomainItemDetailsRequest::~ShowDomainItemDetailsRequest() = default;

void ShowDomainItemDetailsRequest::validate()
{
}

web::json::value ShowDomainItemDetailsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(serviceAreaIsSet_) {
        val[utility::conversions::to_string_t("service_area")] = ModelBase::toJson(serviceArea_);
    }
    if(statTypeIsSet_) {
        val[utility::conversions::to_string_t("stat_type")] = ModelBase::toJson(statType_);
    }

    return val;
}
bool ShowDomainItemDetailsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("stat_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stat_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatType(refVal);
        }
    }
    return ok;
}


std::string ShowDomainItemDetailsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ShowDomainItemDetailsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ShowDomainItemDetailsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ShowDomainItemDetailsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

int64_t ShowDomainItemDetailsRequest::getStartTime() const
{
    return startTime_;
}

void ShowDomainItemDetailsRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowDomainItemDetailsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowDomainItemDetailsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ShowDomainItemDetailsRequest::getEndTime() const
{
    return endTime_;
}

void ShowDomainItemDetailsRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowDomainItemDetailsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowDomainItemDetailsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ShowDomainItemDetailsRequest::getDomainName() const
{
    return domainName_;
}

void ShowDomainItemDetailsRequest::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ShowDomainItemDetailsRequest::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ShowDomainItemDetailsRequest::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string ShowDomainItemDetailsRequest::getServiceArea() const
{
    return serviceArea_;
}

void ShowDomainItemDetailsRequest::setServiceArea(const std::string& value)
{
    serviceArea_ = value;
    serviceAreaIsSet_ = true;
}

bool ShowDomainItemDetailsRequest::serviceAreaIsSet() const
{
    return serviceAreaIsSet_;
}

void ShowDomainItemDetailsRequest::unsetserviceArea()
{
    serviceAreaIsSet_ = false;
}

std::string ShowDomainItemDetailsRequest::getStatType() const
{
    return statType_;
}

void ShowDomainItemDetailsRequest::setStatType(const std::string& value)
{
    statType_ = value;
    statTypeIsSet_ = true;
}

bool ShowDomainItemDetailsRequest::statTypeIsSet() const
{
    return statTypeIsSet_;
}

void ShowDomainItemDetailsRequest::unsetstatType()
{
    statTypeIsSet_ = false;
}

}
}
}
}
}


