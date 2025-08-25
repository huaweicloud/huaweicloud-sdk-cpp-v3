

#include "huaweicloud/cce/v3/model/UpdateAddonInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpdateAddonInstanceRequest::UpdateAddonInstanceRequest()
{
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAddonInstanceRequest::~UpdateAddonInstanceRequest() = default;

void UpdateAddonInstanceRequest::validate()
{
}

web::json::value UpdateAddonInstanceRequest::toJson() const
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
bool UpdateAddonInstanceRequest::fromJson(const web::json::value& val)
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


std::string UpdateAddonInstanceRequest::getId() const
{
    return id_;
}

void UpdateAddonInstanceRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateAddonInstanceRequest::idIsSet() const
{
    return idIsSet_;
}

void UpdateAddonInstanceRequest::unsetid()
{
    idIsSet_ = false;
}

InstanceRequest UpdateAddonInstanceRequest::getBody() const
{
    return body_;
}

void UpdateAddonInstanceRequest::setBody(const InstanceRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAddonInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAddonInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


