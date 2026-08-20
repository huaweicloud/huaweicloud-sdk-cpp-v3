

#include "huaweicloud/projectman/v4/model/FieldVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




FieldVO::FieldVO()
{
    id_ = "";
    idIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    createdBy_ = "";
    createdByIsSet_ = false;
    createdDate_ = "";
    createdDateIsSet_ = false;
    modifiedBy_ = "";
    modifiedByIsSet_ = false;
    modifiedDate_ = "";
    modifiedDateIsSet_ = false;
    fieldType_ = "";
    fieldTypeIsSet_ = false;
    fieldTypeId_ = "";
    fieldTypeIdIsSet_ = false;
    fieldTypeName_ = "";
    fieldTypeNameIsSet_ = false;
    definitionType_ = "";
    definitionTypeIsSet_ = false;
    showOnCard_ = false;
    showOnCardIsSet_ = false;
    optional_ = false;
    optionalIsSet_ = false;
    controlled_ = false;
    controlledIsSet_ = false;
    immutable_ = false;
    immutableIsSet_ = false;
    no_ = 0;
    noIsSet_ = false;
    defaultValue_ = "";
    defaultValueIsSet_ = false;
    optionIsSet_ = false;
    allOptionsIsSet_ = false;
    hasSameDisplayName_ = false;
    hasSameDisplayNameIsSet_ = false;
}

FieldVO::~FieldVO() = default;

void FieldVO::validate()
{
}

web::json::value FieldVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(createdByIsSet_) {
        val[utility::conversions::to_string_t("created_by")] = ModelBase::toJson(createdBy_);
    }
    if(createdDateIsSet_) {
        val[utility::conversions::to_string_t("created_date")] = ModelBase::toJson(createdDate_);
    }
    if(modifiedByIsSet_) {
        val[utility::conversions::to_string_t("modified_by")] = ModelBase::toJson(modifiedBy_);
    }
    if(modifiedDateIsSet_) {
        val[utility::conversions::to_string_t("modified_date")] = ModelBase::toJson(modifiedDate_);
    }
    if(fieldTypeIsSet_) {
        val[utility::conversions::to_string_t("field_type")] = ModelBase::toJson(fieldType_);
    }
    if(fieldTypeIdIsSet_) {
        val[utility::conversions::to_string_t("field_type_id")] = ModelBase::toJson(fieldTypeId_);
    }
    if(fieldTypeNameIsSet_) {
        val[utility::conversions::to_string_t("field_type_name")] = ModelBase::toJson(fieldTypeName_);
    }
    if(definitionTypeIsSet_) {
        val[utility::conversions::to_string_t("definition_type")] = ModelBase::toJson(definitionType_);
    }
    if(showOnCardIsSet_) {
        val[utility::conversions::to_string_t("show_on_card")] = ModelBase::toJson(showOnCard_);
    }
    if(optionalIsSet_) {
        val[utility::conversions::to_string_t("optional")] = ModelBase::toJson(optional_);
    }
    if(controlledIsSet_) {
        val[utility::conversions::to_string_t("controlled")] = ModelBase::toJson(controlled_);
    }
    if(immutableIsSet_) {
        val[utility::conversions::to_string_t("immutable")] = ModelBase::toJson(immutable_);
    }
    if(noIsSet_) {
        val[utility::conversions::to_string_t("no")] = ModelBase::toJson(no_);
    }
    if(defaultValueIsSet_) {
        val[utility::conversions::to_string_t("default_value")] = ModelBase::toJson(defaultValue_);
    }
    if(optionIsSet_) {
        val[utility::conversions::to_string_t("option")] = ModelBase::toJson(option_);
    }
    if(allOptionsIsSet_) {
        val[utility::conversions::to_string_t("all_options")] = ModelBase::toJson(allOptions_);
    }
    if(hasSameDisplayNameIsSet_) {
        val[utility::conversions::to_string_t("has_same_display_name")] = ModelBase::toJson(hasSameDisplayName_);
    }

    return val;
}
bool FieldVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("created_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modified_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modified_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedDate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("field_type_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("field_type_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFieldTypeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("field_type_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("field_type_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFieldTypeName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("definition_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("definition_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefinitionType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("controlled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("controlled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setControlled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("immutable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("immutable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImmutable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("no"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("option"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("option"));
        if(!fieldValue.is_null())
        {
            std::vector<OptionEntity> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOption(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("has_same_display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("has_same_display_name"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHasSameDisplayName(refVal);
        }
    }
    return ok;
}


std::string FieldVO::getId() const
{
    return id_;
}

void FieldVO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool FieldVO::idIsSet() const
{
    return idIsSet_;
}

void FieldVO::unsetid()
{
    idIsSet_ = false;
}

std::string FieldVO::getCode() const
{
    return code_;
}

void FieldVO::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool FieldVO::codeIsSet() const
{
    return codeIsSet_;
}

void FieldVO::unsetcode()
{
    codeIsSet_ = false;
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

std::string FieldVO::getCreatedDate() const
{
    return createdDate_;
}

void FieldVO::setCreatedDate(const std::string& value)
{
    createdDate_ = value;
    createdDateIsSet_ = true;
}

bool FieldVO::createdDateIsSet() const
{
    return createdDateIsSet_;
}

void FieldVO::unsetcreatedDate()
{
    createdDateIsSet_ = false;
}

std::string FieldVO::getModifiedBy() const
{
    return modifiedBy_;
}

void FieldVO::setModifiedBy(const std::string& value)
{
    modifiedBy_ = value;
    modifiedByIsSet_ = true;
}

bool FieldVO::modifiedByIsSet() const
{
    return modifiedByIsSet_;
}

void FieldVO::unsetmodifiedBy()
{
    modifiedByIsSet_ = false;
}

std::string FieldVO::getModifiedDate() const
{
    return modifiedDate_;
}

void FieldVO::setModifiedDate(const std::string& value)
{
    modifiedDate_ = value;
    modifiedDateIsSet_ = true;
}

bool FieldVO::modifiedDateIsSet() const
{
    return modifiedDateIsSet_;
}

void FieldVO::unsetmodifiedDate()
{
    modifiedDateIsSet_ = false;
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

std::string FieldVO::getFieldTypeId() const
{
    return fieldTypeId_;
}

void FieldVO::setFieldTypeId(const std::string& value)
{
    fieldTypeId_ = value;
    fieldTypeIdIsSet_ = true;
}

bool FieldVO::fieldTypeIdIsSet() const
{
    return fieldTypeIdIsSet_;
}

void FieldVO::unsetfieldTypeId()
{
    fieldTypeIdIsSet_ = false;
}

std::string FieldVO::getFieldTypeName() const
{
    return fieldTypeName_;
}

void FieldVO::setFieldTypeName(const std::string& value)
{
    fieldTypeName_ = value;
    fieldTypeNameIsSet_ = true;
}

bool FieldVO::fieldTypeNameIsSet() const
{
    return fieldTypeNameIsSet_;
}

void FieldVO::unsetfieldTypeName()
{
    fieldTypeNameIsSet_ = false;
}

std::string FieldVO::getDefinitionType() const
{
    return definitionType_;
}

void FieldVO::setDefinitionType(const std::string& value)
{
    definitionType_ = value;
    definitionTypeIsSet_ = true;
}

bool FieldVO::definitionTypeIsSet() const
{
    return definitionTypeIsSet_;
}

void FieldVO::unsetdefinitionType()
{
    definitionTypeIsSet_ = false;
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

bool FieldVO::isControlled() const
{
    return controlled_;
}

void FieldVO::setControlled(bool value)
{
    controlled_ = value;
    controlledIsSet_ = true;
}

bool FieldVO::controlledIsSet() const
{
    return controlledIsSet_;
}

void FieldVO::unsetcontrolled()
{
    controlledIsSet_ = false;
}

bool FieldVO::isImmutable() const
{
    return immutable_;
}

void FieldVO::setImmutable(bool value)
{
    immutable_ = value;
    immutableIsSet_ = true;
}

bool FieldVO::immutableIsSet() const
{
    return immutableIsSet_;
}

void FieldVO::unsetimmutable()
{
    immutableIsSet_ = false;
}

int32_t FieldVO::getNo() const
{
    return no_;
}

void FieldVO::setNo(int32_t value)
{
    no_ = value;
    noIsSet_ = true;
}

bool FieldVO::noIsSet() const
{
    return noIsSet_;
}

void FieldVO::unsetno()
{
    noIsSet_ = false;
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

std::vector<OptionEntity>& FieldVO::getOption()
{
    return option_;
}

void FieldVO::setOption(const std::vector<OptionEntity>& value)
{
    option_ = value;
    optionIsSet_ = true;
}

bool FieldVO::optionIsSet() const
{
    return optionIsSet_;
}

void FieldVO::unsetoption()
{
    optionIsSet_ = false;
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

bool FieldVO::isHasSameDisplayName() const
{
    return hasSameDisplayName_;
}

void FieldVO::setHasSameDisplayName(bool value)
{
    hasSameDisplayName_ = value;
    hasSameDisplayNameIsSet_ = true;
}

bool FieldVO::hasSameDisplayNameIsSet() const
{
    return hasSameDisplayNameIsSet_;
}

void FieldVO::unsethasSameDisplayName()
{
    hasSameDisplayNameIsSet_ = false;
}

}
}
}
}
}


