

#include "huaweicloud/codeartsbuild/v3/model/ParameterItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ParameterItem::ParameterItem()
{
    name_ = "";
    nameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

ParameterItem::~ParameterItem() = default;

void ParameterItem::validate()
{
}

web::json::value ParameterItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool ParameterItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string ParameterItem::getName() const
{
    return name_;
}

void ParameterItem::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ParameterItem::nameIsSet() const
{
    return nameIsSet_;
}

void ParameterItem::unsetname()
{
    nameIsSet_ = false;
}

std::string ParameterItem::getValue() const
{
    return value_;
}

void ParameterItem::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ParameterItem::valueIsSet() const
{
    return valueIsSet_;
}

void ParameterItem::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


