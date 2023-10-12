

#include "huaweicloud/cdn/v2/model/ShowDomainLocationStatsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ShowDomainLocationStatsRequest::ShowDomainLocationStatsRequest()
{
    action_ = "";
    actionIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    statType_ = "";
    statTypeIsSet_ = false;
    interval_ = 0L;
    intervalIsSet_ = false;
    country_ = "";
    countryIsSet_ = false;
    province_ = "";
    provinceIsSet_ = false;
    isp_ = "";
    ispIsSet_ = false;
    groupBy_ = "";
    groupByIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

ShowDomainLocationStatsRequest::~ShowDomainLocationStatsRequest() = default;

void ShowDomainLocationStatsRequest::validate()
{
}

web::json::value ShowDomainLocationStatsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
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
    if(intervalIsSet_) {
        val[utility::conversions::to_string_t("interval")] = ModelBase::toJson(interval_);
    }
    if(countryIsSet_) {
        val[utility::conversions::to_string_t("country")] = ModelBase::toJson(country_);
    }
    if(provinceIsSet_) {
        val[utility::conversions::to_string_t("province")] = ModelBase::toJson(province_);
    }
    if(ispIsSet_) {
        val[utility::conversions::to_string_t("isp")] = ModelBase::toJson(isp_);
    }
    if(groupByIsSet_) {
        val[utility::conversions::to_string_t("group_by")] = ModelBase::toJson(groupBy_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool ShowDomainLocationStatsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interval"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInterval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("country"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("country"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCountry(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("province"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("province"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProvince(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("group_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupBy(refVal);
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


std::string ShowDomainLocationStatsRequest::getAction() const
{
    return action_;
}

void ShowDomainLocationStatsRequest::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ShowDomainLocationStatsRequest::actionIsSet() const
{
    return actionIsSet_;
}

void ShowDomainLocationStatsRequest::unsetaction()
{
    actionIsSet_ = false;
}

int64_t ShowDomainLocationStatsRequest::getStartTime() const
{
    return startTime_;
}

void ShowDomainLocationStatsRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowDomainLocationStatsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowDomainLocationStatsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ShowDomainLocationStatsRequest::getEndTime() const
{
    return endTime_;
}

void ShowDomainLocationStatsRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowDomainLocationStatsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowDomainLocationStatsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ShowDomainLocationStatsRequest::getDomainName() const
{
    return domainName_;
}

void ShowDomainLocationStatsRequest::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ShowDomainLocationStatsRequest::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ShowDomainLocationStatsRequest::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string ShowDomainLocationStatsRequest::getStatType() const
{
    return statType_;
}

void ShowDomainLocationStatsRequest::setStatType(const std::string& value)
{
    statType_ = value;
    statTypeIsSet_ = true;
}

bool ShowDomainLocationStatsRequest::statTypeIsSet() const
{
    return statTypeIsSet_;
}

void ShowDomainLocationStatsRequest::unsetstatType()
{
    statTypeIsSet_ = false;
}

int64_t ShowDomainLocationStatsRequest::getInterval() const
{
    return interval_;
}

void ShowDomainLocationStatsRequest::setInterval(int64_t value)
{
    interval_ = value;
    intervalIsSet_ = true;
}

bool ShowDomainLocationStatsRequest::intervalIsSet() const
{
    return intervalIsSet_;
}

void ShowDomainLocationStatsRequest::unsetinterval()
{
    intervalIsSet_ = false;
}

std::string ShowDomainLocationStatsRequest::getCountry() const
{
    return country_;
}

void ShowDomainLocationStatsRequest::setCountry(const std::string& value)
{
    country_ = value;
    countryIsSet_ = true;
}

bool ShowDomainLocationStatsRequest::countryIsSet() const
{
    return countryIsSet_;
}

void ShowDomainLocationStatsRequest::unsetcountry()
{
    countryIsSet_ = false;
}

std::string ShowDomainLocationStatsRequest::getProvince() const
{
    return province_;
}

void ShowDomainLocationStatsRequest::setProvince(const std::string& value)
{
    province_ = value;
    provinceIsSet_ = true;
}

bool ShowDomainLocationStatsRequest::provinceIsSet() const
{
    return provinceIsSet_;
}

void ShowDomainLocationStatsRequest::unsetprovince()
{
    provinceIsSet_ = false;
}

std::string ShowDomainLocationStatsRequest::getIsp() const
{
    return isp_;
}

void ShowDomainLocationStatsRequest::setIsp(const std::string& value)
{
    isp_ = value;
    ispIsSet_ = true;
}

bool ShowDomainLocationStatsRequest::ispIsSet() const
{
    return ispIsSet_;
}

void ShowDomainLocationStatsRequest::unsetisp()
{
    ispIsSet_ = false;
}

std::string ShowDomainLocationStatsRequest::getGroupBy() const
{
    return groupBy_;
}

void ShowDomainLocationStatsRequest::setGroupBy(const std::string& value)
{
    groupBy_ = value;
    groupByIsSet_ = true;
}

bool ShowDomainLocationStatsRequest::groupByIsSet() const
{
    return groupByIsSet_;
}

void ShowDomainLocationStatsRequest::unsetgroupBy()
{
    groupByIsSet_ = false;
}

std::string ShowDomainLocationStatsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ShowDomainLocationStatsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ShowDomainLocationStatsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ShowDomainLocationStatsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


