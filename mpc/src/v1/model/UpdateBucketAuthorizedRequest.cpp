

#include "huaweicloud/mpc/v1/model/UpdateBucketAuthorizedRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




UpdateBucketAuthorizedRequest::UpdateBucketAuthorizedRequest()
{
    bodyIsSet_ = false;
}

UpdateBucketAuthorizedRequest::~UpdateBucketAuthorizedRequest() = default;

void UpdateBucketAuthorizedRequest::validate()
{
}

web::json::value UpdateBucketAuthorizedRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateBucketAuthorizedRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BucketAuthorizedReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

BucketAuthorizedReq UpdateBucketAuthorizedRequest::getBody() const
{
    return body_;
}

void UpdateBucketAuthorizedRequest::setBody(const BucketAuthorizedReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateBucketAuthorizedRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateBucketAuthorizedRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


