

#include "huaweicloud/metastudio/v1/model/DeleteProductResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteProductResponse::DeleteProductResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteProductResponse::~DeleteProductResponse() = default;

void DeleteProductResponse::validate()
{
}

web::json::value DeleteProductResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteProductResponse::fromJson(const web::json::value& val)
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


std::string DeleteProductResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteProductResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteProductResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteProductResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


