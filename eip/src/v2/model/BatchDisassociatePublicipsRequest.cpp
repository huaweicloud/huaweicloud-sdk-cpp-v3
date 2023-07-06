

#include "huaweicloud/eip/v2/model/BatchDisassociatePublicipsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




BatchDisassociatePublicipsRequest::BatchDisassociatePublicipsRequest()
{
    bodyIsSet_ = false;
}

BatchDisassociatePublicipsRequest::~BatchDisassociatePublicipsRequest() = default;

void BatchDisassociatePublicipsRequest::validate()
{
}

web::json::value BatchDisassociatePublicipsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool BatchDisassociatePublicipsRequest::fromJson(const web::json::value& val)
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

BatchDeletePublicIpRequestBody BatchDisassociatePublicipsRequest::getBody() const
{
    return body_;
}

void BatchDisassociatePublicipsRequest::setBody(const BatchDeletePublicIpRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDisassociatePublicipsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDisassociatePublicipsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


