

#include "huaweicloud/cbr/v1/model/SysTags.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




SysTags::SysTags()
{
    key_ = "";
    keyIsSet_ = false;
    valuesIsSet_ = false;
}

SysTags::~SysTags() = default;

void SysTags::validate()
{
}

web::json::value SysTags::toJson() const
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

bool SysTags::fromJson(const web::json::value& val)
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

std::string SysTags::getKey() const
{
    return key_;
}

void SysTags::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool SysTags::keyIsSet() const
{
    return keyIsSet_;
}

void SysTags::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& SysTags::getValues()
{
    return values_;
}

void SysTags::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool SysTags::valuesIsSet() const
{
    return valuesIsSet_;
}

void SysTags::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


