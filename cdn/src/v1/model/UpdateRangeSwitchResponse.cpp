

#include "huaweicloud/cdn/v1/model/UpdateRangeSwitchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




UpdateRangeSwitchResponse::UpdateRangeSwitchResponse()
{
    originRangeIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateRangeSwitchResponse::~UpdateRangeSwitchResponse() = default;

void UpdateRangeSwitchResponse::validate()
{
}

web::json::value UpdateRangeSwitchResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(originRangeIsSet_) {
        val[utility::conversions::to_string_t("origin_range")] = ModelBase::toJson(originRange_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateRangeSwitchResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("origin_range"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_range"));
        if(!fieldValue.is_null())
        {
            OriginRangeBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginRange(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


OriginRangeBody UpdateRangeSwitchResponse::getOriginRange() const
{
    return originRange_;
}

void UpdateRangeSwitchResponse::setOriginRange(const OriginRangeBody& value)
{
    originRange_ = value;
    originRangeIsSet_ = true;
}

bool UpdateRangeSwitchResponse::originRangeIsSet() const
{
    return originRangeIsSet_;
}

void UpdateRangeSwitchResponse::unsetoriginRange()
{
    originRangeIsSet_ = false;
}

std::string UpdateRangeSwitchResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateRangeSwitchResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateRangeSwitchResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateRangeSwitchResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


