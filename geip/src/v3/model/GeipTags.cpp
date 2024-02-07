

#include "huaweicloud/geip/v3/model/GeipTags.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




GeipTags::GeipTags()
{
    key_ = "";
    keyIsSet_ = false;
    valuesIsSet_ = false;
}

GeipTags::~GeipTags() = default;

void GeipTags::validate()
{
}

web::json::value GeipTags::toJson() const
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
bool GeipTags::fromJson(const web::json::value& val)
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


std::string GeipTags::getKey() const
{
    return key_;
}

void GeipTags::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool GeipTags::keyIsSet() const
{
    return keyIsSet_;
}

void GeipTags::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& GeipTags::getValues()
{
    return values_;
}

void GeipTags::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool GeipTags::valuesIsSet() const
{
    return valuesIsSet_;
}

void GeipTags::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


