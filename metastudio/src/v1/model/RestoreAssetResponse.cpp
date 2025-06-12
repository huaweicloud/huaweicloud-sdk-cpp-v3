

#include "huaweicloud/metastudio/v1/model/RestoreAssetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




RestoreAssetResponse::RestoreAssetResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

RestoreAssetResponse::~RestoreAssetResponse() = default;

void RestoreAssetResponse::validate()
{
}

web::json::value RestoreAssetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool RestoreAssetResponse::fromJson(const web::json::value& val)
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


std::string RestoreAssetResponse::getXRequestId() const
{
    return xRequestId_;
}

void RestoreAssetResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool RestoreAssetResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void RestoreAssetResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


