

#include "huaweicloud/cdn/v1/model/DomainItemDetail.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




DomainItemDetail::DomainItemDetail()
{
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    statType_ = "";
    statTypeIsSet_ = false;
    domainsIsSet_ = false;
}

DomainItemDetail::~DomainItemDetail() = default;

void DomainItemDetail::validate()
{
}

web::json::value DomainItemDetail::toJson() const
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
    if(domainsIsSet_) {
        val[utility::conversions::to_string_t("domains")] = ModelBase::toJson(domains_);
    }

    return val;
}

bool DomainItemDetail::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("domains"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domains"));
        if(!fieldValue.is_null())
        {
            std::vector<std::map<std::string, Object>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomains(refVal);
        }
    }
    return ok;
}

int64_t DomainItemDetail::getStartTime() const
{
    return startTime_;
}

void DomainItemDetail::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool DomainItemDetail::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void DomainItemDetail::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t DomainItemDetail::getEndTime() const
{
    return endTime_;
}

void DomainItemDetail::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool DomainItemDetail::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void DomainItemDetail::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string DomainItemDetail::getStatType() const
{
    return statType_;
}

void DomainItemDetail::setStatType(const std::string& value)
{
    statType_ = value;
    statTypeIsSet_ = true;
}

bool DomainItemDetail::statTypeIsSet() const
{
    return statTypeIsSet_;
}

void DomainItemDetail::unsetstatType()
{
    statTypeIsSet_ = false;
}

std::vector<std::map<std::string, Object>>& DomainItemDetail::getDomains()
{
    return domains_;
}

void DomainItemDetail::setDomains(const std::vector<std::map<std::string, Object>>& value)
{
    domains_ = value;
    domainsIsSet_ = true;
}

bool DomainItemDetail::domainsIsSet() const
{
    return domainsIsSet_;
}

void DomainItemDetail::unsetdomains()
{
    domainsIsSet_ = false;
}

}
}
}
}
}


