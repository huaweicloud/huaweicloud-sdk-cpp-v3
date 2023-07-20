

#include "huaweicloud/eip/v3/model/DetachBatchPublicIpRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




DetachBatchPublicIpRequest::DetachBatchPublicIpRequest()
{
    bodyIsSet_ = false;
}

DetachBatchPublicIpRequest::~DetachBatchPublicIpRequest() = default;

void DetachBatchPublicIpRequest::validate()
{
}

web::json::value DetachBatchPublicIpRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool DetachBatchPublicIpRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DetachBatchSharedbwReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

DetachBatchSharedbwReq DetachBatchPublicIpRequest::getBody() const
{
    return body_;
}

void DetachBatchPublicIpRequest::setBody(const DetachBatchSharedbwReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DetachBatchPublicIpRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DetachBatchPublicIpRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


