

#include "huaweicloud/aad/v1/model/CreateAadDomainRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




CreateAadDomainRequest::CreateAadDomainRequest()
{
    bodyIsSet_ = false;
}

CreateAadDomainRequest::~CreateAadDomainRequest() = default;

void CreateAadDomainRequest::validate()
{
}

web::json::value CreateAadDomainRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateAadDomainRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            HostBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


HostBody CreateAadDomainRequest::getBody() const
{
    return body_;
}

void CreateAadDomainRequest::setBody(const HostBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAadDomainRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAadDomainRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


