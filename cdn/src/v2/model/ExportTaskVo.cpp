

#include "huaweicloud/cdn/v2/model/ExportTaskVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ExportTaskVo::ExportTaskVo()
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
    interval_ = 0L;
    intervalIsSet_ = false;
    serviceArea_ = "";
    serviceAreaIsSet_ = false;
    statType_ = "";
    statTypeIsSet_ = false;
    country_ = "";
    countryIsSet_ = false;
    province_ = "";
    provinceIsSet_ = false;
    isp_ = "";
    ispIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
}

ExportTaskVo::~ExportTaskVo() = default;

void ExportTaskVo::validate()
{
}

web::json::value ExportTaskVo::toJson() const
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
    if(intervalIsSet_) {
        val[utility::conversions::to_string_t("interval")] = ModelBase::toJson(interval_);
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
    if(provinceIsSet_) {
        val[utility::conversions::to_string_t("province")] = ModelBase::toJson(province_);
    }
    if(ispIsSet_) {
        val[utility::conversions::to_string_t("isp")] = ModelBase::toJson(isp_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }

    return val;
}
bool ExportTaskVo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interval"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInterval(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    return ok;
}


std::string ExportTaskVo::getAction() const
{
    return action_;
}

void ExportTaskVo::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ExportTaskVo::actionIsSet() const
{
    return actionIsSet_;
}

void ExportTaskVo::unsetaction()
{
    actionIsSet_ = false;
}

std::string ExportTaskVo::getDomainName() const
{
    return domainName_;
}

void ExportTaskVo::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ExportTaskVo::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ExportTaskVo::unsetdomainName()
{
    domainNameIsSet_ = false;
}

int64_t ExportTaskVo::getStartTime() const
{
    return startTime_;
}

void ExportTaskVo::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ExportTaskVo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ExportTaskVo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ExportTaskVo::getEndTime() const
{
    return endTime_;
}

void ExportTaskVo::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ExportTaskVo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ExportTaskVo::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ExportTaskVo::getGroupBy() const
{
    return groupBy_;
}

void ExportTaskVo::setGroupBy(const std::string& value)
{
    groupBy_ = value;
    groupByIsSet_ = true;
}

bool ExportTaskVo::groupByIsSet() const
{
    return groupByIsSet_;
}

void ExportTaskVo::unsetgroupBy()
{
    groupByIsSet_ = false;
}

int64_t ExportTaskVo::getInterval() const
{
    return interval_;
}

void ExportTaskVo::setInterval(int64_t value)
{
    interval_ = value;
    intervalIsSet_ = true;
}

bool ExportTaskVo::intervalIsSet() const
{
    return intervalIsSet_;
}

void ExportTaskVo::unsetinterval()
{
    intervalIsSet_ = false;
}

std::string ExportTaskVo::getServiceArea() const
{
    return serviceArea_;
}

void ExportTaskVo::setServiceArea(const std::string& value)
{
    serviceArea_ = value;
    serviceAreaIsSet_ = true;
}

bool ExportTaskVo::serviceAreaIsSet() const
{
    return serviceAreaIsSet_;
}

void ExportTaskVo::unsetserviceArea()
{
    serviceAreaIsSet_ = false;
}

std::string ExportTaskVo::getStatType() const
{
    return statType_;
}

void ExportTaskVo::setStatType(const std::string& value)
{
    statType_ = value;
    statTypeIsSet_ = true;
}

bool ExportTaskVo::statTypeIsSet() const
{
    return statTypeIsSet_;
}

void ExportTaskVo::unsetstatType()
{
    statTypeIsSet_ = false;
}

std::string ExportTaskVo::getCountry() const
{
    return country_;
}

void ExportTaskVo::setCountry(const std::string& value)
{
    country_ = value;
    countryIsSet_ = true;
}

bool ExportTaskVo::countryIsSet() const
{
    return countryIsSet_;
}

void ExportTaskVo::unsetcountry()
{
    countryIsSet_ = false;
}

std::string ExportTaskVo::getProvince() const
{
    return province_;
}

void ExportTaskVo::setProvince(const std::string& value)
{
    province_ = value;
    provinceIsSet_ = true;
}

bool ExportTaskVo::provinceIsSet() const
{
    return provinceIsSet_;
}

void ExportTaskVo::unsetprovince()
{
    provinceIsSet_ = false;
}

std::string ExportTaskVo::getIsp() const
{
    return isp_;
}

void ExportTaskVo::setIsp(const std::string& value)
{
    isp_ = value;
    ispIsSet_ = true;
}

bool ExportTaskVo::ispIsSet() const
{
    return ispIsSet_;
}

void ExportTaskVo::unsetisp()
{
    ispIsSet_ = false;
}

std::string ExportTaskVo::getLanguage() const
{
    return language_;
}

void ExportTaskVo::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool ExportTaskVo::languageIsSet() const
{
    return languageIsSet_;
}

void ExportTaskVo::unsetlanguage()
{
    languageIsSet_ = false;
}

}
}
}
}
}


