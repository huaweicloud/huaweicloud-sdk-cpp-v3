

#include "huaweicloud/metastudio/v1/model/ListSmartLiveRuleCommandsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListSmartLiveRuleCommandsResponse::ListSmartLiveRuleCommandsResponse()
{
    count_ = 0;
    countIsSet_ = false;
    ruleCommandsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListSmartLiveRuleCommandsResponse::~ListSmartLiveRuleCommandsResponse() = default;

void ListSmartLiveRuleCommandsResponse::validate()
{
}

web::json::value ListSmartLiveRuleCommandsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(ruleCommandsIsSet_) {
        val[utility::conversions::to_string_t("rule_commands")] = ModelBase::toJson(ruleCommands_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListSmartLiveRuleCommandsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_commands"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_commands"));
        if(!fieldValue.is_null())
        {
            std::vector<RuleCommand> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleCommands(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


int32_t ListSmartLiveRuleCommandsResponse::getCount() const
{
    return count_;
}

void ListSmartLiveRuleCommandsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListSmartLiveRuleCommandsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListSmartLiveRuleCommandsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<RuleCommand>& ListSmartLiveRuleCommandsResponse::getRuleCommands()
{
    return ruleCommands_;
}

void ListSmartLiveRuleCommandsResponse::setRuleCommands(const std::vector<RuleCommand>& value)
{
    ruleCommands_ = value;
    ruleCommandsIsSet_ = true;
}

bool ListSmartLiveRuleCommandsResponse::ruleCommandsIsSet() const
{
    return ruleCommandsIsSet_;
}

void ListSmartLiveRuleCommandsResponse::unsetruleCommands()
{
    ruleCommandsIsSet_ = false;
}

std::string ListSmartLiveRuleCommandsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListSmartLiveRuleCommandsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListSmartLiveRuleCommandsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListSmartLiveRuleCommandsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


