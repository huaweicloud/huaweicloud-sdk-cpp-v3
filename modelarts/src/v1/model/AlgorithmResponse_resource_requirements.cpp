

#include "huaweicloud/modelarts/v1/model/AlgorithmResponse_resource_requirements.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AlgorithmResponse_resource_requirements::AlgorithmResponse_resource_requirements()
{
    key_ = "";
    keyIsSet_ = false;
    valueIsSet_ = false;
    operator_ = "";
    operatorIsSet_ = false;
}

AlgorithmResponse_resource_requirements::~AlgorithmResponse_resource_requirements() = default;

void AlgorithmResponse_resource_requirements::validate()
{
}

web::json::value AlgorithmResponse_resource_requirements::toJson() const
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
bool AlgorithmResponse_resource_requirements::fromJson(const web::json::value& val)
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


std::string AlgorithmResponse_resource_requirements::getKey() const
{
    return key_;
}

void AlgorithmResponse_resource_requirements::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool AlgorithmResponse_resource_requirements::keyIsSet() const
{
    return keyIsSet_;
}

void AlgorithmResponse_resource_requirements::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& AlgorithmResponse_resource_requirements::getValue()
{
    return value_;
}

void AlgorithmResponse_resource_requirements::setValue(const std::vector<std::string>& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool AlgorithmResponse_resource_requirements::valueIsSet() const
{
    return valueIsSet_;
}

void AlgorithmResponse_resource_requirements::unsetvalue()
{
    valueIsSet_ = false;
}

std::string AlgorithmResponse_resource_requirements::getOperator() const
{
    return operator_;
}

void AlgorithmResponse_resource_requirements::setOperator(const std::string& value)
{
    operator_ = value;
    operatorIsSet_ = true;
}

bool AlgorithmResponse_resource_requirements::operatorIsSet() const
{
    return operatorIsSet_;
}

void AlgorithmResponse_resource_requirements::unsetoperator()
{
    operatorIsSet_ = false;
}

}
}
}
}
}


