

#include "huaweicloud/vpc/v2/model/NeutronCreateNetworkRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronCreateNetworkRequest::NeutronCreateNetworkRequest()
{
    bodyIsSet_ = false;
}

NeutronCreateNetworkRequest::~NeutronCreateNetworkRequest() = default;

void NeutronCreateNetworkRequest::validate()
{
}

web::json::value NeutronCreateNetworkRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool NeutronCreateNetworkRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            NeutronCreateNetworkRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


NeutronCreateNetworkRequestBody NeutronCreateNetworkRequest::getBody() const
{
    return body_;
}

void NeutronCreateNetworkRequest::setBody(const NeutronCreateNetworkRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool NeutronCreateNetworkRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void NeutronCreateNetworkRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


