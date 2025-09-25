

#include "huaweicloud/codehub/v4/model/UpdateWatermarkDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateWatermarkDto::UpdateWatermarkDto()
{
    watermark_ = false;
    watermarkIsSet_ = false;
}

UpdateWatermarkDto::~UpdateWatermarkDto() = default;

void UpdateWatermarkDto::validate()
{
}

web::json::value UpdateWatermarkDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(watermarkIsSet_) {
        val[utility::conversions::to_string_t("watermark")] = ModelBase::toJson(watermark_);
    }

    return val;
}
bool UpdateWatermarkDto::fromJson(const web::json::value& val)
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


bool UpdateWatermarkDto::isWatermark() const
{
    return watermark_;
}

void UpdateWatermarkDto::setWatermark(bool value)
{
    watermark_ = value;
    watermarkIsSet_ = true;
}

bool UpdateWatermarkDto::watermarkIsSet() const
{
    return watermarkIsSet_;
}

void UpdateWatermarkDto::unsetwatermark()
{
    watermarkIsSet_ = false;
}

}
}
}
}
}


