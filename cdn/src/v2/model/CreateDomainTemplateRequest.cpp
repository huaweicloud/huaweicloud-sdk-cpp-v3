

#include "huaweicloud/cdn/v2/model/CreateDomainTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




CreateDomainTemplateRequest::CreateDomainTemplateRequest()
{
    bodyIsSet_ = false;
}

CreateDomainTemplateRequest::~CreateDomainTemplateRequest() = default;

void CreateDomainTemplateRequest::validate()
{
}

web::json::value CreateDomainTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateDomainTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateTemplateRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateTemplateRequestBody CreateDomainTemplateRequest::getBody() const
{
    return body_;
}

void CreateDomainTemplateRequest::setBody(const CreateTemplateRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDomainTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDomainTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


