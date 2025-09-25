

#include "huaweicloud/codeartspipeline/v2/model/UpdateRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




UpdateRuleResponse::UpdateRuleResponse()
{
    status_ = false;
    statusIsSet_ = false;
    ruleId_ = "";
    ruleIdIsSet_ = false;
}

UpdateRuleResponse::~UpdateRuleResponse() = default;

void UpdateRuleResponse::validate()
{
}

web::json::value UpdateRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }

    return val;
}
bool UpdateRuleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleId(refVal);
        }
    }
    return ok;
}


bool UpdateRuleResponse::isStatus() const
{
    return status_;
}

void UpdateRuleResponse::setStatus(bool value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateRuleResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateRuleResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdateRuleResponse::getRuleId() const
{
    return ruleId_;
}

void UpdateRuleResponse::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool UpdateRuleResponse::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void UpdateRuleResponse::unsetruleId()
{
    ruleIdIsSet_ = false;
}

}
}
}
}
}


