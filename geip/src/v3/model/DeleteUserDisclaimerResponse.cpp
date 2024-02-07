

#include "huaweicloud/geip/v3/model/DeleteUserDisclaimerResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




DeleteUserDisclaimerResponse::DeleteUserDisclaimerResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteUserDisclaimerResponse::~DeleteUserDisclaimerResponse() = default;

void DeleteUserDisclaimerResponse::validate()
{
}

web::json::value DeleteUserDisclaimerResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteUserDisclaimerResponse::fromJson(const web::json::value& val)
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


std::string DeleteUserDisclaimerResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteUserDisclaimerResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteUserDisclaimerResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteUserDisclaimerResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


