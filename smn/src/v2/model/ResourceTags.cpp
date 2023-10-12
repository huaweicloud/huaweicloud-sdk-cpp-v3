

#include "huaweicloud/smn/v2/model/ResourceTags.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ResourceTags::ResourceTags()
{
    key_ = "";
    keyIsSet_ = false;
    valuesIsSet_ = false;
}

ResourceTags::~ResourceTags() = default;

void ResourceTags::validate()
{
}

web::json::value ResourceTags::toJson() const
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
bool ResourceTags::fromJson(const web::json::value& val)
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


std::string ResourceTags::getKey() const
{
    return key_;
}

void ResourceTags::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ResourceTags::keyIsSet() const
{
    return keyIsSet_;
}

void ResourceTags::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& ResourceTags::getValues()
{
    return values_;
}

void ResourceTags::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool ResourceTags::valuesIsSet() const
{
    return valuesIsSet_;
}

void ResourceTags::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


