

#include "huaweicloud/drs/v5/model/ModifyConnectionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ModifyConnectionResponse::ModifyConnectionResponse()
{
    bodyIsSet_ = false;
}

ModifyConnectionResponse::~ModifyConnectionResponse() = default;

void ModifyConnectionResponse::validate()
{
}

web::json::value ModifyConnectionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ModifyConnectionResponse::fromJson(const web::json::value& val)
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


Object ModifyConnectionResponse::getBody() const
{
    return body_;
}

void ModifyConnectionResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyConnectionResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyConnectionResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


