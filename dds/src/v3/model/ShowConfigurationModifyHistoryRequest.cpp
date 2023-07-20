

#include "huaweicloud/dds/v3/model/ShowConfigurationModifyHistoryRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ShowConfigurationModifyHistoryRequest::ShowConfigurationModifyHistoryRequest()
{
    configId_ = "";
    configIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ShowConfigurationModifyHistoryRequest::~ShowConfigurationModifyHistoryRequest() = default;

void ShowConfigurationModifyHistoryRequest::validate()
{
}

web::json::value ShowConfigurationModifyHistoryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configIdIsSet_) {
        val[utility::conversions::to_string_t("config_id")] = ModelBase::toJson(configId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}

bool ShowConfigurationModifyHistoryRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("config_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}

std::string ShowConfigurationModifyHistoryRequest::getConfigId() const
{
    return configId_;
}

void ShowConfigurationModifyHistoryRequest::setConfigId(const std::string& value)
{
    configId_ = value;
    configIdIsSet_ = true;
}

bool ShowConfigurationModifyHistoryRequest::configIdIsSet() const
{
    return configIdIsSet_;
}

void ShowConfigurationModifyHistoryRequest::unsetconfigId()
{
    configIdIsSet_ = false;
}

int32_t ShowConfigurationModifyHistoryRequest::getOffset() const
{
    return offset_;
}

void ShowConfigurationModifyHistoryRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowConfigurationModifyHistoryRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowConfigurationModifyHistoryRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowConfigurationModifyHistoryRequest::getLimit() const
{
    return limit_;
}

void ShowConfigurationModifyHistoryRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowConfigurationModifyHistoryRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowConfigurationModifyHistoryRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


