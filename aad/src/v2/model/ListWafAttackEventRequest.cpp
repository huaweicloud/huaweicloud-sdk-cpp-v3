

#include "huaweicloud/aad/v2/model/ListWafAttackEventRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ListWafAttackEventRequest::ListWafAttackEventRequest()
{
    domains_ = "";
    domainsIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    recent_ = "";
    recentIsSet_ = false;
    overseasType_ = 0;
    overseasTypeIsSet_ = false;
    sip_ = "";
    sipIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListWafAttackEventRequest::~ListWafAttackEventRequest() = default;

void ListWafAttackEventRequest::validate()
{
}

web::json::value ListWafAttackEventRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainsIsSet_) {
        val[utility::conversions::to_string_t("domains")] = ModelBase::toJson(domains_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(recentIsSet_) {
        val[utility::conversions::to_string_t("recent")] = ModelBase::toJson(recent_);
    }
    if(overseasTypeIsSet_) {
        val[utility::conversions::to_string_t("overseas_type")] = ModelBase::toJson(overseasType_);
    }
    if(sipIsSet_) {
        val[utility::conversions::to_string_t("sip")] = ModelBase::toJson(sip_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListWafAttackEventRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domains"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domains"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomains(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recent"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("overseas_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("overseas_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOverseasType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSip(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::string ListWafAttackEventRequest::getDomains() const
{
    return domains_;
}

void ListWafAttackEventRequest::setDomains(const std::string& value)
{
    domains_ = value;
    domainsIsSet_ = true;
}

bool ListWafAttackEventRequest::domainsIsSet() const
{
    return domainsIsSet_;
}

void ListWafAttackEventRequest::unsetdomains()
{
    domainsIsSet_ = false;
}

std::string ListWafAttackEventRequest::getStartTime() const
{
    return startTime_;
}

void ListWafAttackEventRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListWafAttackEventRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListWafAttackEventRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListWafAttackEventRequest::getEndTime() const
{
    return endTime_;
}

void ListWafAttackEventRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListWafAttackEventRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListWafAttackEventRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListWafAttackEventRequest::getRecent() const
{
    return recent_;
}

void ListWafAttackEventRequest::setRecent(const std::string& value)
{
    recent_ = value;
    recentIsSet_ = true;
}

bool ListWafAttackEventRequest::recentIsSet() const
{
    return recentIsSet_;
}

void ListWafAttackEventRequest::unsetrecent()
{
    recentIsSet_ = false;
}

int32_t ListWafAttackEventRequest::getOverseasType() const
{
    return overseasType_;
}

void ListWafAttackEventRequest::setOverseasType(int32_t value)
{
    overseasType_ = value;
    overseasTypeIsSet_ = true;
}

bool ListWafAttackEventRequest::overseasTypeIsSet() const
{
    return overseasTypeIsSet_;
}

void ListWafAttackEventRequest::unsetoverseasType()
{
    overseasTypeIsSet_ = false;
}

std::string ListWafAttackEventRequest::getSip() const
{
    return sip_;
}

void ListWafAttackEventRequest::setSip(const std::string& value)
{
    sip_ = value;
    sipIsSet_ = true;
}

bool ListWafAttackEventRequest::sipIsSet() const
{
    return sipIsSet_;
}

void ListWafAttackEventRequest::unsetsip()
{
    sipIsSet_ = false;
}

int32_t ListWafAttackEventRequest::getLimit() const
{
    return limit_;
}

void ListWafAttackEventRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListWafAttackEventRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListWafAttackEventRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListWafAttackEventRequest::getOffset() const
{
    return offset_;
}

void ListWafAttackEventRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListWafAttackEventRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListWafAttackEventRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


