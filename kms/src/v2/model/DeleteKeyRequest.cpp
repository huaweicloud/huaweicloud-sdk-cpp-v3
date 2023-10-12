

#include "huaweicloud/kms/v2/model/DeleteKeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




DeleteKeyRequest::DeleteKeyRequest()
{
    bodyIsSet_ = false;
}

DeleteKeyRequest::~DeleteKeyRequest() = default;

void DeleteKeyRequest::validate()
{
}

web::json::value DeleteKeyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteKeyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ScheduleKeyDeletionRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ScheduleKeyDeletionRequestBody DeleteKeyRequest::getBody() const
{
    return body_;
}

void DeleteKeyRequest::setBody(const ScheduleKeyDeletionRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteKeyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteKeyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


