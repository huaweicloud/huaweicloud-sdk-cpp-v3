

#include "huaweicloud/codehub/v4/model/ShowGroupWatermarkResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowGroupWatermarkResponse::ShowGroupWatermarkResponse()
{
    watermark_ = false;
    watermarkIsSet_ = false;
    canUpdate_ = false;
    canUpdateIsSet_ = false;
}

ShowGroupWatermarkResponse::~ShowGroupWatermarkResponse() = default;

void ShowGroupWatermarkResponse::validate()
{
}

web::json::value ShowGroupWatermarkResponse::toJson() const
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
bool ShowGroupWatermarkResponse::fromJson(const web::json::value& val)
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


bool ShowGroupWatermarkResponse::isWatermark() const
{
    return watermark_;
}

void ShowGroupWatermarkResponse::setWatermark(bool value)
{
    watermark_ = value;
    watermarkIsSet_ = true;
}

bool ShowGroupWatermarkResponse::watermarkIsSet() const
{
    return watermarkIsSet_;
}

void ShowGroupWatermarkResponse::unsetwatermark()
{
    watermarkIsSet_ = false;
}

bool ShowGroupWatermarkResponse::isCanUpdate() const
{
    return canUpdate_;
}

void ShowGroupWatermarkResponse::setCanUpdate(bool value)
{
    canUpdate_ = value;
    canUpdateIsSet_ = true;
}

bool ShowGroupWatermarkResponse::canUpdateIsSet() const
{
    return canUpdateIsSet_;
}

void ShowGroupWatermarkResponse::unsetcanUpdate()
{
    canUpdateIsSet_ = false;
}

}
}
}
}
}


