

#include "huaweicloud/codehub/v4/model/UpdateProjectWatermarkResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateProjectWatermarkResponse::UpdateProjectWatermarkResponse()
{
    watermark_ = false;
    watermarkIsSet_ = false;
}

UpdateProjectWatermarkResponse::~UpdateProjectWatermarkResponse() = default;

void UpdateProjectWatermarkResponse::validate()
{
}

web::json::value UpdateProjectWatermarkResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(watermarkIsSet_) {
        val[utility::conversions::to_string_t("watermark")] = ModelBase::toJson(watermark_);
    }

    return val;
}
bool UpdateProjectWatermarkResponse::fromJson(const web::json::value& val)
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


bool UpdateProjectWatermarkResponse::isWatermark() const
{
    return watermark_;
}

void UpdateProjectWatermarkResponse::setWatermark(bool value)
{
    watermark_ = value;
    watermarkIsSet_ = true;
}

bool UpdateProjectWatermarkResponse::watermarkIsSet() const
{
    return watermarkIsSet_;
}

void UpdateProjectWatermarkResponse::unsetwatermark()
{
    watermarkIsSet_ = false;
}

}
}
}
}
}


