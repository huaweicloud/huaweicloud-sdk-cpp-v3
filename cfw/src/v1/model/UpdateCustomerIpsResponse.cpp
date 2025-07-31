

#include "huaweicloud/cfw/v1/model/UpdateCustomerIpsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateCustomerIpsResponse::UpdateCustomerIpsResponse()
{
    bodyIsSet_ = false;
}

UpdateCustomerIpsResponse::~UpdateCustomerIpsResponse() = default;

void UpdateCustomerIpsResponse::validate()
{
}

web::json::value UpdateCustomerIpsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateCustomerIpsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


Object UpdateCustomerIpsResponse::getBody() const
{
    return body_;
}

void UpdateCustomerIpsResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateCustomerIpsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateCustomerIpsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


