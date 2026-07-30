

#include "huaweicloud/modelarts/v1/model/ResourceRequirement.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ResourceRequirement::ResourceRequirement()
{
    key_ = "";
    keyIsSet_ = false;
    valuesIsSet_ = false;
    operator_ = "";
    operatorIsSet_ = false;
}

ResourceRequirement::~ResourceRequirement() = default;

void ResourceRequirement::validate()
{
}

web::json::value ResourceRequirement::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }
    if(operatorIsSet_) {
        val[utility::conversions::to_string_t("operator")] = ModelBase::toJson(operator_);
    }

    return val;
}
bool ResourceRequirement::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("values"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValues(refVal);
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


std::string ResourceRequirement::getKey() const
{
    return key_;
}

void ResourceRequirement::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ResourceRequirement::keyIsSet() const
{
    return keyIsSet_;
}

void ResourceRequirement::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& ResourceRequirement::getValues()
{
    return values_;
}

void ResourceRequirement::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool ResourceRequirement::valuesIsSet() const
{
    return valuesIsSet_;
}

void ResourceRequirement::unsetvalues()
{
    valuesIsSet_ = false;
}

std::string ResourceRequirement::getOperator() const
{
    return operator_;
}

void ResourceRequirement::setOperator(const std::string& value)
{
    operator_ = value;
    operatorIsSet_ = true;
}

bool ResourceRequirement::operatorIsSet() const
{
    return operatorIsSet_;
}

void ResourceRequirement::unsetoperator()
{
    operatorIsSet_ = false;
}

}
}
}
}
}


