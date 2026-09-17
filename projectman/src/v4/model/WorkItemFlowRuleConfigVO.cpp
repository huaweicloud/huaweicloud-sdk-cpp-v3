

#include "huaweicloud/projectman/v4/model/WorkItemFlowRuleConfigVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




WorkItemFlowRuleConfigVO::WorkItemFlowRuleConfigVO()
{
    code_ = "";
    codeIsSet_ = false;
    open_ = false;
    openIsSet_ = false;
    configValueIsSet_ = false;
}

WorkItemFlowRuleConfigVO::~WorkItemFlowRuleConfigVO() = default;

void WorkItemFlowRuleConfigVO::validate()
{
}

web::json::value WorkItemFlowRuleConfigVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(openIsSet_) {
        val[utility::conversions::to_string_t("open")] = ModelBase::toJson(open_);
    }
    if(configValueIsSet_) {
        val[utility::conversions::to_string_t("config_value")] = ModelBase::toJson(configValue_);
    }

    return val;
}
bool WorkItemFlowRuleConfigVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("open"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("open"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpen(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("config_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_value"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkItemFlowFieldConfigVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigValue(refVal);
        }
    }
    return ok;
}


std::string WorkItemFlowRuleConfigVO::getCode() const
{
    return code_;
}

void WorkItemFlowRuleConfigVO::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool WorkItemFlowRuleConfigVO::codeIsSet() const
{
    return codeIsSet_;
}

void WorkItemFlowRuleConfigVO::unsetcode()
{
    codeIsSet_ = false;
}

bool WorkItemFlowRuleConfigVO::isOpen() const
{
    return open_;
}

void WorkItemFlowRuleConfigVO::setOpen(bool value)
{
    open_ = value;
    openIsSet_ = true;
}

bool WorkItemFlowRuleConfigVO::openIsSet() const
{
    return openIsSet_;
}

void WorkItemFlowRuleConfigVO::unsetopen()
{
    openIsSet_ = false;
}

std::vector<WorkItemFlowFieldConfigVO>& WorkItemFlowRuleConfigVO::getConfigValue()
{
    return configValue_;
}

void WorkItemFlowRuleConfigVO::setConfigValue(const std::vector<WorkItemFlowFieldConfigVO>& value)
{
    configValue_ = value;
    configValueIsSet_ = true;
}

bool WorkItemFlowRuleConfigVO::configValueIsSet() const
{
    return configValueIsSet_;
}

void WorkItemFlowRuleConfigVO::unsetconfigValue()
{
    configValueIsSet_ = false;
}

}
}
}
}
}


