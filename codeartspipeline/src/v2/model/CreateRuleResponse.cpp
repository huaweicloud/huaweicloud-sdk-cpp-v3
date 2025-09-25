

#include "huaweicloud/codeartspipeline/v2/model/CreateRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




CreateRuleResponse::CreateRuleResponse()
{
    status_ = false;
    statusIsSet_ = false;
    ruleId_ = "";
    ruleIdIsSet_ = false;
}

CreateRuleResponse::~CreateRuleResponse() = default;

void CreateRuleResponse::validate()
{
}

web::json::value CreateRuleResponse::toJson() const
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
bool CreateRuleResponse::fromJson(const web::json::value& val)
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


bool CreateRuleResponse::isStatus() const
{
    return status_;
}

void CreateRuleResponse::setStatus(bool value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateRuleResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateRuleResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateRuleResponse::getRuleId() const
{
    return ruleId_;
}

void CreateRuleResponse::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool CreateRuleResponse::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void CreateRuleResponse::unsetruleId()
{
    ruleIdIsSet_ = false;
}

}
}
}
}
}


