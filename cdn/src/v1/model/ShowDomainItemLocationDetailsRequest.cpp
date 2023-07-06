

#include "huaweicloud/cdn/v1/model/ShowDomainItemLocationDetailsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




ShowDomainItemLocationDetailsRequest::ShowDomainItemLocationDetailsRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    statType_ = "";
    statTypeIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    isp_ = "";
    ispIsSet_ = false;
}

ShowDomainItemLocationDetailsRequest::~ShowDomainItemLocationDetailsRequest() = default;

void ShowDomainItemLocationDetailsRequest::validate()
{
}

web::json::value ShowDomainItemLocationDetailsRequest::toJson() const
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
    if(statTypeIsSet_) {
        val[utility::conversions::to_string_t("stat_type")] = ModelBase::toJson(statType_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(ispIsSet_) {
        val[utility::conversions::to_string_t("isp")] = ModelBase::toJson(isp_);
    }

    return val;
}

bool ShowDomainItemLocationDetailsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("stat_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stat_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsp(refVal);
        }
    }
    return ok;
}

std::string ShowDomainItemLocationDetailsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ShowDomainItemLocationDetailsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ShowDomainItemLocationDetailsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ShowDomainItemLocationDetailsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

int64_t ShowDomainItemLocationDetailsRequest::getStartTime() const
{
    return startTime_;
}

void ShowDomainItemLocationDetailsRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowDomainItemLocationDetailsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowDomainItemLocationDetailsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ShowDomainItemLocationDetailsRequest::getEndTime() const
{
    return endTime_;
}

void ShowDomainItemLocationDetailsRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowDomainItemLocationDetailsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowDomainItemLocationDetailsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ShowDomainItemLocationDetailsRequest::getDomainName() const
{
    return domainName_;
}

void ShowDomainItemLocationDetailsRequest::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ShowDomainItemLocationDetailsRequest::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ShowDomainItemLocationDetailsRequest::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string ShowDomainItemLocationDetailsRequest::getStatType() const
{
    return statType_;
}

void ShowDomainItemLocationDetailsRequest::setStatType(const std::string& value)
{
    statType_ = value;
    statTypeIsSet_ = true;
}

bool ShowDomainItemLocationDetailsRequest::statTypeIsSet() const
{
    return statTypeIsSet_;
}

void ShowDomainItemLocationDetailsRequest::unsetstatType()
{
    statTypeIsSet_ = false;
}

std::string ShowDomainItemLocationDetailsRequest::getRegion() const
{
    return region_;
}

void ShowDomainItemLocationDetailsRequest::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ShowDomainItemLocationDetailsRequest::regionIsSet() const
{
    return regionIsSet_;
}

void ShowDomainItemLocationDetailsRequest::unsetregion()
{
    regionIsSet_ = false;
}

std::string ShowDomainItemLocationDetailsRequest::getIsp() const
{
    return isp_;
}

void ShowDomainItemLocationDetailsRequest::setIsp(const std::string& value)
{
    isp_ = value;
    ispIsSet_ = true;
}

bool ShowDomainItemLocationDetailsRequest::ispIsSet() const
{
    return ispIsSet_;
}

void ShowDomainItemLocationDetailsRequest::unsetisp()
{
    ispIsSet_ = false;
}

}
}
}
}
}


