

#include "huaweicloud/cloudtest/v1/model/ItemParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ItemParam::ItemParam()
{
    basicValueIsSet_ = false;
    defaultValue_ = "";
    defaultValueIsSet_ = false;
    enumType_ = "";
    enumTypeIsSet_ = false;
    enumTypeSelected_ = "";
    enumTypeSelectedIsSet_ = false;
    format_ = "";
    formatIsSet_ = false;
    isBigField_ = false;
    isBigFieldIsSet_ = false;
    maxItems_ = 0;
    maxItemsIsSet_ = false;
    maxLength_ = 0L;
    maxLengthIsSet_ = false;
    maximumIsSet_ = false;
    minItems_ = 0;
    minItemsIsSet_ = false;
    minLength_ = 0L;
    minLengthIsSet_ = false;
    minimumIsSet_ = false;
    pattern_ = "";
    patternIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    validateRuleIsSet_ = false;
    valueType_ = 0;
    valueTypeIsSet_ = false;
    xChoiceValue_ = "";
    xChoiceValueIsSet_ = false;
}

ItemParam::~ItemParam() = default;

void ItemParam::validate()
{
}

web::json::value ItemParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(basicValueIsSet_) {
        val[utility::conversions::to_string_t("basic_value")] = ModelBase::toJson(basicValue_);
    }
    if(defaultValueIsSet_) {
        val[utility::conversions::to_string_t("defaultValue")] = ModelBase::toJson(defaultValue_);
    }
    if(enumTypeIsSet_) {
        val[utility::conversions::to_string_t("enum_type")] = ModelBase::toJson(enumType_);
    }
    if(enumTypeSelectedIsSet_) {
        val[utility::conversions::to_string_t("enum_type_selected")] = ModelBase::toJson(enumTypeSelected_);
    }
    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }
    if(isBigFieldIsSet_) {
        val[utility::conversions::to_string_t("is_big_field")] = ModelBase::toJson(isBigField_);
    }
    if(maxItemsIsSet_) {
        val[utility::conversions::to_string_t("maxItems")] = ModelBase::toJson(maxItems_);
    }
    if(maxLengthIsSet_) {
        val[utility::conversions::to_string_t("maxLength")] = ModelBase::toJson(maxLength_);
    }
    if(maximumIsSet_) {
        val[utility::conversions::to_string_t("maximum")] = ModelBase::toJson(maximum_);
    }
    if(minItemsIsSet_) {
        val[utility::conversions::to_string_t("minItems")] = ModelBase::toJson(minItems_);
    }
    if(minLengthIsSet_) {
        val[utility::conversions::to_string_t("minLength")] = ModelBase::toJson(minLength_);
    }
    if(minimumIsSet_) {
        val[utility::conversions::to_string_t("minimum")] = ModelBase::toJson(minimum_);
    }
    if(patternIsSet_) {
        val[utility::conversions::to_string_t("pattern")] = ModelBase::toJson(pattern_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(validateRuleIsSet_) {
        val[utility::conversions::to_string_t("validate_rule")] = ModelBase::toJson(validateRule_);
    }
    if(valueTypeIsSet_) {
        val[utility::conversions::to_string_t("value_type")] = ModelBase::toJson(valueType_);
    }
    if(xChoiceValueIsSet_) {
        val[utility::conversions::to_string_t("xChoiceValue")] = ModelBase::toJson(xChoiceValue_);
    }

    return val;
}
bool ItemParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("basic_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("basic_value"));
        if(!fieldValue.is_null())
        {
            AwParamBasicValue refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBasicValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defaultValue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defaultValue"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enum_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enum_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnumType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enum_type_selected"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enum_type_selected"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnumTypeSelected(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_big_field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_big_field"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsBigField(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxItems"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxItems"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxItems(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxLength"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxLength"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxLength(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maximum"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maximum"));
        if(!fieldValue.is_null())
        {
            Number refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaximum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("minItems"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("minItems"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinItems(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("minLength"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("minLength"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinLength(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("minimum"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("minimum"));
        if(!fieldValue.is_null())
        {
            Number refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinimum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pattern"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pattern"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPattern(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("validate_rule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("validate_rule"));
        if(!fieldValue.is_null())
        {
            ValidateRule refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidateRule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValueType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("xChoiceValue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("xChoiceValue"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXChoiceValue(refVal);
        }
    }
    return ok;
}


AwParamBasicValue ItemParam::getBasicValue() const
{
    return basicValue_;
}

void ItemParam::setBasicValue(const AwParamBasicValue& value)
{
    basicValue_ = value;
    basicValueIsSet_ = true;
}

bool ItemParam::basicValueIsSet() const
{
    return basicValueIsSet_;
}

void ItemParam::unsetbasicValue()
{
    basicValueIsSet_ = false;
}

std::string ItemParam::getDefaultValue() const
{
    return defaultValue_;
}

void ItemParam::setDefaultValue(const std::string& value)
{
    defaultValue_ = value;
    defaultValueIsSet_ = true;
}

bool ItemParam::defaultValueIsSet() const
{
    return defaultValueIsSet_;
}

void ItemParam::unsetdefaultValue()
{
    defaultValueIsSet_ = false;
}

std::string ItemParam::getEnumType() const
{
    return enumType_;
}

void ItemParam::setEnumType(const std::string& value)
{
    enumType_ = value;
    enumTypeIsSet_ = true;
}

bool ItemParam::enumTypeIsSet() const
{
    return enumTypeIsSet_;
}

void ItemParam::unsetenumType()
{
    enumTypeIsSet_ = false;
}

std::string ItemParam::getEnumTypeSelected() const
{
    return enumTypeSelected_;
}

void ItemParam::setEnumTypeSelected(const std::string& value)
{
    enumTypeSelected_ = value;
    enumTypeSelectedIsSet_ = true;
}

bool ItemParam::enumTypeSelectedIsSet() const
{
    return enumTypeSelectedIsSet_;
}

void ItemParam::unsetenumTypeSelected()
{
    enumTypeSelectedIsSet_ = false;
}

std::string ItemParam::getFormat() const
{
    return format_;
}

void ItemParam::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool ItemParam::formatIsSet() const
{
    return formatIsSet_;
}

void ItemParam::unsetformat()
{
    formatIsSet_ = false;
}

bool ItemParam::isIsBigField() const
{
    return isBigField_;
}

void ItemParam::setIsBigField(bool value)
{
    isBigField_ = value;
    isBigFieldIsSet_ = true;
}

bool ItemParam::isBigFieldIsSet() const
{
    return isBigFieldIsSet_;
}

void ItemParam::unsetisBigField()
{
    isBigFieldIsSet_ = false;
}

int32_t ItemParam::getMaxItems() const
{
    return maxItems_;
}

void ItemParam::setMaxItems(int32_t value)
{
    maxItems_ = value;
    maxItemsIsSet_ = true;
}

bool ItemParam::maxItemsIsSet() const
{
    return maxItemsIsSet_;
}

void ItemParam::unsetmaxItems()
{
    maxItemsIsSet_ = false;
}

int64_t ItemParam::getMaxLength() const
{
    return maxLength_;
}

void ItemParam::setMaxLength(int64_t value)
{
    maxLength_ = value;
    maxLengthIsSet_ = true;
}

bool ItemParam::maxLengthIsSet() const
{
    return maxLengthIsSet_;
}

void ItemParam::unsetmaxLength()
{
    maxLengthIsSet_ = false;
}

Number ItemParam::getMaximum() const
{
    return maximum_;
}

void ItemParam::setMaximum(const Number& value)
{
    maximum_ = value;
    maximumIsSet_ = true;
}

bool ItemParam::maximumIsSet() const
{
    return maximumIsSet_;
}

void ItemParam::unsetmaximum()
{
    maximumIsSet_ = false;
}

int32_t ItemParam::getMinItems() const
{
    return minItems_;
}

void ItemParam::setMinItems(int32_t value)
{
    minItems_ = value;
    minItemsIsSet_ = true;
}

bool ItemParam::minItemsIsSet() const
{
    return minItemsIsSet_;
}

void ItemParam::unsetminItems()
{
    minItemsIsSet_ = false;
}

int64_t ItemParam::getMinLength() const
{
    return minLength_;
}

void ItemParam::setMinLength(int64_t value)
{
    minLength_ = value;
    minLengthIsSet_ = true;
}

bool ItemParam::minLengthIsSet() const
{
    return minLengthIsSet_;
}

void ItemParam::unsetminLength()
{
    minLengthIsSet_ = false;
}

Number ItemParam::getMinimum() const
{
    return minimum_;
}

void ItemParam::setMinimum(const Number& value)
{
    minimum_ = value;
    minimumIsSet_ = true;
}

bool ItemParam::minimumIsSet() const
{
    return minimumIsSet_;
}

void ItemParam::unsetminimum()
{
    minimumIsSet_ = false;
}

std::string ItemParam::getPattern() const
{
    return pattern_;
}

void ItemParam::setPattern(const std::string& value)
{
    pattern_ = value;
    patternIsSet_ = true;
}

bool ItemParam::patternIsSet() const
{
    return patternIsSet_;
}

void ItemParam::unsetpattern()
{
    patternIsSet_ = false;
}

std::string ItemParam::getType() const
{
    return type_;
}

void ItemParam::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ItemParam::typeIsSet() const
{
    return typeIsSet_;
}

void ItemParam::unsettype()
{
    typeIsSet_ = false;
}

ValidateRule ItemParam::getValidateRule() const
{
    return validateRule_;
}

void ItemParam::setValidateRule(const ValidateRule& value)
{
    validateRule_ = value;
    validateRuleIsSet_ = true;
}

bool ItemParam::validateRuleIsSet() const
{
    return validateRuleIsSet_;
}

void ItemParam::unsetvalidateRule()
{
    validateRuleIsSet_ = false;
}

int32_t ItemParam::getValueType() const
{
    return valueType_;
}

void ItemParam::setValueType(int32_t value)
{
    valueType_ = value;
    valueTypeIsSet_ = true;
}

bool ItemParam::valueTypeIsSet() const
{
    return valueTypeIsSet_;
}

void ItemParam::unsetvalueType()
{
    valueTypeIsSet_ = false;
}

std::string ItemParam::getXChoiceValue() const
{
    return xChoiceValue_;
}

void ItemParam::setXChoiceValue(const std::string& value)
{
    xChoiceValue_ = value;
    xChoiceValueIsSet_ = true;
}

bool ItemParam::xChoiceValueIsSet() const
{
    return xChoiceValueIsSet_;
}

void ItemParam::unsetxChoiceValue()
{
    xChoiceValueIsSet_ = false;
}

}
}
}
}
}


