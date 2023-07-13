

#include "huaweicloud/cdn/v1/model/TopUrlSummary.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




TopUrlSummary::TopUrlSummary()
{
    url_ = "";
    urlIsSet_ = false;
    value_ = 0L;
    valueIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    statType_ = "";
    statTypeIsSet_ = false;
}

TopUrlSummary::~TopUrlSummary() = default;

void TopUrlSummary::validate()
{
}

web::json::value TopUrlSummary::toJson() const
{
    web::json::value val = web::json::value::object();

    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(statTypeIsSet_) {
        val[utility::conversions::to_string_t("stat_type")] = ModelBase::toJson(statType_);
    }

    return val;
}

bool TopUrlSummary::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("stat_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stat_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatType(refVal);
        }
    }
    return ok;
}

std::string TopUrlSummary::getUrl() const
{
    return url_;
}

void TopUrlSummary::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool TopUrlSummary::urlIsSet() const
{
    return urlIsSet_;
}

void TopUrlSummary::unseturl()
{
    urlIsSet_ = false;
}

int64_t TopUrlSummary::getValue() const
{
    return value_;
}

void TopUrlSummary::setValue(int64_t value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TopUrlSummary::valueIsSet() const
{
    return valueIsSet_;
}

void TopUrlSummary::unsetvalue()
{
    valueIsSet_ = false;
}

int64_t TopUrlSummary::getStartTime() const
{
    return startTime_;
}

void TopUrlSummary::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool TopUrlSummary::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void TopUrlSummary::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t TopUrlSummary::getEndTime() const
{
    return endTime_;
}

void TopUrlSummary::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool TopUrlSummary::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void TopUrlSummary::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string TopUrlSummary::getStatType() const
{
    return statType_;
}

void TopUrlSummary::setStatType(const std::string& value)
{
    statType_ = value;
    statTypeIsSet_ = true;
}

bool TopUrlSummary::statTypeIsSet() const
{
    return statTypeIsSet_;
}

void TopUrlSummary::unsetstatType()
{
    statTypeIsSet_ = false;
}

}
}
}
}
}


