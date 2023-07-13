

#include "huaweicloud/cdn/v2/model/BatchCopyDomainRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




BatchCopyDomainRequest::BatchCopyDomainRequest()
{
    bodyIsSet_ = false;
}

BatchCopyDomainRequest::~BatchCopyDomainRequest() = default;

void BatchCopyDomainRequest::validate()
{
}

web::json::value BatchCopyDomainRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool BatchCopyDomainRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchCopyDRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

BatchCopyDRequestBody BatchCopyDomainRequest::getBody() const
{
    return body_;
}

void BatchCopyDomainRequest::setBody(const BatchCopyDRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCopyDomainRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCopyDomainRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


