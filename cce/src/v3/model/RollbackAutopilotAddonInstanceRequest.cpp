

#include "huaweicloud/cce/v3/model/RollbackAutopilotAddonInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




RollbackAutopilotAddonInstanceRequest::RollbackAutopilotAddonInstanceRequest()
{
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

RollbackAutopilotAddonInstanceRequest::~RollbackAutopilotAddonInstanceRequest() = default;

void RollbackAutopilotAddonInstanceRequest::validate()
{
}

web::json::value RollbackAutopilotAddonInstanceRequest::toJson() const
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
bool RollbackAutopilotAddonInstanceRequest::fromJson(const web::json::value& val)
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
            AddonInstanceRollbackRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RollbackAutopilotAddonInstanceRequest::getId() const
{
    return id_;
}

void RollbackAutopilotAddonInstanceRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RollbackAutopilotAddonInstanceRequest::idIsSet() const
{
    return idIsSet_;
}

void RollbackAutopilotAddonInstanceRequest::unsetid()
{
    idIsSet_ = false;
}

AddonInstanceRollbackRequest RollbackAutopilotAddonInstanceRequest::getBody() const
{
    return body_;
}

void RollbackAutopilotAddonInstanceRequest::setBody(const AddonInstanceRollbackRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RollbackAutopilotAddonInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RollbackAutopilotAddonInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


