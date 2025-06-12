

#include "huaweicloud/metastudio/v1/model/DeleteActiveCodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteActiveCodeResponse::DeleteActiveCodeResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteActiveCodeResponse::~DeleteActiveCodeResponse() = default;

void DeleteActiveCodeResponse::validate()
{
}

web::json::value DeleteActiveCodeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteActiveCodeResponse::fromJson(const web::json::value& val)
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


std::string DeleteActiveCodeResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteActiveCodeResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteActiveCodeResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteActiveCodeResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


