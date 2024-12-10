

#include "huaweicloud/gaussdbforopengauss/v3/model/FeatureResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




FeatureResult::FeatureResult()
{
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    range_ = "";
    rangeIsSet_ = false;
    rangeDescription_ = "";
    rangeDescriptionIsSet_ = false;
}

FeatureResult::~FeatureResult() = default;

void FeatureResult::validate()
{
}

web::json::value FeatureResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(rangeIsSet_) {
        val[utility::conversions::to_string_t("range")] = ModelBase::toJson(range_);
    }
    if(rangeDescriptionIsSet_) {
        val[utility::conversions::to_string_t("range_description")] = ModelBase::toJson(rangeDescription_);
    }

    return val;
}
bool FeatureResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("range"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("range"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRange(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("range_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("range_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRangeDescription(refVal);
        }
    }
    return ok;
}


std::string FeatureResult::getName() const
{
    return name_;
}

void FeatureResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool FeatureResult::nameIsSet() const
{
    return nameIsSet_;
}

void FeatureResult::unsetname()
{
    nameIsSet_ = false;
}

std::string FeatureResult::getStatus() const
{
    return status_;
}

void FeatureResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool FeatureResult::statusIsSet() const
{
    return statusIsSet_;
}

void FeatureResult::unsetstatus()
{
    statusIsSet_ = false;
}

std::string FeatureResult::getDescription() const
{
    return description_;
}

void FeatureResult::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool FeatureResult::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void FeatureResult::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string FeatureResult::getType() const
{
    return type_;
}

void FeatureResult::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool FeatureResult::typeIsSet() const
{
    return typeIsSet_;
}

void FeatureResult::unsettype()
{
    typeIsSet_ = false;
}

std::string FeatureResult::getValue() const
{
    return value_;
}

void FeatureResult::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool FeatureResult::valueIsSet() const
{
    return valueIsSet_;
}

void FeatureResult::unsetvalue()
{
    valueIsSet_ = false;
}

std::string FeatureResult::getRange() const
{
    return range_;
}

void FeatureResult::setRange(const std::string& value)
{
    range_ = value;
    rangeIsSet_ = true;
}

bool FeatureResult::rangeIsSet() const
{
    return rangeIsSet_;
}

void FeatureResult::unsetrange()
{
    rangeIsSet_ = false;
}

std::string FeatureResult::getRangeDescription() const
{
    return rangeDescription_;
}

void FeatureResult::setRangeDescription(const std::string& value)
{
    rangeDescription_ = value;
    rangeDescriptionIsSet_ = true;
}

bool FeatureResult::rangeDescriptionIsSet() const
{
    return rangeDescriptionIsSet_;
}

void FeatureResult::unsetrangeDescription()
{
    rangeDescriptionIsSet_ = false;
}

}
}
}
}
}


