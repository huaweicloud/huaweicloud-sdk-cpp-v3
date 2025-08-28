

#include "huaweicloud/ecs/v2/model/CreateLaunchTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




CreateLaunchTemplateRequest::CreateLaunchTemplateRequest()
{
    bodyIsSet_ = false;
}

CreateLaunchTemplateRequest::~CreateLaunchTemplateRequest() = default;

void CreateLaunchTemplateRequest::validate()
{
}

web::json::value CreateLaunchTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateLaunchTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateLaunchTemplateRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateLaunchTemplateRequestBody CreateLaunchTemplateRequest::getBody() const
{
    return body_;
}

void CreateLaunchTemplateRequest::setBody(const CreateLaunchTemplateRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateLaunchTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateLaunchTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


