

#include "huaweicloud/modelarts/v1/model/AffinityRule.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AffinityRule::AffinityRule()
{
    key_ = "";
    keyIsSet_ = false;
    operator_ = "";
    operatorIsSet_ = false;
    valuesIsSet_ = false;
    weight_ = 0;
    weightIsSet_ = false;
}

AffinityRule::~AffinityRule() = default;

void AffinityRule::validate()
{
}

web::json::value AffinityRule::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(operatorIsSet_) {
        val[utility::conversions::to_string_t("operator")] = ModelBase::toJson(operator_);
    }
    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }
    if(weightIsSet_) {
        val[utility::conversions::to_string_t("weight")] = ModelBase::toJson(weight_);
    }

    return val;
}
bool AffinityRule::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("values"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValues(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("weight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("weight"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWeight(refVal);
        }
    }
    return ok;
}


std::string AffinityRule::getKey() const
{
    return key_;
}

void AffinityRule::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool AffinityRule::keyIsSet() const
{
    return keyIsSet_;
}

void AffinityRule::unsetkey()
{
    keyIsSet_ = false;
}

std::string AffinityRule::getOperator() const
{
    return operator_;
}

void AffinityRule::setOperator(const std::string& value)
{
    operator_ = value;
    operatorIsSet_ = true;
}

bool AffinityRule::operatorIsSet() const
{
    return operatorIsSet_;
}

void AffinityRule::unsetoperator()
{
    operatorIsSet_ = false;
}

std::vector<std::string>& AffinityRule::getValues()
{
    return values_;
}

void AffinityRule::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool AffinityRule::valuesIsSet() const
{
    return valuesIsSet_;
}

void AffinityRule::unsetvalues()
{
    valuesIsSet_ = false;
}

int32_t AffinityRule::getWeight() const
{
    return weight_;
}

void AffinityRule::setWeight(int32_t value)
{
    weight_ = value;
    weightIsSet_ = true;
}

bool AffinityRule::weightIsSet() const
{
    return weightIsSet_;
}

void AffinityRule::unsetweight()
{
    weightIsSet_ = false;
}

}
}
}
}
}


