

#include "huaweicloud/cce/v3/model/CreateAddonInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreateAddonInstanceRequest::CreateAddonInstanceRequest()
{
    bodyIsSet_ = false;
}

CreateAddonInstanceRequest::~CreateAddonInstanceRequest() = default;

void CreateAddonInstanceRequest::validate()
{
}

web::json::value CreateAddonInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateAddonInstanceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            InstanceRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


InstanceRequest CreateAddonInstanceRequest::getBody() const
{
    return body_;
}

void CreateAddonInstanceRequest::setBody(const InstanceRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAddonInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAddonInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


