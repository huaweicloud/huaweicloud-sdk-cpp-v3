

#include "huaweicloud/iotda/v5/model/UpdateRuleActionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateRuleActionRequest::UpdateRuleActionRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    actionId_ = "";
    actionIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateRuleActionRequest::~UpdateRuleActionRequest() = default;

void UpdateRuleActionRequest::validate()
{
}

web::json::value UpdateRuleActionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(actionIdIsSet_) {
        val[utility::conversions::to_string_t("action_id")] = ModelBase::toJson(actionId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateRuleActionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateActionReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateRuleActionRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateRuleActionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateRuleActionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateRuleActionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateRuleActionRequest::getActionId() const
{
    return actionId_;
}

void UpdateRuleActionRequest::setActionId(const std::string& value)
{
    actionId_ = value;
    actionIdIsSet_ = true;
}

bool UpdateRuleActionRequest::actionIdIsSet() const
{
    return actionIdIsSet_;
}

void UpdateRuleActionRequest::unsetactionId()
{
    actionIdIsSet_ = false;
}

UpdateActionReq UpdateRuleActionRequest::getBody() const
{
    return body_;
}

void UpdateRuleActionRequest::setBody(const UpdateActionReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateRuleActionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateRuleActionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


