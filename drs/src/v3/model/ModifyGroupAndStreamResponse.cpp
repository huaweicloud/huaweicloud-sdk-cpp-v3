

#include "huaweicloud/drs/v3/model/ModifyGroupAndStreamResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ModifyGroupAndStreamResponse::ModifyGroupAndStreamResponse()
{
    bodyIsSet_ = false;
}

ModifyGroupAndStreamResponse::~ModifyGroupAndStreamResponse() = default;

void ModifyGroupAndStreamResponse::validate()
{
}

web::json::value ModifyGroupAndStreamResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ModifyGroupAndStreamResponse::fromJson(const web::json::value& val)
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


Object ModifyGroupAndStreamResponse::getBody() const
{
    return body_;
}

void ModifyGroupAndStreamResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyGroupAndStreamResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyGroupAndStreamResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


