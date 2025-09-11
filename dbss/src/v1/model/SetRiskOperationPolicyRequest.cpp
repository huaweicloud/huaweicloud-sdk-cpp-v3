

#include "huaweicloud/dbss/v1/model/SetRiskOperationPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SetRiskOperationPolicyRequest::SetRiskOperationPolicyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

SetRiskOperationPolicyRequest::~SetRiskOperationPolicyRequest() = default;

void SetRiskOperationPolicyRequest::validate()
{
}

web::json::value SetRiskOperationPolicyRequest::toJson() const
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
bool SetRiskOperationPolicyRequest::fromJson(const web::json::value& val)
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
            RuleAddRiskRuleRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetRiskOperationPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void SetRiskOperationPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetRiskOperationPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetRiskOperationPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string SetRiskOperationPolicyRequest::getId() const
{
    return id_;
}

void SetRiskOperationPolicyRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SetRiskOperationPolicyRequest::idIsSet() const
{
    return idIsSet_;
}

void SetRiskOperationPolicyRequest::unsetid()
{
    idIsSet_ = false;
}

RuleAddRiskRuleRequest SetRiskOperationPolicyRequest::getBody() const
{
    return body_;
}

void SetRiskOperationPolicyRequest::setBody(const RuleAddRiskRuleRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetRiskOperationPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetRiskOperationPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


