

#include "huaweicloud/cdn/v2/model/ModifyAccountInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ModifyAccountInfoResponse::ModifyAccountInfoResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ModifyAccountInfoResponse::~ModifyAccountInfoResponse() = default;

void ModifyAccountInfoResponse::validate()
{
}

web::json::value ModifyAccountInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ModifyAccountInfoResponse::fromJson(const web::json::value& val)
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


std::string ModifyAccountInfoResponse::getXRequestId() const
{
    return xRequestId_;
}

void ModifyAccountInfoResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ModifyAccountInfoResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ModifyAccountInfoResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


