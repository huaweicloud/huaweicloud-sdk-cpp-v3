

#include "huaweicloud/codehub/v4/model/ShowProjectWatermarkResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowProjectWatermarkResponse::ShowProjectWatermarkResponse()
{
    watermark_ = false;
    watermarkIsSet_ = false;
    canUpdate_ = false;
    canUpdateIsSet_ = false;
}

ShowProjectWatermarkResponse::~ShowProjectWatermarkResponse() = default;

void ShowProjectWatermarkResponse::validate()
{
}

web::json::value ShowProjectWatermarkResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(watermarkIsSet_) {
        val[utility::conversions::to_string_t("watermark")] = ModelBase::toJson(watermark_);
    }
    if(canUpdateIsSet_) {
        val[utility::conversions::to_string_t("can_update")] = ModelBase::toJson(canUpdate_);
    }

    return val;
}
bool ShowProjectWatermarkResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("watermark"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("watermark"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWatermark(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("can_update"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_update"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanUpdate(refVal);
        }
    }
    return ok;
}


bool ShowProjectWatermarkResponse::isWatermark() const
{
    return watermark_;
}

void ShowProjectWatermarkResponse::setWatermark(bool value)
{
    watermark_ = value;
    watermarkIsSet_ = true;
}

bool ShowProjectWatermarkResponse::watermarkIsSet() const
{
    return watermarkIsSet_;
}

void ShowProjectWatermarkResponse::unsetwatermark()
{
    watermarkIsSet_ = false;
}

bool ShowProjectWatermarkResponse::isCanUpdate() const
{
    return canUpdate_;
}

void ShowProjectWatermarkResponse::setCanUpdate(bool value)
{
    canUpdate_ = value;
    canUpdateIsSet_ = true;
}

bool ShowProjectWatermarkResponse::canUpdateIsSet() const
{
    return canUpdateIsSet_;
}

void ShowProjectWatermarkResponse::unsetcanUpdate()
{
    canUpdateIsSet_ = false;
}

}
}
}
}
}


