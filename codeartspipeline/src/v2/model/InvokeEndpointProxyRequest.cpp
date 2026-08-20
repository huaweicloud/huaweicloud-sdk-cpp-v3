

#include "huaweicloud/codeartspipeline/v2/model/InvokeEndpointProxyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




InvokeEndpointProxyRequest::InvokeEndpointProxyRequest()
{
    bodyIsSet_ = false;
}

InvokeEndpointProxyRequest::~InvokeEndpointProxyRequest() = default;

void InvokeEndpointProxyRequest::validate()
{
}

web::json::value InvokeEndpointProxyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool InvokeEndpointProxyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            EndpointProxyParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


EndpointProxyParam InvokeEndpointProxyRequest::getBody() const
{
    return body_;
}

void InvokeEndpointProxyRequest::setBody(const EndpointProxyParam& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool InvokeEndpointProxyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void InvokeEndpointProxyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


