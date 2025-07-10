

#include "huaweicloud/codeartsbuild/v3/model/AddKeystorePermissionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




AddKeystorePermissionRequest::AddKeystorePermissionRequest()
{
    bodyIsSet_ = false;
}

AddKeystorePermissionRequest::~AddKeystorePermissionRequest() = default;

void AddKeystorePermissionRequest::validate()
{
}

web::json::value AddKeystorePermissionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AddKeystorePermissionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AddKeystorePermissionRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


AddKeystorePermissionRequestBody AddKeystorePermissionRequest::getBody() const
{
    return body_;
}

void AddKeystorePermissionRequest::setBody(const AddKeystorePermissionRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddKeystorePermissionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddKeystorePermissionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


