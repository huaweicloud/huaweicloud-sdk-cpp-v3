

#include "huaweicloud/codehub/v4/model/UpdateGroupWatermarkResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateGroupWatermarkResponse::UpdateGroupWatermarkResponse()
{
    watermark_ = false;
    watermarkIsSet_ = false;
}

UpdateGroupWatermarkResponse::~UpdateGroupWatermarkResponse() = default;

void UpdateGroupWatermarkResponse::validate()
{
}

web::json::value UpdateGroupWatermarkResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(watermarkIsSet_) {
        val[utility::conversions::to_string_t("watermark")] = ModelBase::toJson(watermark_);
    }

    return val;
}
bool UpdateGroupWatermarkResponse::fromJson(const web::json::value& val)
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
    return ok;
}


bool UpdateGroupWatermarkResponse::isWatermark() const
{
    return watermark_;
}

void UpdateGroupWatermarkResponse::setWatermark(bool value)
{
    watermark_ = value;
    watermarkIsSet_ = true;
}

bool UpdateGroupWatermarkResponse::watermarkIsSet() const
{
    return watermarkIsSet_;
}

void UpdateGroupWatermarkResponse::unsetwatermark()
{
    watermarkIsSet_ = false;
}

}
}
}
}
}


