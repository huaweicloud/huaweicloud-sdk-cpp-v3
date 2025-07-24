

#include "huaweicloud/cloudtest/v1/model/AwParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AwParam::AwParam()
{
    basicValueIsSet_ = false;
    basicValueListIsSet_ = false;
    customBody_ = "";
    customBodyIsSet_ = false;
    defaultValue_ = "";
    defaultValueIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    disabled_ = false;
    disabledIsSet_ = false;
    dropDownValue_ = "";
    dropDownValueIsSet_ = false;
    enumType_ = "";
    enumTypeIsSet_ = false;
    enumTypeSelected_ = "";
    enumTypeSelectedIsSet_ = false;
    format_ = "";
    formatIsSet_ = false;
    inType_ = 0;
    inTypeIsSet_ = false;
    isChecked_ = false;
    isCheckedIsSet_ = false;
    isBigField_ = false;
    isBigFieldIsSet_ = false;
    isBodyCustom_ = 0;
    isBodyCustomIsSet_ = false;
    isContractParam_ = 0;
    isContractParamIsSet_ = false;
    isSensitive_ = false;
    isSensitiveIsSet_ = false;
    itemIsSet_ = false;
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
    mockIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    objectValueIsSet_ = false;
    objectValueListIsSet_ = false;
    pattern_ = "";
    patternIsSet_ = false;
    required_ = false;
    requiredIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    validateRuleIsSet_ = false;
    valueType_ = 0;
    valueTypeIsSet_ = false;
    xChoiceValue_ = "";
    xChoiceValueIsSet_ = false;
}

AwParam::~AwParam() = default;

void AwParam::validate()
{
}

web::json::value AwParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(basicValueIsSet_) {
        val[utility::conversions::to_string_t("basic_value")] = ModelBase::toJson(basicValue_);
    }
    if(basicValueListIsSet_) {
        val[utility::conversions::to_string_t("basic_value_list")] = ModelBase::toJson(basicValueList_);
    }
    if(customBodyIsSet_) {
        val[utility::conversions::to_string_t("custom_body")] = ModelBase::toJson(customBody_);
    }
    if(defaultValueIsSet_) {
        val[utility::conversions::to_string_t("defaultValue")] = ModelBase::toJson(defaultValue_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(disabledIsSet_) {
        val[utility::conversions::to_string_t("disabled")] = ModelBase::toJson(disabled_);
    }
    if(dropDownValueIsSet_) {
        val[utility::conversions::to_string_t("drop_down_value")] = ModelBase::toJson(dropDownValue_);
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
    if(inTypeIsSet_) {
        val[utility::conversions::to_string_t("in_type")] = ModelBase::toJson(inType_);
    }
    if(isCheckedIsSet_) {
        val[utility::conversions::to_string_t("isChecked")] = ModelBase::toJson(isChecked_);
    }
    if(isBigFieldIsSet_) {
        val[utility::conversions::to_string_t("is_big_field")] = ModelBase::toJson(isBigField_);
    }
    if(isBodyCustomIsSet_) {
        val[utility::conversions::to_string_t("is_body_custom")] = ModelBase::toJson(isBodyCustom_);
    }
    if(isContractParamIsSet_) {
        val[utility::conversions::to_string_t("is_contract_param")] = ModelBase::toJson(isContractParam_);
    }
    if(isSensitiveIsSet_) {
        val[utility::conversions::to_string_t("is_sensitive")] = ModelBase::toJson(isSensitive_);
    }
    if(itemIsSet_) {
        val[utility::conversions::to_string_t("item")] = ModelBase::toJson(item_);
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
    if(mockIsSet_) {
        val[utility::conversions::to_string_t("mock")] = ModelBase::toJson(mock_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(objectValueIsSet_) {
        val[utility::conversions::to_string_t("object_value")] = ModelBase::toJson(*objectValue_);
    }
    if(objectValueListIsSet_) {
        val[utility::conversions::to_string_t("object_value_list")] = ModelBase::toJson(objectValueList_);
    }
    if(patternIsSet_) {
        val[utility::conversions::to_string_t("pattern")] = ModelBase::toJson(pattern_);
    }
    if(requiredIsSet_) {
        val[utility::conversions::to_string_t("required")] = ModelBase::toJson(required_);
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
bool AwParam::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("basic_value_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("basic_value_list"));
        if(!fieldValue.is_null())
        {
            std::vector<AwParamBasicValue> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBasicValueList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_body"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomBody(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("drop_down_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("drop_down_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDropDownValue(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("in_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("in_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isChecked"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isChecked"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsChecked(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_body_custom"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_body_custom"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsBodyCustom(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_contract_param"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_contract_param"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsContractParam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_sensitive"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_sensitive"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSensitive(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("item"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("item"));
        if(!fieldValue.is_null())
        {
            ItemParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItem(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("mock"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mock"));
        if(!fieldValue.is_null())
        {
            MockInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMock(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("object_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_value"));
        if(!fieldValue.is_null())
        {
            std::vector<AwParam> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_value_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_value_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::vector<AwParam>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectValueList(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("required"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("required"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequired(refVal);
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


AwParamBasicValue AwParam::getBasicValue() const
{
    return basicValue_;
}

void AwParam::setBasicValue(const AwParamBasicValue& value)
{
    basicValue_ = value;
    basicValueIsSet_ = true;
}

bool AwParam::basicValueIsSet() const
{
    return basicValueIsSet_;
}

void AwParam::unsetbasicValue()
{
    basicValueIsSet_ = false;
}

std::vector<AwParamBasicValue>& AwParam::getBasicValueList()
{
    return basicValueList_;
}

void AwParam::setBasicValueList(const std::vector<AwParamBasicValue>& value)
{
    basicValueList_ = value;
    basicValueListIsSet_ = true;
}

bool AwParam::basicValueListIsSet() const
{
    return basicValueListIsSet_;
}

void AwParam::unsetbasicValueList()
{
    basicValueListIsSet_ = false;
}

std::string AwParam::getCustomBody() const
{
    return customBody_;
}

void AwParam::setCustomBody(const std::string& value)
{
    customBody_ = value;
    customBodyIsSet_ = true;
}

bool AwParam::customBodyIsSet() const
{
    return customBodyIsSet_;
}

void AwParam::unsetcustomBody()
{
    customBodyIsSet_ = false;
}

std::string AwParam::getDefaultValue() const
{
    return defaultValue_;
}

void AwParam::setDefaultValue(const std::string& value)
{
    defaultValue_ = value;
    defaultValueIsSet_ = true;
}

bool AwParam::defaultValueIsSet() const
{
    return defaultValueIsSet_;
}

void AwParam::unsetdefaultValue()
{
    defaultValueIsSet_ = false;
}

std::string AwParam::getDescription() const
{
    return description_;
}

void AwParam::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AwParam::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AwParam::unsetdescription()
{
    descriptionIsSet_ = false;
}

bool AwParam::isDisabled() const
{
    return disabled_;
}

void AwParam::setDisabled(bool value)
{
    disabled_ = value;
    disabledIsSet_ = true;
}

bool AwParam::disabledIsSet() const
{
    return disabledIsSet_;
}

void AwParam::unsetdisabled()
{
    disabledIsSet_ = false;
}

std::string AwParam::getDropDownValue() const
{
    return dropDownValue_;
}

void AwParam::setDropDownValue(const std::string& value)
{
    dropDownValue_ = value;
    dropDownValueIsSet_ = true;
}

bool AwParam::dropDownValueIsSet() const
{
    return dropDownValueIsSet_;
}

void AwParam::unsetdropDownValue()
{
    dropDownValueIsSet_ = false;
}

std::string AwParam::getEnumType() const
{
    return enumType_;
}

void AwParam::setEnumType(const std::string& value)
{
    enumType_ = value;
    enumTypeIsSet_ = true;
}

bool AwParam::enumTypeIsSet() const
{
    return enumTypeIsSet_;
}

void AwParam::unsetenumType()
{
    enumTypeIsSet_ = false;
}

std::string AwParam::getEnumTypeSelected() const
{
    return enumTypeSelected_;
}

void AwParam::setEnumTypeSelected(const std::string& value)
{
    enumTypeSelected_ = value;
    enumTypeSelectedIsSet_ = true;
}

bool AwParam::enumTypeSelectedIsSet() const
{
    return enumTypeSelectedIsSet_;
}

void AwParam::unsetenumTypeSelected()
{
    enumTypeSelectedIsSet_ = false;
}

std::string AwParam::getFormat() const
{
    return format_;
}

void AwParam::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool AwParam::formatIsSet() const
{
    return formatIsSet_;
}

void AwParam::unsetformat()
{
    formatIsSet_ = false;
}

int32_t AwParam::getInType() const
{
    return inType_;
}

void AwParam::setInType(int32_t value)
{
    inType_ = value;
    inTypeIsSet_ = true;
}

bool AwParam::inTypeIsSet() const
{
    return inTypeIsSet_;
}

void AwParam::unsetinType()
{
    inTypeIsSet_ = false;
}

bool AwParam::isIsChecked() const
{
    return isChecked_;
}

void AwParam::setIsChecked(bool value)
{
    isChecked_ = value;
    isCheckedIsSet_ = true;
}

bool AwParam::isCheckedIsSet() const
{
    return isCheckedIsSet_;
}

void AwParam::unsetisChecked()
{
    isCheckedIsSet_ = false;
}

bool AwParam::isIsBigField() const
{
    return isBigField_;
}

void AwParam::setIsBigField(bool value)
{
    isBigField_ = value;
    isBigFieldIsSet_ = true;
}

bool AwParam::isBigFieldIsSet() const
{
    return isBigFieldIsSet_;
}

void AwParam::unsetisBigField()
{
    isBigFieldIsSet_ = false;
}

int32_t AwParam::getIsBodyCustom() const
{
    return isBodyCustom_;
}

void AwParam::setIsBodyCustom(int32_t value)
{
    isBodyCustom_ = value;
    isBodyCustomIsSet_ = true;
}

bool AwParam::isBodyCustomIsSet() const
{
    return isBodyCustomIsSet_;
}

void AwParam::unsetisBodyCustom()
{
    isBodyCustomIsSet_ = false;
}

int32_t AwParam::getIsContractParam() const
{
    return isContractParam_;
}

void AwParam::setIsContractParam(int32_t value)
{
    isContractParam_ = value;
    isContractParamIsSet_ = true;
}

bool AwParam::isContractParamIsSet() const
{
    return isContractParamIsSet_;
}

void AwParam::unsetisContractParam()
{
    isContractParamIsSet_ = false;
}

bool AwParam::isIsSensitive() const
{
    return isSensitive_;
}

void AwParam::setIsSensitive(bool value)
{
    isSensitive_ = value;
    isSensitiveIsSet_ = true;
}

bool AwParam::isSensitiveIsSet() const
{
    return isSensitiveIsSet_;
}

void AwParam::unsetisSensitive()
{
    isSensitiveIsSet_ = false;
}

ItemParam AwParam::getItem() const
{
    return item_;
}

void AwParam::setItem(const ItemParam& value)
{
    item_ = value;
    itemIsSet_ = true;
}

bool AwParam::itemIsSet() const
{
    return itemIsSet_;
}

void AwParam::unsetitem()
{
    itemIsSet_ = false;
}

int32_t AwParam::getMaxItems() const
{
    return maxItems_;
}

void AwParam::setMaxItems(int32_t value)
{
    maxItems_ = value;
    maxItemsIsSet_ = true;
}

bool AwParam::maxItemsIsSet() const
{
    return maxItemsIsSet_;
}

void AwParam::unsetmaxItems()
{
    maxItemsIsSet_ = false;
}

int64_t AwParam::getMaxLength() const
{
    return maxLength_;
}

void AwParam::setMaxLength(int64_t value)
{
    maxLength_ = value;
    maxLengthIsSet_ = true;
}

bool AwParam::maxLengthIsSet() const
{
    return maxLengthIsSet_;
}

void AwParam::unsetmaxLength()
{
    maxLengthIsSet_ = false;
}

Number AwParam::getMaximum() const
{
    return maximum_;
}

void AwParam::setMaximum(const Number& value)
{
    maximum_ = value;
    maximumIsSet_ = true;
}

bool AwParam::maximumIsSet() const
{
    return maximumIsSet_;
}

void AwParam::unsetmaximum()
{
    maximumIsSet_ = false;
}

int32_t AwParam::getMinItems() const
{
    return minItems_;
}

void AwParam::setMinItems(int32_t value)
{
    minItems_ = value;
    minItemsIsSet_ = true;
}

bool AwParam::minItemsIsSet() const
{
    return minItemsIsSet_;
}

void AwParam::unsetminItems()
{
    minItemsIsSet_ = false;
}

int64_t AwParam::getMinLength() const
{
    return minLength_;
}

void AwParam::setMinLength(int64_t value)
{
    minLength_ = value;
    minLengthIsSet_ = true;
}

bool AwParam::minLengthIsSet() const
{
    return minLengthIsSet_;
}

void AwParam::unsetminLength()
{
    minLengthIsSet_ = false;
}

Number AwParam::getMinimum() const
{
    return minimum_;
}

void AwParam::setMinimum(const Number& value)
{
    minimum_ = value;
    minimumIsSet_ = true;
}

bool AwParam::minimumIsSet() const
{
    return minimumIsSet_;
}

void AwParam::unsetminimum()
{
    minimumIsSet_ = false;
}

MockInfo AwParam::getMock() const
{
    return mock_;
}

void AwParam::setMock(const MockInfo& value)
{
    mock_ = value;
    mockIsSet_ = true;
}

bool AwParam::mockIsSet() const
{
    return mockIsSet_;
}

void AwParam::unsetmock()
{
    mockIsSet_ = false;
}

std::string AwParam::getName() const
{
    return name_;
}

void AwParam::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AwParam::nameIsSet() const
{
    return nameIsSet_;
}

void AwParam::unsetname()
{
    nameIsSet_ = false;
}

std::vector<AwParam>& AwParam::getObjectValue()
{
    return *objectValue_;
}

void AwParam::setObjectValue(const std::vector<AwParam>& value)
{
    *objectValue_ = value;
    objectValueIsSet_ = true;
}

bool AwParam::objectValueIsSet() const
{
    return objectValueIsSet_;
}

void AwParam::unsetobjectValue()
{
    objectValueIsSet_ = false;
}

std::vector<std::vector<AwParam>>& AwParam::getObjectValueList()
{
    return objectValueList_;
}

void AwParam::setObjectValueList(const std::vector<std::vector<AwParam>>& value)
{
    objectValueList_ = value;
    objectValueListIsSet_ = true;
}

bool AwParam::objectValueListIsSet() const
{
    return objectValueListIsSet_;
}

void AwParam::unsetobjectValueList()
{
    objectValueListIsSet_ = false;
}

std::string AwParam::getPattern() const
{
    return pattern_;
}

void AwParam::setPattern(const std::string& value)
{
    pattern_ = value;
    patternIsSet_ = true;
}

bool AwParam::patternIsSet() const
{
    return patternIsSet_;
}

void AwParam::unsetpattern()
{
    patternIsSet_ = false;
}

bool AwParam::isRequired() const
{
    return required_;
}

void AwParam::setRequired(bool value)
{
    required_ = value;
    requiredIsSet_ = true;
}

bool AwParam::requiredIsSet() const
{
    return requiredIsSet_;
}

void AwParam::unsetrequired()
{
    requiredIsSet_ = false;
}

std::string AwParam::getType() const
{
    return type_;
}

void AwParam::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool AwParam::typeIsSet() const
{
    return typeIsSet_;
}

void AwParam::unsettype()
{
    typeIsSet_ = false;
}

ValidateRule AwParam::getValidateRule() const
{
    return validateRule_;
}

void AwParam::setValidateRule(const ValidateRule& value)
{
    validateRule_ = value;
    validateRuleIsSet_ = true;
}

bool AwParam::validateRuleIsSet() const
{
    return validateRuleIsSet_;
}

void AwParam::unsetvalidateRule()
{
    validateRuleIsSet_ = false;
}

int32_t AwParam::getValueType() const
{
    return valueType_;
}

void AwParam::setValueType(int32_t value)
{
    valueType_ = value;
    valueTypeIsSet_ = true;
}

bool AwParam::valueTypeIsSet() const
{
    return valueTypeIsSet_;
}

void AwParam::unsetvalueType()
{
    valueTypeIsSet_ = false;
}

std::string AwParam::getXChoiceValue() const
{
    return xChoiceValue_;
}

void AwParam::setXChoiceValue(const std::string& value)
{
    xChoiceValue_ = value;
    xChoiceValueIsSet_ = true;
}

bool AwParam::xChoiceValueIsSet() const
{
    return xChoiceValueIsSet_;
}

void AwParam::unsetxChoiceValue()
{
    xChoiceValueIsSet_ = false;
}

}
}
}
}
}


