

#include "huaweicloud/codeartsbuild/v3/model/ApplyProjectPermissionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ApplyProjectPermissionRequest::ApplyProjectPermissionRequest()
{
    bodyIsSet_ = false;
}

ApplyProjectPermissionRequest::~ApplyProjectPermissionRequest() = default;

void ApplyProjectPermissionRequest::validate()
{
}

web::json::value ApplyProjectPermissionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ApplyProjectPermissionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ProjectPermissionRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ProjectPermissionRequestBody ApplyProjectPermissionRequest::getBody() const
{
    return body_;
}

void ApplyProjectPermissionRequest::setBody(const ProjectPermissionRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ApplyProjectPermissionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ApplyProjectPermissionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


