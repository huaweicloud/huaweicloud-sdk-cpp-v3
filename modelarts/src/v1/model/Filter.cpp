

#include "huaweicloud/modelarts/v1/model/Filter.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Filter::Filter()
{
    key_ = "";
    keyIsSet_ = false;
    operator_ = "";
    operatorIsSet_ = false;
    valueIsSet_ = false;
}

Filter::~Filter() = default;

void Filter::validate()
{
}

web::json::value Filter::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(operatorIsSet_) {
        val[utility::conversions::to_string_t("operator")] = ModelBase::toJson(operator_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool Filter::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string Filter::getKey() const
{
    return key_;
}

void Filter::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool Filter::keyIsSet() const
{
    return keyIsSet_;
}

void Filter::unsetkey()
{
    keyIsSet_ = false;
}

std::string Filter::getOperator() const
{
    return operator_;
}

void Filter::setOperator(const std::string& value)
{
    operator_ = value;
    operatorIsSet_ = true;
}

bool Filter::operatorIsSet() const
{
    return operatorIsSet_;
}

void Filter::unsetoperator()
{
    operatorIsSet_ = false;
}

std::vector<std::string>& Filter::getValue()
{
    return value_;
}

void Filter::setValue(const std::vector<std::string>& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool Filter::valueIsSet() const
{
    return valueIsSet_;
}

void Filter::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


