

#include "huaweicloud/aad/v2/model/ListWafBandwidthRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ListWafBandwidthRequest::ListWafBandwidthRequest()
{
    domains_ = "";
    domainsIsSet_ = false;
    valueType_ = "";
    valueTypeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    recent_ = "";
    recentIsSet_ = false;
    overseasType_ = 0;
    overseasTypeIsSet_ = false;
}

ListWafBandwidthRequest::~ListWafBandwidthRequest() = default;

void ListWafBandwidthRequest::validate()
{
}

web::json::value ListWafBandwidthRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainsIsSet_) {
        val[utility::conversions::to_string_t("domains")] = ModelBase::toJson(domains_);
    }
    if(valueTypeIsSet_) {
        val[utility::conversions::to_string_t("value_type")] = ModelBase::toJson(valueType_);
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

    return val;
}
bool ListWafBandwidthRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("value_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValueType(refVal);
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
    return ok;
}


std::string ListWafBandwidthRequest::getDomains() const
{
    return domains_;
}

void ListWafBandwidthRequest::setDomains(const std::string& value)
{
    domains_ = value;
    domainsIsSet_ = true;
}

bool ListWafBandwidthRequest::domainsIsSet() const
{
    return domainsIsSet_;
}

void ListWafBandwidthRequest::unsetdomains()
{
    domainsIsSet_ = false;
}

std::string ListWafBandwidthRequest::getValueType() const
{
    return valueType_;
}

void ListWafBandwidthRequest::setValueType(const std::string& value)
{
    valueType_ = value;
    valueTypeIsSet_ = true;
}

bool ListWafBandwidthRequest::valueTypeIsSet() const
{
    return valueTypeIsSet_;
}

void ListWafBandwidthRequest::unsetvalueType()
{
    valueTypeIsSet_ = false;
}

std::string ListWafBandwidthRequest::getStartTime() const
{
    return startTime_;
}

void ListWafBandwidthRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListWafBandwidthRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListWafBandwidthRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListWafBandwidthRequest::getEndTime() const
{
    return endTime_;
}

void ListWafBandwidthRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListWafBandwidthRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListWafBandwidthRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListWafBandwidthRequest::getRecent() const
{
    return recent_;
}

void ListWafBandwidthRequest::setRecent(const std::string& value)
{
    recent_ = value;
    recentIsSet_ = true;
}

bool ListWafBandwidthRequest::recentIsSet() const
{
    return recentIsSet_;
}

void ListWafBandwidthRequest::unsetrecent()
{
    recentIsSet_ = false;
}

int32_t ListWafBandwidthRequest::getOverseasType() const
{
    return overseasType_;
}

void ListWafBandwidthRequest::setOverseasType(int32_t value)
{
    overseasType_ = value;
    overseasTypeIsSet_ = true;
}

bool ListWafBandwidthRequest::overseasTypeIsSet() const
{
    return overseasTypeIsSet_;
}

void ListWafBandwidthRequest::unsetoverseasType()
{
    overseasTypeIsSet_ = false;
}

}
}
}
}
}


