

#include "huaweicloud/modelarts/v1/model/OperatorArgItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




OperatorArgItem::OperatorArgItem()
{
    name_ = "";
    nameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    tips_ = "";
    tipsIsSet_ = false;
}

OperatorArgItem::~OperatorArgItem() = default;

void OperatorArgItem::validate()
{
}

web::json::value OperatorArgItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(tipsIsSet_) {
        val[utility::conversions::to_string_t("tips")] = ModelBase::toJson(tips_);
    }

    return val;
}
bool OperatorArgItem::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("tips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tips"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTips(refVal);
        }
    }
    return ok;
}


std::string OperatorArgItem::getName() const
{
    return name_;
}

void OperatorArgItem::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool OperatorArgItem::nameIsSet() const
{
    return nameIsSet_;
}

void OperatorArgItem::unsetname()
{
    nameIsSet_ = false;
}

std::string OperatorArgItem::getValue() const
{
    return value_;
}

void OperatorArgItem::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool OperatorArgItem::valueIsSet() const
{
    return valueIsSet_;
}

void OperatorArgItem::unsetvalue()
{
    valueIsSet_ = false;
}

std::string OperatorArgItem::getTips() const
{
    return tips_;
}

void OperatorArgItem::setTips(const std::string& value)
{
    tips_ = value;
    tipsIsSet_ = true;
}

bool OperatorArgItem::tipsIsSet() const
{
    return tipsIsSet_;
}

void OperatorArgItem::unsettips()
{
    tipsIsSet_ = false;
}

}
}
}
}
}


