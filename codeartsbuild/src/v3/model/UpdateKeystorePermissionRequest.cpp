

#include "huaweicloud/codeartsbuild/v3/model/UpdateKeystorePermissionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




UpdateKeystorePermissionRequest::UpdateKeystorePermissionRequest()
{
    bodyIsSet_ = false;
}

UpdateKeystorePermissionRequest::~UpdateKeystorePermissionRequest() = default;

void UpdateKeystorePermissionRequest::validate()
{
}

web::json::value UpdateKeystorePermissionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateKeystorePermissionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateKeystorePermissionRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


UpdateKeystorePermissionRequestBody UpdateKeystorePermissionRequest::getBody() const
{
    return body_;
}

void UpdateKeystorePermissionRequest::setBody(const UpdateKeystorePermissionRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateKeystorePermissionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateKeystorePermissionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


