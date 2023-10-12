

#include "huaweicloud/cdn/v1/model/DomainItemLocationDetails.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




DomainItemLocationDetails::DomainItemLocationDetails()
{
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    statType_ = "";
    statTypeIsSet_ = false;
    domainsIsSet_ = false;
}

DomainItemLocationDetails::~DomainItemLocationDetails() = default;

void DomainItemLocationDetails::validate()
{
}

web::json::value DomainItemLocationDetails::toJson() const
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
bool DomainItemLocationDetails::fromJson(const web::json::value& val)
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
            std::vector<DomainRegion> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomains(refVal);
        }
    }
    return ok;
}


int64_t DomainItemLocationDetails::getStartTime() const
{
    return startTime_;
}

void DomainItemLocationDetails::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool DomainItemLocationDetails::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void DomainItemLocationDetails::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t DomainItemLocationDetails::getEndTime() const
{
    return endTime_;
}

void DomainItemLocationDetails::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool DomainItemLocationDetails::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void DomainItemLocationDetails::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string DomainItemLocationDetails::getStatType() const
{
    return statType_;
}

void DomainItemLocationDetails::setStatType(const std::string& value)
{
    statType_ = value;
    statTypeIsSet_ = true;
}

bool DomainItemLocationDetails::statTypeIsSet() const
{
    return statTypeIsSet_;
}

void DomainItemLocationDetails::unsetstatType()
{
    statTypeIsSet_ = false;
}

std::vector<DomainRegion>& DomainItemLocationDetails::getDomains()
{
    return domains_;
}

void DomainItemLocationDetails::setDomains(const std::vector<DomainRegion>& value)
{
    domains_ = value;
    domainsIsSet_ = true;
}

bool DomainItemLocationDetails::domainsIsSet() const
{
    return domainsIsSet_;
}

void DomainItemLocationDetails::unsetdomains()
{
    domainsIsSet_ = false;
}

}
}
}
}
}


