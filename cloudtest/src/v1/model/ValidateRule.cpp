

#include "huaweicloud/cloudtest/v1/model/ValidateRule.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ValidateRule::ValidateRule()
{
    dependentInfoIsSet_ = false;
    enabled_ = false;
    enabledIsSet_ = false;
    isConfigDep_ = false;
    isConfigDepIsSet_ = false;
    isDependent_ = false;
    isDependentIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
    specialChar_ = "";
    specialCharIsSet_ = false;
    specialCharValid_ = "";
    specialCharValidIsSet_ = false;
    xExample_ = "";
    xExampleIsSet_ = false;
}

ValidateRule::~ValidateRule() = default;

void ValidateRule::validate()
{
}

web::json::value ValidateRule::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dependentInfoIsSet_) {
        val[utility::conversions::to_string_t("dependent_info")] = ModelBase::toJson(dependentInfo_);
    }
    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }
    if(isConfigDepIsSet_) {
        val[utility::conversions::to_string_t("is_configDep")] = ModelBase::toJson(isConfigDep_);
    }
    if(isDependentIsSet_) {
        val[utility::conversions::to_string_t("is_dependent")] = ModelBase::toJson(isDependent_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(specialCharIsSet_) {
        val[utility::conversions::to_string_t("special_char")] = ModelBase::toJson(specialChar_);
    }
    if(specialCharValidIsSet_) {
        val[utility::conversions::to_string_t("special_char_valid")] = ModelBase::toJson(specialCharValid_);
    }
    if(xExampleIsSet_) {
        val[utility::conversions::to_string_t("x_example")] = ModelBase::toJson(xExample_);
    }

    return val;
}
bool ValidateRule::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dependent_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dependent_info"));
        if(!fieldValue.is_null())
        {
            std::vector<ConditionInstance> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDependentInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_configDep"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_configDep"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsConfigDep(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_dependent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_dependent"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDependent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("special_char"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("special_char"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecialChar(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("special_char_valid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("special_char_valid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecialCharValid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("x_example"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("x_example"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXExample(refVal);
        }
    }
    return ok;
}


std::vector<ConditionInstance>& ValidateRule::getDependentInfo()
{
    return dependentInfo_;
}

void ValidateRule::setDependentInfo(const std::vector<ConditionInstance>& value)
{
    dependentInfo_ = value;
    dependentInfoIsSet_ = true;
}

bool ValidateRule::dependentInfoIsSet() const
{
    return dependentInfoIsSet_;
}

void ValidateRule::unsetdependentInfo()
{
    dependentInfoIsSet_ = false;
}

bool ValidateRule::isEnabled() const
{
    return enabled_;
}

void ValidateRule::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool ValidateRule::enabledIsSet() const
{
    return enabledIsSet_;
}

void ValidateRule::unsetenabled()
{
    enabledIsSet_ = false;
}

bool ValidateRule::isIsConfigDep() const
{
    return isConfigDep_;
}

void ValidateRule::setIsConfigDep(bool value)
{
    isConfigDep_ = value;
    isConfigDepIsSet_ = true;
}

bool ValidateRule::isConfigDepIsSet() const
{
    return isConfigDepIsSet_;
}

void ValidateRule::unsetisConfigDep()
{
    isConfigDepIsSet_ = false;
}

bool ValidateRule::isIsDependent() const
{
    return isDependent_;
}

void ValidateRule::setIsDependent(bool value)
{
    isDependent_ = value;
    isDependentIsSet_ = true;
}

bool ValidateRule::isDependentIsSet() const
{
    return isDependentIsSet_;
}

void ValidateRule::unsetisDependent()
{
    isDependentIsSet_ = false;
}

std::string ValidateRule::getMessage() const
{
    return message_;
}

void ValidateRule::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ValidateRule::messageIsSet() const
{
    return messageIsSet_;
}

void ValidateRule::unsetmessage()
{
    messageIsSet_ = false;
}

std::string ValidateRule::getResult() const
{
    return result_;
}

void ValidateRule::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ValidateRule::resultIsSet() const
{
    return resultIsSet_;
}

void ValidateRule::unsetresult()
{
    resultIsSet_ = false;
}

std::string ValidateRule::getSpecialChar() const
{
    return specialChar_;
}

void ValidateRule::setSpecialChar(const std::string& value)
{
    specialChar_ = value;
    specialCharIsSet_ = true;
}

bool ValidateRule::specialCharIsSet() const
{
    return specialCharIsSet_;
}

void ValidateRule::unsetspecialChar()
{
    specialCharIsSet_ = false;
}

std::string ValidateRule::getSpecialCharValid() const
{
    return specialCharValid_;
}

void ValidateRule::setSpecialCharValid(const std::string& value)
{
    specialCharValid_ = value;
    specialCharValidIsSet_ = true;
}

bool ValidateRule::specialCharValidIsSet() const
{
    return specialCharValidIsSet_;
}

void ValidateRule::unsetspecialCharValid()
{
    specialCharValidIsSet_ = false;
}

std::string ValidateRule::getXExample() const
{
    return xExample_;
}

void ValidateRule::setXExample(const std::string& value)
{
    xExample_ = value;
    xExampleIsSet_ = true;
}

bool ValidateRule::xExampleIsSet() const
{
    return xExampleIsSet_;
}

void ValidateRule::unsetxExample()
{
    xExampleIsSet_ = false;
}

}
}
}
}
}


