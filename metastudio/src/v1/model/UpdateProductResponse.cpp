

#include "huaweicloud/metastudio/v1/model/UpdateProductResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateProductResponse::UpdateProductResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateProductResponse::~UpdateProductResponse() = default;

void UpdateProductResponse::validate()
{
}

web::json::value UpdateProductResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateProductResponse::fromJson(const web::json::value& val)
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


std::string UpdateProductResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateProductResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateProductResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateProductResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


