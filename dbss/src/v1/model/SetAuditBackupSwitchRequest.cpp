

#include "huaweicloud/dbss/v1/model/SetAuditBackupSwitchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SetAuditBackupSwitchRequest::SetAuditBackupSwitchRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetAuditBackupSwitchRequest::~SetAuditBackupSwitchRequest() = default;

void SetAuditBackupSwitchRequest::validate()
{
}

web::json::value SetAuditBackupSwitchRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SetAuditBackupSwitchRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BackupSwitchRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetAuditBackupSwitchRequest::getDomainId() const
{
    return domainId_;
}

void SetAuditBackupSwitchRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool SetAuditBackupSwitchRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void SetAuditBackupSwitchRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string SetAuditBackupSwitchRequest::getInstanceId() const
{
    return instanceId_;
}

void SetAuditBackupSwitchRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetAuditBackupSwitchRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetAuditBackupSwitchRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

BackupSwitchRequest SetAuditBackupSwitchRequest::getBody() const
{
    return body_;
}

void SetAuditBackupSwitchRequest::setBody(const BackupSwitchRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetAuditBackupSwitchRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetAuditBackupSwitchRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


