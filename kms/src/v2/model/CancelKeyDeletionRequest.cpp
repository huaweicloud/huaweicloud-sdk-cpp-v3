

#include "huaweicloud/kms/v2/model/CancelKeyDeletionRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CancelKeyDeletionRequest::CancelKeyDeletionRequest()
{
    bodyIsSet_ = false;
}

CancelKeyDeletionRequest::~CancelKeyDeletionRequest() = default;

void CancelKeyDeletionRequest::validate()
{
}

web::json::value CancelKeyDeletionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CancelKeyDeletionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            OperateKeyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

OperateKeyRequestBody CancelKeyDeletionRequest::getBody() const
{
    return body_;
}

void CancelKeyDeletionRequest::setBody(const OperateKeyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CancelKeyDeletionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CancelKeyDeletionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


