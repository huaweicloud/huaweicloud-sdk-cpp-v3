

#include "huaweicloud/cloudtest/v1/model/ConditionInstance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ConditionInstance::ConditionInstance()
{
    conditionIndex_ = 0;
    conditionIndexIsSet_ = false;
    conditionMapIsSet_ = false;
    depParamMapIsSet_ = false;
    statementIndex_ = 0;
    statementIndexIsSet_ = false;
}

ConditionInstance::~ConditionInstance() = default;

void ConditionInstance::validate()
{
}

web::json::value ConditionInstance::toJson() const
{
    web::json::value val = web::json::value::object();

    if(conditionIndexIsSet_) {
        val[utility::conversions::to_string_t("conditionIndex")] = ModelBase::toJson(conditionIndex_);
    }
    if(conditionMapIsSet_) {
        val[utility::conversions::to_string_t("conditionMap")] = ModelBase::toJson(conditionMap_);
    }
    if(depParamMapIsSet_) {
        val[utility::conversions::to_string_t("depParamMap")] = ModelBase::toJson(depParamMap_);
    }
    if(statementIndexIsSet_) {
        val[utility::conversions::to_string_t("statementIndex")] = ModelBase::toJson(statementIndex_);
    }

    return val;
}
bool ConditionInstance::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("conditionIndex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conditionIndex"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConditionIndex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("conditionMap"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conditionMap"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::vector<std::string>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConditionMap(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("depParamMap"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("depParamMap"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, DepParamInstance> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDepParamMap(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("statementIndex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("statementIndex"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatementIndex(refVal);
        }
    }
    return ok;
}


int32_t ConditionInstance::getConditionIndex() const
{
    return conditionIndex_;
}

void ConditionInstance::setConditionIndex(int32_t value)
{
    conditionIndex_ = value;
    conditionIndexIsSet_ = true;
}

bool ConditionInstance::conditionIndexIsSet() const
{
    return conditionIndexIsSet_;
}

void ConditionInstance::unsetconditionIndex()
{
    conditionIndexIsSet_ = false;
}

std::map<std::string, std::vector<std::string>>& ConditionInstance::getConditionMap()
{
    return conditionMap_;
}

void ConditionInstance::setConditionMap(const std::map<std::string, std::vector<std::string>>& value)
{
    conditionMap_ = value;
    conditionMapIsSet_ = true;
}

bool ConditionInstance::conditionMapIsSet() const
{
    return conditionMapIsSet_;
}

void ConditionInstance::unsetconditionMap()
{
    conditionMapIsSet_ = false;
}

std::map<std::string, DepParamInstance>& ConditionInstance::getDepParamMap()
{
    return depParamMap_;
}

void ConditionInstance::setDepParamMap(const std::map<std::string, DepParamInstance>& value)
{
    depParamMap_ = value;
    depParamMapIsSet_ = true;
}

bool ConditionInstance::depParamMapIsSet() const
{
    return depParamMapIsSet_;
}

void ConditionInstance::unsetdepParamMap()
{
    depParamMapIsSet_ = false;
}

int32_t ConditionInstance::getStatementIndex() const
{
    return statementIndex_;
}

void ConditionInstance::setStatementIndex(int32_t value)
{
    statementIndex_ = value;
    statementIndexIsSet_ = true;
}

bool ConditionInstance::statementIndexIsSet() const
{
    return statementIndexIsSet_;
}

void ConditionInstance::unsetstatementIndex()
{
    statementIndexIsSet_ = false;
}

}
}
}
}
}


