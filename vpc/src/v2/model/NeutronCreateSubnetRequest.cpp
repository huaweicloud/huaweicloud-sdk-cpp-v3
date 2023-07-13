

#include "huaweicloud/vpc/v2/model/NeutronCreateSubnetRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronCreateSubnetRequest::NeutronCreateSubnetRequest()
{
    bodyIsSet_ = false;
}

NeutronCreateSubnetRequest::~NeutronCreateSubnetRequest() = default;

void NeutronCreateSubnetRequest::validate()
{
}

web::json::value NeutronCreateSubnetRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool NeutronCreateSubnetRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            NeutronCreateSubnetRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

NeutronCreateSubnetRequestBody NeutronCreateSubnetRequest::getBody() const
{
    return body_;
}

void NeutronCreateSubnetRequest::setBody(const NeutronCreateSubnetRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool NeutronCreateSubnetRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void NeutronCreateSubnetRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


