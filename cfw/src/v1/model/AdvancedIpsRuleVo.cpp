

#include "huaweicloud/cfw/v1/model/AdvancedIpsRuleVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AdvancedIpsRuleVo::AdvancedIpsRuleVo()
{
    action_ = 0;
    actionIsSet_ = false;
    ipsRuleId_ = "";
    ipsRuleIdIsSet_ = false;
    ipsRuleType_ = 0;
    ipsRuleTypeIsSet_ = false;
    param_ = "";
    paramIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
}

AdvancedIpsRuleVo::~AdvancedIpsRuleVo() = default;

void AdvancedIpsRuleVo::validate()
{
}

web::json::value AdvancedIpsRuleVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(ipsRuleIdIsSet_) {
        val[utility::conversions::to_string_t("ips_rule_id")] = ModelBase::toJson(ipsRuleId_);
    }
    if(ipsRuleTypeIsSet_) {
        val[utility::conversions::to_string_t("ips_rule_type")] = ModelBase::toJson(ipsRuleType_);
    }
    if(paramIsSet_) {
        val[utility::conversions::to_string_t("param")] = ModelBase::toJson(param_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool AdvancedIpsRuleVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ips_rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips_rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpsRuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ips_rule_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips_rule_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpsRuleType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("param"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("param"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


int32_t AdvancedIpsRuleVo::getAction() const
{
    return action_;
}

void AdvancedIpsRuleVo::setAction(int32_t value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool AdvancedIpsRuleVo::actionIsSet() const
{
    return actionIsSet_;
}

void AdvancedIpsRuleVo::unsetaction()
{
    actionIsSet_ = false;
}

std::string AdvancedIpsRuleVo::getIpsRuleId() const
{
    return ipsRuleId_;
}

void AdvancedIpsRuleVo::setIpsRuleId(const std::string& value)
{
    ipsRuleId_ = value;
    ipsRuleIdIsSet_ = true;
}

bool AdvancedIpsRuleVo::ipsRuleIdIsSet() const
{
    return ipsRuleIdIsSet_;
}

void AdvancedIpsRuleVo::unsetipsRuleId()
{
    ipsRuleIdIsSet_ = false;
}

int32_t AdvancedIpsRuleVo::getIpsRuleType() const
{
    return ipsRuleType_;
}

void AdvancedIpsRuleVo::setIpsRuleType(int32_t value)
{
    ipsRuleType_ = value;
    ipsRuleTypeIsSet_ = true;
}

bool AdvancedIpsRuleVo::ipsRuleTypeIsSet() const
{
    return ipsRuleTypeIsSet_;
}

void AdvancedIpsRuleVo::unsetipsRuleType()
{
    ipsRuleTypeIsSet_ = false;
}

std::string AdvancedIpsRuleVo::getParam() const
{
    return param_;
}

void AdvancedIpsRuleVo::setParam(const std::string& value)
{
    param_ = value;
    paramIsSet_ = true;
}

bool AdvancedIpsRuleVo::paramIsSet() const
{
    return paramIsSet_;
}

void AdvancedIpsRuleVo::unsetparam()
{
    paramIsSet_ = false;
}

int32_t AdvancedIpsRuleVo::getStatus() const
{
    return status_;
}

void AdvancedIpsRuleVo::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AdvancedIpsRuleVo::statusIsSet() const
{
    return statusIsSet_;
}

void AdvancedIpsRuleVo::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


