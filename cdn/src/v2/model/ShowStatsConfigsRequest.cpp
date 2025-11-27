

#include "huaweicloud/cdn/v2/model/ShowStatsConfigsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ShowStatsConfigsRequest::ShowStatsConfigsRequest()
{
    configType_ = 0;
    configTypeIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ShowStatsConfigsRequest::~ShowStatsConfigsRequest() = default;

void ShowStatsConfigsRequest::validate()
{
}

web::json::value ShowStatsConfigsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configTypeIsSet_) {
        val[utility::conversions::to_string_t("config_type")] = ModelBase::toJson(configType_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ShowStatsConfigsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("config_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigType(refVal);
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


int32_t ShowStatsConfigsRequest::getConfigType() const
{
    return configType_;
}

void ShowStatsConfigsRequest::setConfigType(int32_t value)
{
    configType_ = value;
    configTypeIsSet_ = true;
}

bool ShowStatsConfigsRequest::configTypeIsSet() const
{
    return configTypeIsSet_;
}

void ShowStatsConfigsRequest::unsetconfigType()
{
    configTypeIsSet_ = false;
}

int32_t ShowStatsConfigsRequest::getLimit() const
{
    return limit_;
}

void ShowStatsConfigsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowStatsConfigsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowStatsConfigsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ShowStatsConfigsRequest::getOffset() const
{
    return offset_;
}

void ShowStatsConfigsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowStatsConfigsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowStatsConfigsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


