

#include "huaweicloud/dbss/v1/model/SetAuditBackupRiskSwitchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SetAuditBackupRiskSwitchRequest::SetAuditBackupRiskSwitchRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetAuditBackupRiskSwitchRequest::~SetAuditBackupRiskSwitchRequest() = default;

void SetAuditBackupRiskSwitchRequest::validate()
{
}

web::json::value SetAuditBackupRiskSwitchRequest::toJson() const
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
bool SetAuditBackupRiskSwitchRequest::fromJson(const web::json::value& val)
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
            RiskBackupTemplate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetAuditBackupRiskSwitchRequest::getDomainId() const
{
    return domainId_;
}

void SetAuditBackupRiskSwitchRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool SetAuditBackupRiskSwitchRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void SetAuditBackupRiskSwitchRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string SetAuditBackupRiskSwitchRequest::getInstanceId() const
{
    return instanceId_;
}

void SetAuditBackupRiskSwitchRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetAuditBackupRiskSwitchRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetAuditBackupRiskSwitchRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

RiskBackupTemplate SetAuditBackupRiskSwitchRequest::getBody() const
{
    return body_;
}

void SetAuditBackupRiskSwitchRequest::setBody(const RiskBackupTemplate& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetAuditBackupRiskSwitchRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetAuditBackupRiskSwitchRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


