

#include "huaweicloud/cpcs/v1/model/DeleteAccessKeyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




DeleteAccessKeyResponse::DeleteAccessKeyResponse()
{
    bodyIsSet_ = false;
}

DeleteAccessKeyResponse::~DeleteAccessKeyResponse() = default;

void DeleteAccessKeyResponse::validate()
{
}

web::json::value DeleteAccessKeyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteAccessKeyResponse::fromJson(const web::json::value& val)
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


Object DeleteAccessKeyResponse::getBody() const
{
    return body_;
}

void DeleteAccessKeyResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteAccessKeyResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteAccessKeyResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


