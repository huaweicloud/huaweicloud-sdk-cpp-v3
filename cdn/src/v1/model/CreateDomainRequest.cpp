

#include "huaweicloud/cdn/v1/model/CreateDomainRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




CreateDomainRequest::CreateDomainRequest()
{
    bodyIsSet_ = false;
}

CreateDomainRequest::~CreateDomainRequest() = default;

void CreateDomainRequest::validate()
{
}

web::json::value CreateDomainRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateDomainRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateDomainRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

CreateDomainRequestBody CreateDomainRequest::getBody() const
{
    return body_;
}

void CreateDomainRequest::setBody(const CreateDomainRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDomainRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDomainRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


