

#include "huaweicloud/modelarts/v1/model/PoolTag.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolTag::PoolTag()
{
    key_ = "";
    keyIsSet_ = false;
    valuesIsSet_ = false;
}

PoolTag::~PoolTag() = default;

void PoolTag::validate()
{
}

web::json::value PoolTag::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }

    return val;
}
bool PoolTag::fromJson(const web::json::value& val)
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
    return ok;
}


std::string PoolTag::getKey() const
{
    return key_;
}

void PoolTag::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool PoolTag::keyIsSet() const
{
    return keyIsSet_;
}

void PoolTag::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& PoolTag::getValues()
{
    return values_;
}

void PoolTag::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool PoolTag::valuesIsSet() const
{
    return valuesIsSet_;
}

void PoolTag::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


