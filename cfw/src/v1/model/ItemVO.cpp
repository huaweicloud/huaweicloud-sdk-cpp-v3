

#include "huaweicloud/cfw/v1/model/ItemVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ItemVO::ItemVO()
{
    key_ = "";
    keyIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    value_ = 0L;
    valueIsSet_ = false;
}

ItemVO::~ItemVO() = default;

void ItemVO::validate()
{
}

web::json::value ItemVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool ItemVO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string ItemVO::getKey() const
{
    return key_;
}

void ItemVO::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ItemVO::keyIsSet() const
{
    return keyIsSet_;
}

void ItemVO::unsetkey()
{
    keyIsSet_ = false;
}

std::string ItemVO::getName() const
{
    return name_;
}

void ItemVO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ItemVO::nameIsSet() const
{
    return nameIsSet_;
}

void ItemVO::unsetname()
{
    nameIsSet_ = false;
}

int64_t ItemVO::getValue() const
{
    return value_;
}

void ItemVO::setValue(int64_t value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ItemVO::valueIsSet() const
{
    return valueIsSet_;
}

void ItemVO::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


