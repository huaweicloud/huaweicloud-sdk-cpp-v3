

#include "huaweicloud/cce/v3/model/UpdateAutopilotAddonInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpdateAutopilotAddonInstanceRequest::UpdateAutopilotAddonInstanceRequest()
{
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAutopilotAddonInstanceRequest::~UpdateAutopilotAddonInstanceRequest() = default;

void UpdateAutopilotAddonInstanceRequest::validate()
{
}

web::json::value UpdateAutopilotAddonInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateAutopilotAddonInstanceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
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


std::string UpdateAutopilotAddonInstanceRequest::getId() const
{
    return id_;
}

void UpdateAutopilotAddonInstanceRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateAutopilotAddonInstanceRequest::idIsSet() const
{
    return idIsSet_;
}

void UpdateAutopilotAddonInstanceRequest::unsetid()
{
    idIsSet_ = false;
}

InstanceRequest UpdateAutopilotAddonInstanceRequest::getBody() const
{
    return body_;
}

void UpdateAutopilotAddonInstanceRequest::setBody(const InstanceRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAutopilotAddonInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAutopilotAddonInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


