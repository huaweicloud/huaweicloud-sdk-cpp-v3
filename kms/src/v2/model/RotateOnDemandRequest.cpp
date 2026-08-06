

#include "huaweicloud/kms/v2/model/RotateOnDemandRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




RotateOnDemandRequest::RotateOnDemandRequest()
{
    bodyIsSet_ = false;
}

RotateOnDemandRequest::~RotateOnDemandRequest() = default;

void RotateOnDemandRequest::validate()
{
}

web::json::value RotateOnDemandRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool RotateOnDemandRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RotateOnDemandRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


RotateOnDemandRequestBody RotateOnDemandRequest::getBody() const
{
    return body_;
}

void RotateOnDemandRequest::setBody(const RotateOnDemandRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RotateOnDemandRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RotateOnDemandRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


