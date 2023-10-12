

#include "huaweicloud/gaussdbfornosql/v3/model/Tag.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




Tag::Tag()
{
    type_ = "";
    typeIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
    valuesIsSet_ = false;
}

Tag::~Tag() = default;

void Tag::validate()
{
}

web::json::value Tag::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }

    return val;
}
bool Tag::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
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


std::string Tag::getType() const
{
    return type_;
}

void Tag::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Tag::typeIsSet() const
{
    return typeIsSet_;
}

void Tag::unsettype()
{
    typeIsSet_ = false;
}

std::string Tag::getKey() const
{
    return key_;
}

void Tag::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool Tag::keyIsSet() const
{
    return keyIsSet_;
}

void Tag::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& Tag::getValues()
{
    return values_;
}

void Tag::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool Tag::valuesIsSet() const
{
    return valuesIsSet_;
}

void Tag::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


