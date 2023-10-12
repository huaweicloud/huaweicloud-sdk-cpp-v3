

#include "huaweicloud/codeartsdeploy/v2/model/CreateDeployTaskByTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




CreateDeployTaskByTemplateRequest::CreateDeployTaskByTemplateRequest()
{
    bodyIsSet_ = false;
}

CreateDeployTaskByTemplateRequest::~CreateDeployTaskByTemplateRequest() = default;

void CreateDeployTaskByTemplateRequest::validate()
{
}

web::json::value CreateDeployTaskByTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateDeployTaskByTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            TemplateTaskRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


TemplateTaskRequestBody CreateDeployTaskByTemplateRequest::getBody() const
{
    return body_;
}

void CreateDeployTaskByTemplateRequest::setBody(const TemplateTaskRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDeployTaskByTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDeployTaskByTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


