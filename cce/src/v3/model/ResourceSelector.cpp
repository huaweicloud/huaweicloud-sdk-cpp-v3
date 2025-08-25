

#include "huaweicloud/cce/v3/model/ResourceSelector.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ResourceSelector::ResourceSelector()
{
    key_ = "";
    keyIsSet_ = false;
    valuesIsSet_ = false;
    operator_ = "";
    operatorIsSet_ = false;
}

ResourceSelector::~ResourceSelector() = default;

void ResourceSelector::validate()
{
}

web::json::value ResourceSelector::toJson() const
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
bool ResourceSelector::fromJson(const web::json::value& val)
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


std::string ResourceSelector::getKey() const
{
    return key_;
}

void ResourceSelector::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ResourceSelector::keyIsSet() const
{
    return keyIsSet_;
}

void ResourceSelector::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& ResourceSelector::getValues()
{
    return values_;
}

void ResourceSelector::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool ResourceSelector::valuesIsSet() const
{
    return valuesIsSet_;
}

void ResourceSelector::unsetvalues()
{
    valuesIsSet_ = false;
}

std::string ResourceSelector::getOperator() const
{
    return operator_;
}

void ResourceSelector::setOperator(const std::string& value)
{
    operator_ = value;
    operatorIsSet_ = true;
}

bool ResourceSelector::operatorIsSet() const
{
    return operatorIsSet_;
}

void ResourceSelector::unsetoperator()
{
    operatorIsSet_ = false;
}

}
}
}
}
}


