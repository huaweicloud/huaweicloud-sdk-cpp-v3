

#include "huaweicloud/cloudtest/v1/model/AttributeChange.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AttributeChange::AttributeChange()
{
    newValue_ = "";
    newValueIsSet_ = false;
    oldValue_ = "";
    oldValueIsSet_ = false;
    attributeType_ = "";
    attributeTypeIsSet_ = false;
}

AttributeChange::~AttributeChange() = default;

void AttributeChange::validate()
{
}

web::json::value AttributeChange::toJson() const
{
    web::json::value val = web::json::value::object();

    if(newValueIsSet_) {
        val[utility::conversions::to_string_t("new_value")] = ModelBase::toJson(newValue_);
    }
    if(oldValueIsSet_) {
        val[utility::conversions::to_string_t("old_value")] = ModelBase::toJson(oldValue_);
    }
    if(attributeTypeIsSet_) {
        val[utility::conversions::to_string_t("attribute_type")] = ModelBase::toJson(attributeType_);
    }

    return val;
}
bool AttributeChange::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("new_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("old_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("old_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOldValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attribute_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attribute_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttributeType(refVal);
        }
    }
    return ok;
}


std::string AttributeChange::getNewValue() const
{
    return newValue_;
}

void AttributeChange::setNewValue(const std::string& value)
{
    newValue_ = value;
    newValueIsSet_ = true;
}

bool AttributeChange::newValueIsSet() const
{
    return newValueIsSet_;
}

void AttributeChange::unsetnewValue()
{
    newValueIsSet_ = false;
}

std::string AttributeChange::getOldValue() const
{
    return oldValue_;
}

void AttributeChange::setOldValue(const std::string& value)
{
    oldValue_ = value;
    oldValueIsSet_ = true;
}

bool AttributeChange::oldValueIsSet() const
{
    return oldValueIsSet_;
}

void AttributeChange::unsetoldValue()
{
    oldValueIsSet_ = false;
}

std::string AttributeChange::getAttributeType() const
{
    return attributeType_;
}

void AttributeChange::setAttributeType(const std::string& value)
{
    attributeType_ = value;
    attributeTypeIsSet_ = true;
}

bool AttributeChange::attributeTypeIsSet() const
{
    return attributeTypeIsSet_;
}

void AttributeChange::unsetattributeType()
{
    attributeTypeIsSet_ = false;
}

}
}
}
}
}


