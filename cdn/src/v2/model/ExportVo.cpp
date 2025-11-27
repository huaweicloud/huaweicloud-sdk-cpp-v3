

#include "huaweicloud/cdn/v2/model/ExportVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ExportVo::ExportVo()
{
    action_ = "";
    actionIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    groupBy_ = "";
    groupByIsSet_ = false;
    serviceArea_ = "";
    serviceAreaIsSet_ = false;
    statType_ = "";
    statTypeIsSet_ = false;
    country_ = "";
    countryIsSet_ = false;
}

ExportVo::~ExportVo() = default;

void ExportVo::validate()
{
}

web::json::value ExportVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(groupByIsSet_) {
        val[utility::conversions::to_string_t("group_by")] = ModelBase::toJson(groupBy_);
    }
    if(serviceAreaIsSet_) {
        val[utility::conversions::to_string_t("service_area")] = ModelBase::toJson(serviceArea_);
    }
    if(statTypeIsSet_) {
        val[utility::conversions::to_string_t("stat_type")] = ModelBase::toJson(statType_);
    }
    if(countryIsSet_) {
        val[utility::conversions::to_string_t("country")] = ModelBase::toJson(country_);
    }

    return val;
}
bool ExportVo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
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
    return ok;
}


std::string ExportVo::getAction() const
{
    return action_;
}

void ExportVo::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ExportVo::actionIsSet() const
{
    return actionIsSet_;
}

void ExportVo::unsetaction()
{
    actionIsSet_ = false;
}

std::string ExportVo::getDomainName() const
{
    return domainName_;
}

void ExportVo::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ExportVo::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ExportVo::unsetdomainName()
{
    domainNameIsSet_ = false;
}

int64_t ExportVo::getStartTime() const
{
    return startTime_;
}

void ExportVo::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ExportVo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ExportVo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ExportVo::getEndTime() const
{
    return endTime_;
}

void ExportVo::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ExportVo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ExportVo::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ExportVo::getGroupBy() const
{
    return groupBy_;
}

void ExportVo::setGroupBy(const std::string& value)
{
    groupBy_ = value;
    groupByIsSet_ = true;
}

bool ExportVo::groupByIsSet() const
{
    return groupByIsSet_;
}

void ExportVo::unsetgroupBy()
{
    groupByIsSet_ = false;
}

std::string ExportVo::getServiceArea() const
{
    return serviceArea_;
}

void ExportVo::setServiceArea(const std::string& value)
{
    serviceArea_ = value;
    serviceAreaIsSet_ = true;
}

bool ExportVo::serviceAreaIsSet() const
{
    return serviceAreaIsSet_;
}

void ExportVo::unsetserviceArea()
{
    serviceAreaIsSet_ = false;
}

std::string ExportVo::getStatType() const
{
    return statType_;
}

void ExportVo::setStatType(const std::string& value)
{
    statType_ = value;
    statTypeIsSet_ = true;
}

bool ExportVo::statTypeIsSet() const
{
    return statTypeIsSet_;
}

void ExportVo::unsetstatType()
{
    statTypeIsSet_ = false;
}

std::string ExportVo::getCountry() const
{
    return country_;
}

void ExportVo::setCountry(const std::string& value)
{
    country_ = value;
    countryIsSet_ = true;
}

bool ExportVo::countryIsSet() const
{
    return countryIsSet_;
}

void ExportVo::unsetcountry()
{
    countryIsSet_ = false;
}

}
}
}
}
}


