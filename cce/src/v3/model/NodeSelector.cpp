

#include "huaweicloud/cce/v3/model/NodeSelector.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodeSelector::NodeSelector()
{
    key_ = "";
    keyIsSet_ = false;
    valueIsSet_ = false;
    operator_ = "";
    operatorIsSet_ = false;
}

NodeSelector::~NodeSelector() = default;

void NodeSelector::validate()
{
}

web::json::value NodeSelector::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(operatorIsSet_) {
        val[utility::conversions::to_string_t("operator")] = ModelBase::toJson(operator_);
    }

    return val;
}
bool NodeSelector::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
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
    return ok;
}


std::string NodeSelector::getKey() const
{
    return key_;
}

void NodeSelector::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool NodeSelector::keyIsSet() const
{
    return keyIsSet_;
}

void NodeSelector::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& NodeSelector::getValue()
{
    return value_;
}

void NodeSelector::setValue(const std::vector<std::string>& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool NodeSelector::valueIsSet() const
{
    return valueIsSet_;
}

void NodeSelector::unsetvalue()
{
    valueIsSet_ = false;
}

std::string NodeSelector::getOperator() const
{
    return operator_;
}

void NodeSelector::setOperator(const std::string& value)
{
    operator_ = value;
    operatorIsSet_ = true;
}

bool NodeSelector::operatorIsSet() const
{
    return operatorIsSet_;
}

void NodeSelector::unsetoperator()
{
    operatorIsSet_ = false;
}

}
}
}
}
}


