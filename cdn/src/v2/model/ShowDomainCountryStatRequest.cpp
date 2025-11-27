

#include "huaweicloud/cdn/v2/model/ShowDomainCountryStatRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ShowDomainCountryStatRequest::ShowDomainCountryStatRequest()
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
    country_ = "";
    countryIsSet_ = false;
    groupBy_ = "";
    groupByIsSet_ = false;
    userDomainId_ = "";
    userDomainIdIsSet_ = false;
}

ShowDomainCountryStatRequest::~ShowDomainCountryStatRequest() = default;

void ShowDomainCountryStatRequest::validate()
{
}

web::json::value ShowDomainCountryStatRequest::toJson() const
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
    if(countryIsSet_) {
        val[utility::conversions::to_string_t("country")] = ModelBase::toJson(country_);
    }
    if(groupByIsSet_) {
        val[utility::conversions::to_string_t("group_by")] = ModelBase::toJson(groupBy_);
    }
    if(userDomainIdIsSet_) {
        val[utility::conversions::to_string_t("user_domain_id")] = ModelBase::toJson(userDomainId_);
    }

    return val;
}
bool ShowDomainCountryStatRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("country"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("country"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCountry(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("user_domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserDomainId(refVal);
        }
    }
    return ok;
}


std::string ShowDomainCountryStatRequest::getAction() const
{
    return action_;
}

void ShowDomainCountryStatRequest::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ShowDomainCountryStatRequest::actionIsSet() const
{
    return actionIsSet_;
}

void ShowDomainCountryStatRequest::unsetaction()
{
    actionIsSet_ = false;
}

int64_t ShowDomainCountryStatRequest::getStartTime() const
{
    return startTime_;
}

void ShowDomainCountryStatRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowDomainCountryStatRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowDomainCountryStatRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ShowDomainCountryStatRequest::getEndTime() const
{
    return endTime_;
}

void ShowDomainCountryStatRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowDomainCountryStatRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowDomainCountryStatRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ShowDomainCountryStatRequest::getDomainName() const
{
    return domainName_;
}

void ShowDomainCountryStatRequest::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ShowDomainCountryStatRequest::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ShowDomainCountryStatRequest::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string ShowDomainCountryStatRequest::getStatType() const
{
    return statType_;
}

void ShowDomainCountryStatRequest::setStatType(const std::string& value)
{
    statType_ = value;
    statTypeIsSet_ = true;
}

bool ShowDomainCountryStatRequest::statTypeIsSet() const
{
    return statTypeIsSet_;
}

void ShowDomainCountryStatRequest::unsetstatType()
{
    statTypeIsSet_ = false;
}

std::string ShowDomainCountryStatRequest::getCountry() const
{
    return country_;
}

void ShowDomainCountryStatRequest::setCountry(const std::string& value)
{
    country_ = value;
    countryIsSet_ = true;
}

bool ShowDomainCountryStatRequest::countryIsSet() const
{
    return countryIsSet_;
}

void ShowDomainCountryStatRequest::unsetcountry()
{
    countryIsSet_ = false;
}

std::string ShowDomainCountryStatRequest::getGroupBy() const
{
    return groupBy_;
}

void ShowDomainCountryStatRequest::setGroupBy(const std::string& value)
{
    groupBy_ = value;
    groupByIsSet_ = true;
}

bool ShowDomainCountryStatRequest::groupByIsSet() const
{
    return groupByIsSet_;
}

void ShowDomainCountryStatRequest::unsetgroupBy()
{
    groupByIsSet_ = false;
}

std::string ShowDomainCountryStatRequest::getUserDomainId() const
{
    return userDomainId_;
}

void ShowDomainCountryStatRequest::setUserDomainId(const std::string& value)
{
    userDomainId_ = value;
    userDomainIdIsSet_ = true;
}

bool ShowDomainCountryStatRequest::userDomainIdIsSet() const
{
    return userDomainIdIsSet_;
}

void ShowDomainCountryStatRequest::unsetuserDomainId()
{
    userDomainIdIsSet_ = false;
}

}
}
}
}
}


