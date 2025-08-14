

#include "huaweicloud/iotda/v5/model/ShowTargetsInDevicePolicyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowTargetsInDevicePolicyRequestBody::ShowTargetsInDevicePolicyRequestBody()
{
    targetType_ = "";
    targetTypeIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ShowTargetsInDevicePolicyRequestBody::~ShowTargetsInDevicePolicyRequestBody() = default;

void ShowTargetsInDevicePolicyRequestBody::validate()
{
}

web::json::value ShowTargetsInDevicePolicyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetTypeIsSet_) {
        val[utility::conversions::to_string_t("target_type")] = ModelBase::toJson(targetType_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ShowTargetsInDevicePolicyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("target_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
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


std::string ShowTargetsInDevicePolicyRequestBody::getTargetType() const
{
    return targetType_;
}

void ShowTargetsInDevicePolicyRequestBody::setTargetType(const std::string& value)
{
    targetType_ = value;
    targetTypeIsSet_ = true;
}

bool ShowTargetsInDevicePolicyRequestBody::targetTypeIsSet() const
{
    return targetTypeIsSet_;
}

void ShowTargetsInDevicePolicyRequestBody::unsettargetType()
{
    targetTypeIsSet_ = false;
}

int32_t ShowTargetsInDevicePolicyRequestBody::getLimit() const
{
    return limit_;
}

void ShowTargetsInDevicePolicyRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowTargetsInDevicePolicyRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ShowTargetsInDevicePolicyRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowTargetsInDevicePolicyRequestBody::getMarker() const
{
    return marker_;
}

void ShowTargetsInDevicePolicyRequestBody::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ShowTargetsInDevicePolicyRequestBody::markerIsSet() const
{
    return markerIsSet_;
}

void ShowTargetsInDevicePolicyRequestBody::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ShowTargetsInDevicePolicyRequestBody::getOffset() const
{
    return offset_;
}

void ShowTargetsInDevicePolicyRequestBody::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowTargetsInDevicePolicyRequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowTargetsInDevicePolicyRequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


