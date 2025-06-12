

#include "huaweicloud/metastudio/v1/model/SetProductAssetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SetProductAssetResponse::SetProductAssetResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

SetProductAssetResponse::~SetProductAssetResponse() = default;

void SetProductAssetResponse::validate()
{
}

web::json::value SetProductAssetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool SetProductAssetResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string SetProductAssetResponse::getXRequestId() const
{
    return xRequestId_;
}

void SetProductAssetResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool SetProductAssetResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void SetProductAssetResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


