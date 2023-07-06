

#include "huaweicloud/vpc/v2/model/ListTag.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ListTag::ListTag()
{
    key_ = "";
    keyIsSet_ = false;
    valuesIsSet_ = false;
}

ListTag::~ListTag() = default;

void ListTag::validate()
{
}

web::json::value ListTag::toJson() const
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

bool ListTag::fromJson(const web::json::value& val)
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

std::string ListTag::getKey() const
{
    return key_;
}

void ListTag::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ListTag::keyIsSet() const
{
    return keyIsSet_;
}

void ListTag::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& ListTag::getValues()
{
    return values_;
}

void ListTag::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool ListTag::valuesIsSet() const
{
    return valuesIsSet_;
}

void ListTag::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


