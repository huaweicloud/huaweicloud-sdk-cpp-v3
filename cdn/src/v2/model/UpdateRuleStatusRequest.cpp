

#include "huaweicloud/cdn/v2/model/UpdateRuleStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




UpdateRuleStatusRequest::UpdateRuleStatusRequest()
{
    ruleId_ = "";
    ruleIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    priority_ = 0;
    priorityIsSet_ = false;
}

UpdateRuleStatusRequest::~UpdateRuleStatusRequest() = default;

void UpdateRuleStatusRequest::validate()
{
}

web::json::value UpdateRuleStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }

    return val;
}
bool UpdateRuleStatusRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("priority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriority(refVal);
        }
    }
    return ok;
}


std::string UpdateRuleStatusRequest::getRuleId() const
{
    return ruleId_;
}

void UpdateRuleStatusRequest::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool UpdateRuleStatusRequest::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void UpdateRuleStatusRequest::unsetruleId()
{
    ruleIdIsSet_ = false;
}

std::string UpdateRuleStatusRequest::getStatus() const
{
    return status_;
}

void UpdateRuleStatusRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateRuleStatusRequest::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateRuleStatusRequest::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t UpdateRuleStatusRequest::getPriority() const
{
    return priority_;
}

void UpdateRuleStatusRequest::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool UpdateRuleStatusRequest::priorityIsSet() const
{
    return priorityIsSet_;
}

void UpdateRuleStatusRequest::unsetpriority()
{
    priorityIsSet_ = false;
}

}
}
}
}
}


