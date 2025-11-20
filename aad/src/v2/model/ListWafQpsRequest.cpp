

#include "huaweicloud/aad/v2/model/ListWafQpsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ListWafQpsRequest::ListWafQpsRequest()
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
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListWafQpsRequest::~ListWafQpsRequest() = default;

void ListWafQpsRequest::validate()
{
}

web::json::value ListWafQpsRequest::toJson() const
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
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListWafQpsRequest::fromJson(const web::json::value& val)
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


std::string ListWafQpsRequest::getDomains() const
{
    return domains_;
}

void ListWafQpsRequest::setDomains(const std::string& value)
{
    domains_ = value;
    domainsIsSet_ = true;
}

bool ListWafQpsRequest::domainsIsSet() const
{
    return domainsIsSet_;
}

void ListWafQpsRequest::unsetdomains()
{
    domainsIsSet_ = false;
}

std::string ListWafQpsRequest::getValueType() const
{
    return valueType_;
}

void ListWafQpsRequest::setValueType(const std::string& value)
{
    valueType_ = value;
    valueTypeIsSet_ = true;
}

bool ListWafQpsRequest::valueTypeIsSet() const
{
    return valueTypeIsSet_;
}

void ListWafQpsRequest::unsetvalueType()
{
    valueTypeIsSet_ = false;
}

std::string ListWafQpsRequest::getStartTime() const
{
    return startTime_;
}

void ListWafQpsRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListWafQpsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListWafQpsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListWafQpsRequest::getEndTime() const
{
    return endTime_;
}

void ListWafQpsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListWafQpsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListWafQpsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListWafQpsRequest::getRecent() const
{
    return recent_;
}

void ListWafQpsRequest::setRecent(const std::string& value)
{
    recent_ = value;
    recentIsSet_ = true;
}

bool ListWafQpsRequest::recentIsSet() const
{
    return recentIsSet_;
}

void ListWafQpsRequest::unsetrecent()
{
    recentIsSet_ = false;
}

int32_t ListWafQpsRequest::getOverseasType() const
{
    return overseasType_;
}

void ListWafQpsRequest::setOverseasType(int32_t value)
{
    overseasType_ = value;
    overseasTypeIsSet_ = true;
}

bool ListWafQpsRequest::overseasTypeIsSet() const
{
    return overseasTypeIsSet_;
}

void ListWafQpsRequest::unsetoverseasType()
{
    overseasTypeIsSet_ = false;
}

int32_t ListWafQpsRequest::getLimit() const
{
    return limit_;
}

void ListWafQpsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListWafQpsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListWafQpsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListWafQpsRequest::getOffset() const
{
    return offset_;
}

void ListWafQpsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListWafQpsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListWafQpsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


