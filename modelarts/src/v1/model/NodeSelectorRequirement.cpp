

#include "huaweicloud/modelarts/v1/model/NodeSelectorRequirement.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodeSelectorRequirement::NodeSelectorRequirement()
{
    key_ = "";
    keyIsSet_ = false;
    operator_ = "";
    operatorIsSet_ = false;
    valuesIsSet_ = false;
}

NodeSelectorRequirement::~NodeSelectorRequirement() = default;

void NodeSelectorRequirement::validate()
{
}

web::json::value NodeSelectorRequirement::toJson() const
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

    return val;
}
bool NodeSelectorRequirement::fromJson(const web::json::value& val)
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
    return ok;
}


std::string NodeSelectorRequirement::getKey() const
{
    return key_;
}

void NodeSelectorRequirement::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool NodeSelectorRequirement::keyIsSet() const
{
    return keyIsSet_;
}

void NodeSelectorRequirement::unsetkey()
{
    keyIsSet_ = false;
}

std::string NodeSelectorRequirement::getOperator() const
{
    return operator_;
}

void NodeSelectorRequirement::setOperator(const std::string& value)
{
    operator_ = value;
    operatorIsSet_ = true;
}

bool NodeSelectorRequirement::operatorIsSet() const
{
    return operatorIsSet_;
}

void NodeSelectorRequirement::unsetoperator()
{
    operatorIsSet_ = false;
}

std::vector<std::string>& NodeSelectorRequirement::getValues()
{
    return values_;
}

void NodeSelectorRequirement::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool NodeSelectorRequirement::valuesIsSet() const
{
    return valuesIsSet_;
}

void NodeSelectorRequirement::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


