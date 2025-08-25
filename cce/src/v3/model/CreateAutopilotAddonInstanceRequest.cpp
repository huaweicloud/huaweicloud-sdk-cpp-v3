

#include "huaweicloud/cce/v3/model/CreateAutopilotAddonInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreateAutopilotAddonInstanceRequest::CreateAutopilotAddonInstanceRequest()
{
    bodyIsSet_ = false;
}

CreateAutopilotAddonInstanceRequest::~CreateAutopilotAddonInstanceRequest() = default;

void CreateAutopilotAddonInstanceRequest::validate()
{
}

web::json::value CreateAutopilotAddonInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateAutopilotAddonInstanceRequest::fromJson(const web::json::value& val)
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


InstanceRequest CreateAutopilotAddonInstanceRequest::getBody() const
{
    return body_;
}

void CreateAutopilotAddonInstanceRequest::setBody(const InstanceRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAutopilotAddonInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAutopilotAddonInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


