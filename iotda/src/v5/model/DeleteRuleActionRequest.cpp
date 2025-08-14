

#include "huaweicloud/iotda/v5/model/DeleteRuleActionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteRuleActionRequest::DeleteRuleActionRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    actionId_ = "";
    actionIdIsSet_ = false;
}

DeleteRuleActionRequest::~DeleteRuleActionRequest() = default;

void DeleteRuleActionRequest::validate()
{
}

web::json::value DeleteRuleActionRequest::toJson() const
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
bool DeleteRuleActionRequest::fromJson(const web::json::value& val)
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


std::string DeleteRuleActionRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteRuleActionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteRuleActionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteRuleActionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteRuleActionRequest::getActionId() const
{
    return actionId_;
}

void DeleteRuleActionRequest::setActionId(const std::string& value)
{
    actionId_ = value;
    actionIdIsSet_ = true;
}

bool DeleteRuleActionRequest::actionIdIsSet() const
{
    return actionIdIsSet_;
}

void DeleteRuleActionRequest::unsetactionId()
{
    actionIdIsSet_ = false;
}

}
}
}
}
}


