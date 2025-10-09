

#include "huaweicloud/cce/v3/model/CustomizeResourceTag.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CustomizeResourceTag::CustomizeResourceTag()
{
    key_ = "";
    keyIsSet_ = false;
    valuesIsSet_ = false;
}

CustomizeResourceTag::~CustomizeResourceTag() = default;

void CustomizeResourceTag::validate()
{
}

web::json::value CustomizeResourceTag::toJson() const
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
bool CustomizeResourceTag::fromJson(const web::json::value& val)
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


std::string CustomizeResourceTag::getKey() const
{
    return key_;
}

void CustomizeResourceTag::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool CustomizeResourceTag::keyIsSet() const
{
    return keyIsSet_;
}

void CustomizeResourceTag::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& CustomizeResourceTag::getValues()
{
    return values_;
}

void CustomizeResourceTag::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool CustomizeResourceTag::valuesIsSet() const
{
    return valuesIsSet_;
}

void CustomizeResourceTag::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


