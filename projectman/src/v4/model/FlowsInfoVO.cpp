

#include "huaweicloud/projectman/v4/model/FlowsInfoVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




FlowsInfoVO::FlowsInfoVO()
{
    code_ = "";
    codeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    extraConfigIsSet_ = false;
    fromCode_ = "";
    fromCodeIsSet_ = false;
    toCode_ = "";
    toCodeIsSet_ = false;
    beforeRuleConfigsIsSet_ = false;
    beforeRuleValidatorIsSet_ = false;
    afterRuleConfigsIsSet_ = false;
}

FlowsInfoVO::~FlowsInfoVO() = default;

void FlowsInfoVO::validate()
{
}

web::json::value FlowsInfoVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(extraConfigIsSet_) {
        val[utility::conversions::to_string_t("extra_config")] = ModelBase::toJson(extraConfig_);
    }
    if(fromCodeIsSet_) {
        val[utility::conversions::to_string_t("from_code")] = ModelBase::toJson(fromCode_);
    }
    if(toCodeIsSet_) {
        val[utility::conversions::to_string_t("to_code")] = ModelBase::toJson(toCode_);
    }
    if(beforeRuleConfigsIsSet_) {
        val[utility::conversions::to_string_t("before_rule_configs")] = ModelBase::toJson(beforeRuleConfigs_);
    }
    if(beforeRuleValidatorIsSet_) {
        val[utility::conversions::to_string_t("before_rule_validator")] = ModelBase::toJson(beforeRuleValidator_);
    }
    if(afterRuleConfigsIsSet_) {
        val[utility::conversions::to_string_t("after_rule_configs")] = ModelBase::toJson(afterRuleConfigs_);
    }

    return val;
}
bool FlowsInfoVO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extra_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extra_config"));
        if(!fieldValue.is_null())
        {
            std::vector<std::map<std::string, Object>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtraConfig(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("before_rule_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("before_rule_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkItemFlowRuleConfigVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeforeRuleConfigs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("before_rule_validator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("before_rule_validator"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeforeRuleValidator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("after_rule_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("after_rule_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkItemFlowRuleConfigVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAfterRuleConfigs(refVal);
        }
    }
    return ok;
}


std::string FlowsInfoVO::getCode() const
{
    return code_;
}

void FlowsInfoVO::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool FlowsInfoVO::codeIsSet() const
{
    return codeIsSet_;
}

void FlowsInfoVO::unsetcode()
{
    codeIsSet_ = false;
}

std::string FlowsInfoVO::getName() const
{
    return name_;
}

void FlowsInfoVO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool FlowsInfoVO::nameIsSet() const
{
    return nameIsSet_;
}

void FlowsInfoVO::unsetname()
{
    nameIsSet_ = false;
}

std::string FlowsInfoVO::getDescription() const
{
    return description_;
}

void FlowsInfoVO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool FlowsInfoVO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void FlowsInfoVO::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<std::map<std::string, Object>>& FlowsInfoVO::getExtraConfig()
{
    return extraConfig_;
}

void FlowsInfoVO::setExtraConfig(const std::vector<std::map<std::string, Object>>& value)
{
    extraConfig_ = value;
    extraConfigIsSet_ = true;
}

bool FlowsInfoVO::extraConfigIsSet() const
{
    return extraConfigIsSet_;
}

void FlowsInfoVO::unsetextraConfig()
{
    extraConfigIsSet_ = false;
}

std::string FlowsInfoVO::getFromCode() const
{
    return fromCode_;
}

void FlowsInfoVO::setFromCode(const std::string& value)
{
    fromCode_ = value;
    fromCodeIsSet_ = true;
}

bool FlowsInfoVO::fromCodeIsSet() const
{
    return fromCodeIsSet_;
}

void FlowsInfoVO::unsetfromCode()
{
    fromCodeIsSet_ = false;
}

std::string FlowsInfoVO::getToCode() const
{
    return toCode_;
}

void FlowsInfoVO::setToCode(const std::string& value)
{
    toCode_ = value;
    toCodeIsSet_ = true;
}

bool FlowsInfoVO::toCodeIsSet() const
{
    return toCodeIsSet_;
}

void FlowsInfoVO::unsettoCode()
{
    toCodeIsSet_ = false;
}

std::vector<WorkItemFlowRuleConfigVO>& FlowsInfoVO::getBeforeRuleConfigs()
{
    return beforeRuleConfigs_;
}

void FlowsInfoVO::setBeforeRuleConfigs(const std::vector<WorkItemFlowRuleConfigVO>& value)
{
    beforeRuleConfigs_ = value;
    beforeRuleConfigsIsSet_ = true;
}

bool FlowsInfoVO::beforeRuleConfigsIsSet() const
{
    return beforeRuleConfigsIsSet_;
}

void FlowsInfoVO::unsetbeforeRuleConfigs()
{
    beforeRuleConfigsIsSet_ = false;
}

std::vector<std::string>& FlowsInfoVO::getBeforeRuleValidator()
{
    return beforeRuleValidator_;
}

void FlowsInfoVO::setBeforeRuleValidator(const std::vector<std::string>& value)
{
    beforeRuleValidator_ = value;
    beforeRuleValidatorIsSet_ = true;
}

bool FlowsInfoVO::beforeRuleValidatorIsSet() const
{
    return beforeRuleValidatorIsSet_;
}

void FlowsInfoVO::unsetbeforeRuleValidator()
{
    beforeRuleValidatorIsSet_ = false;
}

std::vector<WorkItemFlowRuleConfigVO>& FlowsInfoVO::getAfterRuleConfigs()
{
    return afterRuleConfigs_;
}

void FlowsInfoVO::setAfterRuleConfigs(const std::vector<WorkItemFlowRuleConfigVO>& value)
{
    afterRuleConfigs_ = value;
    afterRuleConfigsIsSet_ = true;
}

bool FlowsInfoVO::afterRuleConfigsIsSet() const
{
    return afterRuleConfigsIsSet_;
}

void FlowsInfoVO::unsetafterRuleConfigs()
{
    afterRuleConfigsIsSet_ = false;
}

}
}
}
}
}


