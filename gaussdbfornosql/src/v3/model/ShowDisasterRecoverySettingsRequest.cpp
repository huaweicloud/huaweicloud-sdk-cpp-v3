

#include "huaweicloud/gaussdbfornosql/v3/model/ShowDisasterRecoverySettingsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowDisasterRecoverySettingsRequest::ShowDisasterRecoverySettingsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ShowDisasterRecoverySettingsRequest::~ShowDisasterRecoverySettingsRequest() = default;

void ShowDisasterRecoverySettingsRequest::validate()
{
}

web::json::value ShowDisasterRecoverySettingsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ShowDisasterRecoverySettingsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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


std::string ShowDisasterRecoverySettingsRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowDisasterRecoverySettingsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowDisasterRecoverySettingsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowDisasterRecoverySettingsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ShowDisasterRecoverySettingsRequest::getOffset() const
{
    return offset_;
}

void ShowDisasterRecoverySettingsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowDisasterRecoverySettingsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowDisasterRecoverySettingsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowDisasterRecoverySettingsRequest::getLimit() const
{
    return limit_;
}

void ShowDisasterRecoverySettingsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowDisasterRecoverySettingsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowDisasterRecoverySettingsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


