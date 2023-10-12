

#include "huaweicloud/kms/v2/model/CancelGrantRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CancelGrantRequest::CancelGrantRequest()
{
    bodyIsSet_ = false;
}

CancelGrantRequest::~CancelGrantRequest() = default;

void CancelGrantRequest::validate()
{
}

web::json::value CancelGrantRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CancelGrantRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RevokeGrantRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


RevokeGrantRequestBody CancelGrantRequest::getBody() const
{
    return body_;
}

void CancelGrantRequest::setBody(const RevokeGrantRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CancelGrantRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CancelGrantRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


