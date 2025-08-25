

#include "huaweicloud/cce/v3/model/RollbackAddonInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




RollbackAddonInstanceRequest::RollbackAddonInstanceRequest()
{
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

RollbackAddonInstanceRequest::~RollbackAddonInstanceRequest() = default;

void RollbackAddonInstanceRequest::validate()
{
}

web::json::value RollbackAddonInstanceRequest::toJson() const
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
bool RollbackAddonInstanceRequest::fromJson(const web::json::value& val)
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


std::string RollbackAddonInstanceRequest::getId() const
{
    return id_;
}

void RollbackAddonInstanceRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RollbackAddonInstanceRequest::idIsSet() const
{
    return idIsSet_;
}

void RollbackAddonInstanceRequest::unsetid()
{
    idIsSet_ = false;
}

AddonInstanceRollbackRequest RollbackAddonInstanceRequest::getBody() const
{
    return body_;
}

void RollbackAddonInstanceRequest::setBody(const AddonInstanceRollbackRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RollbackAddonInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RollbackAddonInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


