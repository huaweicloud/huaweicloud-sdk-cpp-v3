

#include "huaweicloud/kms/v2/model/UpdateKeyAliasRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




UpdateKeyAliasRequest::UpdateKeyAliasRequest()
{
    bodyIsSet_ = false;
}

UpdateKeyAliasRequest::~UpdateKeyAliasRequest() = default;

void UpdateKeyAliasRequest::validate()
{
}

web::json::value UpdateKeyAliasRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateKeyAliasRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateKeyAliasRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

UpdateKeyAliasRequestBody UpdateKeyAliasRequest::getBody() const
{
    return body_;
}

void UpdateKeyAliasRequest::setBody(const UpdateKeyAliasRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateKeyAliasRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateKeyAliasRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


