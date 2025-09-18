

#include "huaweicloud/projectman/v4/model/FieldVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




FieldVO::FieldVO()
{
    displayName_ = "";
    displayNameIsSet_ = false;
    createdBy_ = "";
    createdByIsSet_ = false;
    fieldType_ = "";
    fieldTypeIsSet_ = false;
    showOnCard_ = false;
    showOnCardIsSet_ = false;
    optional_ = false;
    optionalIsSet_ = false;
    allOptionsIsSet_ = false;
    defaultValue_ = "";
    defaultValueIsSet_ = false;
}

FieldVO::~FieldVO() = default;

void FieldVO::validate()
{
}

web::json::value FieldVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(createdByIsSet_) {
        val[utility::conversions::to_string_t("created_by")] = ModelBase::toJson(createdBy_);
    }
    if(fieldTypeIsSet_) {
        val[utility::conversions::to_string_t("field_type")] = ModelBase::toJson(fieldType_);
    }
    if(showOnCardIsSet_) {
        val[utility::conversions::to_string_t("show_on_card")] = ModelBase::toJson(showOnCard_);
    }
    if(optionalIsSet_) {
        val[utility::conversions::to_string_t("optional")] = ModelBase::toJson(optional_);
    }
    if(allOptionsIsSet_) {
        val[utility::conversions::to_string_t("all_options")] = ModelBase::toJson(allOptions_);
    }
    if(defaultValueIsSet_) {
        val[utility::conversions::to_string_t("default_value")] = ModelBase::toJson(defaultValue_);
    }

    return val;
}
bool FieldVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("field_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("field_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFieldType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("show_on_card"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("show_on_card"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShowOnCard(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("optional"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("optional"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOptional(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("all_options"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("all_options"));
        if(!fieldValue.is_null())
        {
            std::vector<OptionEntity> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllOptions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("default_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultValue(refVal);
        }
    }
    return ok;
}


std::string FieldVO::getDisplayName() const
{
    return displayName_;
}

void FieldVO::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool FieldVO::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void FieldVO::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string FieldVO::getCreatedBy() const
{
    return createdBy_;
}

void FieldVO::setCreatedBy(const std::string& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool FieldVO::createdByIsSet() const
{
    return createdByIsSet_;
}

void FieldVO::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

std::string FieldVO::getFieldType() const
{
    return fieldType_;
}

void FieldVO::setFieldType(const std::string& value)
{
    fieldType_ = value;
    fieldTypeIsSet_ = true;
}

bool FieldVO::fieldTypeIsSet() const
{
    return fieldTypeIsSet_;
}

void FieldVO::unsetfieldType()
{
    fieldTypeIsSet_ = false;
}

bool FieldVO::isShowOnCard() const
{
    return showOnCard_;
}

void FieldVO::setShowOnCard(bool value)
{
    showOnCard_ = value;
    showOnCardIsSet_ = true;
}

bool FieldVO::showOnCardIsSet() const
{
    return showOnCardIsSet_;
}

void FieldVO::unsetshowOnCard()
{
    showOnCardIsSet_ = false;
}

bool FieldVO::isOptional() const
{
    return optional_;
}

void FieldVO::setOptional(bool value)
{
    optional_ = value;
    optionalIsSet_ = true;
}

bool FieldVO::optionalIsSet() const
{
    return optionalIsSet_;
}

void FieldVO::unsetoptional()
{
    optionalIsSet_ = false;
}

std::vector<OptionEntity>& FieldVO::getAllOptions()
{
    return allOptions_;
}

void FieldVO::setAllOptions(const std::vector<OptionEntity>& value)
{
    allOptions_ = value;
    allOptionsIsSet_ = true;
}

bool FieldVO::allOptionsIsSet() const
{
    return allOptionsIsSet_;
}

void FieldVO::unsetallOptions()
{
    allOptionsIsSet_ = false;
}

std::string FieldVO::getDefaultValue() const
{
    return defaultValue_;
}

void FieldVO::setDefaultValue(const std::string& value)
{
    defaultValue_ = value;
    defaultValueIsSet_ = true;
}

bool FieldVO::defaultValueIsSet() const
{
    return defaultValueIsSet_;
}

void FieldVO::unsetdefaultValue()
{
    defaultValueIsSet_ = false;
}

}
}
}
}
}


