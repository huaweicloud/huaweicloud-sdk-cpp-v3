

#include "huaweicloud/projectman/v4/model/WorkflowTemplateFlowsVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




WorkflowTemplateFlowsVO::WorkflowTemplateFlowsVO()
{
    code_ = "";
    codeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    beforeRuleValidatorIsSet_ = false;
    beforeRuleConfigsIsSet_ = false;
    fromCode_ = "";
    fromCodeIsSet_ = false;
    toCode_ = "";
    toCodeIsSet_ = false;
}

WorkflowTemplateFlowsVO::~WorkflowTemplateFlowsVO() = default;

void WorkflowTemplateFlowsVO::validate()
{
}

web::json::value WorkflowTemplateFlowsVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(beforeRuleValidatorIsSet_) {
        val[utility::conversions::to_string_t("before_rule_validator")] = ModelBase::toJson(beforeRuleValidator_);
    }
    if(beforeRuleConfigsIsSet_) {
        val[utility::conversions::to_string_t("before_rule_configs")] = ModelBase::toJson(beforeRuleConfigs_);
    }
    if(fromCodeIsSet_) {
        val[utility::conversions::to_string_t("from_code")] = ModelBase::toJson(fromCode_);
    }
    if(toCodeIsSet_) {
        val[utility::conversions::to_string_t("to_code")] = ModelBase::toJson(toCode_);
    }

    return val;
}
bool WorkflowTemplateFlowsVO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("before_rule_validator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("before_rule_validator"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkflowTemplateConfigsVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeforeRuleValidator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("before_rule_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("before_rule_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkflowTemplateConfigsVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeforeRuleConfigs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("from_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("from_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFromCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("to_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("to_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setToCode(refVal);
        }
    }
    return ok;
}


std::string WorkflowTemplateFlowsVO::getCode() const
{
    return code_;
}

void WorkflowTemplateFlowsVO::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool WorkflowTemplateFlowsVO::codeIsSet() const
{
    return codeIsSet_;
}

void WorkflowTemplateFlowsVO::unsetcode()
{
    codeIsSet_ = false;
}

std::string WorkflowTemplateFlowsVO::getName() const
{
    return name_;
}

void WorkflowTemplateFlowsVO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool WorkflowTemplateFlowsVO::nameIsSet() const
{
    return nameIsSet_;
}

void WorkflowTemplateFlowsVO::unsetname()
{
    nameIsSet_ = false;
}

std::vector<WorkflowTemplateConfigsVO>& WorkflowTemplateFlowsVO::getBeforeRuleValidator()
{
    return beforeRuleValidator_;
}

void WorkflowTemplateFlowsVO::setBeforeRuleValidator(const std::vector<WorkflowTemplateConfigsVO>& value)
{
    beforeRuleValidator_ = value;
    beforeRuleValidatorIsSet_ = true;
}

bool WorkflowTemplateFlowsVO::beforeRuleValidatorIsSet() const
{
    return beforeRuleValidatorIsSet_;
}

void WorkflowTemplateFlowsVO::unsetbeforeRuleValidator()
{
    beforeRuleValidatorIsSet_ = false;
}

std::vector<WorkflowTemplateConfigsVO>& WorkflowTemplateFlowsVO::getBeforeRuleConfigs()
{
    return beforeRuleConfigs_;
}

void WorkflowTemplateFlowsVO::setBeforeRuleConfigs(const std::vector<WorkflowTemplateConfigsVO>& value)
{
    beforeRuleConfigs_ = value;
    beforeRuleConfigsIsSet_ = true;
}

bool WorkflowTemplateFlowsVO::beforeRuleConfigsIsSet() const
{
    return beforeRuleConfigsIsSet_;
}

void WorkflowTemplateFlowsVO::unsetbeforeRuleConfigs()
{
    beforeRuleConfigsIsSet_ = false;
}

std::string WorkflowTemplateFlowsVO::getFromCode() const
{
    return fromCode_;
}

void WorkflowTemplateFlowsVO::setFromCode(const std::string& value)
{
    fromCode_ = value;
    fromCodeIsSet_ = true;
}

bool WorkflowTemplateFlowsVO::fromCodeIsSet() const
{
    return fromCodeIsSet_;
}

void WorkflowTemplateFlowsVO::unsetfromCode()
{
    fromCodeIsSet_ = false;
}

std::string WorkflowTemplateFlowsVO::getToCode() const
{
    return toCode_;
}

void WorkflowTemplateFlowsVO::setToCode(const std::string& value)
{
    toCode_ = value;
    toCodeIsSet_ = true;
}

bool WorkflowTemplateFlowsVO::toCodeIsSet() const
{
    return toCodeIsSet_;
}

void WorkflowTemplateFlowsVO::unsettoCode()
{
    toCodeIsSet_ = false;
}

}
}
}
}
}


