

#include "huaweicloud/codeartspipeline/v2/model/CreatePipelineByTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




CreatePipelineByTemplateRequest::CreatePipelineByTemplateRequest()
{
    bodyIsSet_ = false;
}

CreatePipelineByTemplateRequest::~CreatePipelineByTemplateRequest() = default;

void CreatePipelineByTemplateRequest::validate()
{
}

web::json::value CreatePipelineByTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreatePipelineByTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            TemplateCddl refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


TemplateCddl CreatePipelineByTemplateRequest::getBody() const
{
    return body_;
}

void CreatePipelineByTemplateRequest::setBody(const TemplateCddl& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePipelineByTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePipelineByTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


