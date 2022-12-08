

#include "huaweicloud/eip/v2/model/BatchDeletePublicIpRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




BatchDeletePublicIpRequest::BatchDeletePublicIpRequest()
{
    bodyIsSet_ = false;
}

BatchDeletePublicIpRequest::~BatchDeletePublicIpRequest() = default;

void BatchDeletePublicIpRequest::validate()
{
}

web::json::value BatchDeletePublicIpRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool BatchDeletePublicIpRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchDeletePublicIpRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BatchDeletePublicIpRequestBody BatchDeletePublicIpRequest::getBody() const
{
    return body_;
}

void BatchDeletePublicIpRequest::setBody(const BatchDeletePublicIpRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeletePublicIpRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeletePublicIpRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


