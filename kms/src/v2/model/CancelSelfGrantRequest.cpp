

#include "huaweicloud/kms/v2/model/CancelSelfGrantRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CancelSelfGrantRequest::CancelSelfGrantRequest()
{
    bodyIsSet_ = false;
}

CancelSelfGrantRequest::~CancelSelfGrantRequest() = default;

void CancelSelfGrantRequest::validate()
{
}

web::json::value CancelSelfGrantRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CancelSelfGrantRequest::fromJson(const web::json::value& val)
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


RevokeGrantRequestBody CancelSelfGrantRequest::getBody() const
{
    return body_;
}

void CancelSelfGrantRequest::setBody(const RevokeGrantRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CancelSelfGrantRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CancelSelfGrantRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


