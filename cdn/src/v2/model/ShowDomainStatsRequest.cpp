

#include "huaweicloud/cdn/v2/model/ShowDomainStatsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ShowDomainStatsRequest::ShowDomainStatsRequest()
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
    groupBy_ = "";
    groupByIsSet_ = false;
    serviceArea_ = "";
    serviceAreaIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

ShowDomainStatsRequest::~ShowDomainStatsRequest() = default;

void ShowDomainStatsRequest::validate()
{
}

web::json::value ShowDomainStatsRequest::toJson() const
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
    if(groupByIsSet_) {
        val[utility::conversions::to_string_t("group_by")] = ModelBase::toJson(groupBy_);
    }
    if(serviceAreaIsSet_) {
        val[utility::conversions::to_string_t("service_area")] = ModelBase::toJson(serviceArea_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool ShowDomainStatsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("group_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupBy(refVal);
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


std::string ShowDomainStatsRequest::getAction() const
{
    return action_;
}

void ShowDomainStatsRequest::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ShowDomainStatsRequest::actionIsSet() const
{
    return actionIsSet_;
}

void ShowDomainStatsRequest::unsetaction()
{
    actionIsSet_ = false;
}

int64_t ShowDomainStatsRequest::getStartTime() const
{
    return startTime_;
}

void ShowDomainStatsRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowDomainStatsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowDomainStatsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ShowDomainStatsRequest::getEndTime() const
{
    return endTime_;
}

void ShowDomainStatsRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowDomainStatsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowDomainStatsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ShowDomainStatsRequest::getDomainName() const
{
    return domainName_;
}

void ShowDomainStatsRequest::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ShowDomainStatsRequest::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ShowDomainStatsRequest::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string ShowDomainStatsRequest::getStatType() const
{
    return statType_;
}

void ShowDomainStatsRequest::setStatType(const std::string& value)
{
    statType_ = value;
    statTypeIsSet_ = true;
}

bool ShowDomainStatsRequest::statTypeIsSet() const
{
    return statTypeIsSet_;
}

void ShowDomainStatsRequest::unsetstatType()
{
    statTypeIsSet_ = false;
}

int64_t ShowDomainStatsRequest::getInterval() const
{
    return interval_;
}

void ShowDomainStatsRequest::setInterval(int64_t value)
{
    interval_ = value;
    intervalIsSet_ = true;
}

bool ShowDomainStatsRequest::intervalIsSet() const
{
    return intervalIsSet_;
}

void ShowDomainStatsRequest::unsetinterval()
{
    intervalIsSet_ = false;
}

std::string ShowDomainStatsRequest::getGroupBy() const
{
    return groupBy_;
}

void ShowDomainStatsRequest::setGroupBy(const std::string& value)
{
    groupBy_ = value;
    groupByIsSet_ = true;
}

bool ShowDomainStatsRequest::groupByIsSet() const
{
    return groupByIsSet_;
}

void ShowDomainStatsRequest::unsetgroupBy()
{
    groupByIsSet_ = false;
}

std::string ShowDomainStatsRequest::getServiceArea() const
{
    return serviceArea_;
}

void ShowDomainStatsRequest::setServiceArea(const std::string& value)
{
    serviceArea_ = value;
    serviceAreaIsSet_ = true;
}

bool ShowDomainStatsRequest::serviceAreaIsSet() const
{
    return serviceAreaIsSet_;
}

void ShowDomainStatsRequest::unsetserviceArea()
{
    serviceAreaIsSet_ = false;
}

std::string ShowDomainStatsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ShowDomainStatsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ShowDomainStatsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ShowDomainStatsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


