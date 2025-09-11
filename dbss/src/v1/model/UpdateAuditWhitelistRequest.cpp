

#include "huaweicloud/dbss/v1/model/UpdateAuditWhitelistRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




UpdateAuditWhitelistRequest::UpdateAuditWhitelistRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAuditWhitelistRequest::~UpdateAuditWhitelistRequest() = default;

void UpdateAuditWhitelistRequest::validate()
{
}

web::json::value UpdateAuditWhitelistRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateAuditWhitelistRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
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
            UpdateWhitelistRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAuditWhitelistRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateAuditWhitelistRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateAuditWhitelistRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateAuditWhitelistRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateAuditWhitelistRequest::getId() const
{
    return id_;
}

void UpdateAuditWhitelistRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateAuditWhitelistRequest::idIsSet() const
{
    return idIsSet_;
}

void UpdateAuditWhitelistRequest::unsetid()
{
    idIsSet_ = false;
}

UpdateWhitelistRequest UpdateAuditWhitelistRequest::getBody() const
{
    return body_;
}

void UpdateAuditWhitelistRequest::setBody(const UpdateWhitelistRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAuditWhitelistRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAuditWhitelistRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


