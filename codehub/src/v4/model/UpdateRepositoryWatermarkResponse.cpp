

#include "huaweicloud/codehub/v4/model/UpdateRepositoryWatermarkResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateRepositoryWatermarkResponse::UpdateRepositoryWatermarkResponse()
{
    watermark_ = false;
    watermarkIsSet_ = false;
}

UpdateRepositoryWatermarkResponse::~UpdateRepositoryWatermarkResponse() = default;

void UpdateRepositoryWatermarkResponse::validate()
{
}

web::json::value UpdateRepositoryWatermarkResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(watermarkIsSet_) {
        val[utility::conversions::to_string_t("watermark")] = ModelBase::toJson(watermark_);
    }

    return val;
}
bool UpdateRepositoryWatermarkResponse::fromJson(const web::json::value& val)
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


bool UpdateRepositoryWatermarkResponse::isWatermark() const
{
    return watermark_;
}

void UpdateRepositoryWatermarkResponse::setWatermark(bool value)
{
    watermark_ = value;
    watermarkIsSet_ = true;
}

bool UpdateRepositoryWatermarkResponse::watermarkIsSet() const
{
    return watermarkIsSet_;
}

void UpdateRepositoryWatermarkResponse::unsetwatermark()
{
    watermarkIsSet_ = false;
}

}
}
}
}
}


