

#include "huaweicloud/codeartsbuild/v3/model/CreateTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




CreateTemplateRequest::CreateTemplateRequest()
{
    bodyIsSet_ = false;
}

CreateTemplateRequest::~CreateTemplateRequest() = default;

void CreateTemplateRequest::validate()
{
}

web::json::value CreateTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateTemplatesRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateTemplatesRequestBody CreateTemplateRequest::getBody() const
{
    return body_;
}

void CreateTemplateRequest::setBody(const CreateTemplatesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


