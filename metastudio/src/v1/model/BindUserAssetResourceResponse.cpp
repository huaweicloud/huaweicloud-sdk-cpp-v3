

#include "huaweicloud/metastudio/v1/model/BindUserAssetResourceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




BindUserAssetResourceResponse::BindUserAssetResourceResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

BindUserAssetResourceResponse::~BindUserAssetResourceResponse() = default;

void BindUserAssetResourceResponse::validate()
{
}

web::json::value BindUserAssetResourceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool BindUserAssetResourceResponse::fromJson(const web::json::value& val)
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


std::string BindUserAssetResourceResponse::getXRequestId() const
{
    return xRequestId_;
}

void BindUserAssetResourceResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool BindUserAssetResourceResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void BindUserAssetResourceResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


