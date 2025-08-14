

#include "huaweicloud/iotda/v5/model/ShowRuleActionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowRuleActionRequest::ShowRuleActionRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    actionId_ = "";
    actionIdIsSet_ = false;
}

ShowRuleActionRequest::~ShowRuleActionRequest() = default;

void ShowRuleActionRequest::validate()
{
}

web::json::value ShowRuleActionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(actionIdIsSet_) {
        val[utility::conversions::to_string_t("action_id")] = ModelBase::toJson(actionId_);
    }

    return val;
}
bool ShowRuleActionRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowRuleActionRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowRuleActionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowRuleActionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowRuleActionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowRuleActionRequest::getActionId() const
{
    return actionId_;
}

void ShowRuleActionRequest::setActionId(const std::string& value)
{
    actionId_ = value;
    actionIdIsSet_ = true;
}

bool ShowRuleActionRequest::actionIdIsSet() const
{
    return actionIdIsSet_;
}

void ShowRuleActionRequest::unsetactionId()
{
    actionIdIsSet_ = false;
}

}
}
}
}
}


