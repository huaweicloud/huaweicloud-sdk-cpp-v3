

#include "huaweicloud/projectman/v4/model/FieldLongDateVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




FieldLongDateVO::FieldLongDateVO()
{
    id_ = "";
    idIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    createdBy_ = "";
    createdByIsSet_ = false;
    createdDate_ = 0L;
    createdDateIsSet_ = false;
    modifiedBy_ = "";
    modifiedByIsSet_ = false;
    modifiedDate_ = 0L;
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

FieldLongDateVO::~FieldLongDateVO() = default;

void FieldLongDateVO::validate()
{
}

web::json::value FieldLongDateVO::toJson() const
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
bool FieldLongDateVO::fromJson(const web::json::value& val)
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
            int64_t refVal;
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
            int64_t refVal;
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


std::string FieldLongDateVO::getId() const
{
    return id_;
}

void FieldLongDateVO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool FieldLongDateVO::idIsSet() const
{
    return idIsSet_;
}

void FieldLongDateVO::unsetid()
{
    idIsSet_ = false;
}

std::string FieldLongDateVO::getCode() const
{
    return code_;
}

void FieldLongDateVO::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool FieldLongDateVO::codeIsSet() const
{
    return codeIsSet_;
}

void FieldLongDateVO::unsetcode()
{
    codeIsSet_ = false;
}

std::string FieldLongDateVO::getDisplayName() const
{
    return displayName_;
}

void FieldLongDateVO::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool FieldLongDateVO::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void FieldLongDateVO::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string FieldLongDateVO::getCreatedBy() const
{
    return createdBy_;
}

void FieldLongDateVO::setCreatedBy(const std::string& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool FieldLongDateVO::createdByIsSet() const
{
    return createdByIsSet_;
}

void FieldLongDateVO::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

int64_t FieldLongDateVO::getCreatedDate() const
{
    return createdDate_;
}

void FieldLongDateVO::setCreatedDate(int64_t value)
{
    createdDate_ = value;
    createdDateIsSet_ = true;
}

bool FieldLongDateVO::createdDateIsSet() const
{
    return createdDateIsSet_;
}

void FieldLongDateVO::unsetcreatedDate()
{
    createdDateIsSet_ = false;
}

std::string FieldLongDateVO::getModifiedBy() const
{
    return modifiedBy_;
}

void FieldLongDateVO::setModifiedBy(const std::string& value)
{
    modifiedBy_ = value;
    modifiedByIsSet_ = true;
}

bool FieldLongDateVO::modifiedByIsSet() const
{
    return modifiedByIsSet_;
}

void FieldLongDateVO::unsetmodifiedBy()
{
    modifiedByIsSet_ = false;
}

int64_t FieldLongDateVO::getModifiedDate() const
{
    return modifiedDate_;
}

void FieldLongDateVO::setModifiedDate(int64_t value)
{
    modifiedDate_ = value;
    modifiedDateIsSet_ = true;
}

bool FieldLongDateVO::modifiedDateIsSet() const
{
    return modifiedDateIsSet_;
}

void FieldLongDateVO::unsetmodifiedDate()
{
    modifiedDateIsSet_ = false;
}

std::string FieldLongDateVO::getFieldType() const
{
    return fieldType_;
}

void FieldLongDateVO::setFieldType(const std::string& value)
{
    fieldType_ = value;
    fieldTypeIsSet_ = true;
}

bool FieldLongDateVO::fieldTypeIsSet() const
{
    return fieldTypeIsSet_;
}

void FieldLongDateVO::unsetfieldType()
{
    fieldTypeIsSet_ = false;
}

std::string FieldLongDateVO::getFieldTypeId() const
{
    return fieldTypeId_;
}

void FieldLongDateVO::setFieldTypeId(const std::string& value)
{
    fieldTypeId_ = value;
    fieldTypeIdIsSet_ = true;
}

bool FieldLongDateVO::fieldTypeIdIsSet() const
{
    return fieldTypeIdIsSet_;
}

void FieldLongDateVO::unsetfieldTypeId()
{
    fieldTypeIdIsSet_ = false;
}

std::string FieldLongDateVO::getFieldTypeName() const
{
    return fieldTypeName_;
}

void FieldLongDateVO::setFieldTypeName(const std::string& value)
{
    fieldTypeName_ = value;
    fieldTypeNameIsSet_ = true;
}

bool FieldLongDateVO::fieldTypeNameIsSet() const
{
    return fieldTypeNameIsSet_;
}

void FieldLongDateVO::unsetfieldTypeName()
{
    fieldTypeNameIsSet_ = false;
}

std::string FieldLongDateVO::getDefinitionType() const
{
    return definitionType_;
}

void FieldLongDateVO::setDefinitionType(const std::string& value)
{
    definitionType_ = value;
    definitionTypeIsSet_ = true;
}

bool FieldLongDateVO::definitionTypeIsSet() const
{
    return definitionTypeIsSet_;
}

void FieldLongDateVO::unsetdefinitionType()
{
    definitionTypeIsSet_ = false;
}

bool FieldLongDateVO::isShowOnCard() const
{
    return showOnCard_;
}

void FieldLongDateVO::setShowOnCard(bool value)
{
    showOnCard_ = value;
    showOnCardIsSet_ = true;
}

bool FieldLongDateVO::showOnCardIsSet() const
{
    return showOnCardIsSet_;
}

void FieldLongDateVO::unsetshowOnCard()
{
    showOnCardIsSet_ = false;
}

bool FieldLongDateVO::isOptional() const
{
    return optional_;
}

void FieldLongDateVO::setOptional(bool value)
{
    optional_ = value;
    optionalIsSet_ = true;
}

bool FieldLongDateVO::optionalIsSet() const
{
    return optionalIsSet_;
}

void FieldLongDateVO::unsetoptional()
{
    optionalIsSet_ = false;
}

bool FieldLongDateVO::isControlled() const
{
    return controlled_;
}

void FieldLongDateVO::setControlled(bool value)
{
    controlled_ = value;
    controlledIsSet_ = true;
}

bool FieldLongDateVO::controlledIsSet() const
{
    return controlledIsSet_;
}

void FieldLongDateVO::unsetcontrolled()
{
    controlledIsSet_ = false;
}

bool FieldLongDateVO::isImmutable() const
{
    return immutable_;
}

void FieldLongDateVO::setImmutable(bool value)
{
    immutable_ = value;
    immutableIsSet_ = true;
}

bool FieldLongDateVO::immutableIsSet() const
{
    return immutableIsSet_;
}

void FieldLongDateVO::unsetimmutable()
{
    immutableIsSet_ = false;
}

int32_t FieldLongDateVO::getNo() const
{
    return no_;
}

void FieldLongDateVO::setNo(int32_t value)
{
    no_ = value;
    noIsSet_ = true;
}

bool FieldLongDateVO::noIsSet() const
{
    return noIsSet_;
}

void FieldLongDateVO::unsetno()
{
    noIsSet_ = false;
}

std::string FieldLongDateVO::getDefaultValue() const
{
    return defaultValue_;
}

void FieldLongDateVO::setDefaultValue(const std::string& value)
{
    defaultValue_ = value;
    defaultValueIsSet_ = true;
}

bool FieldLongDateVO::defaultValueIsSet() const
{
    return defaultValueIsSet_;
}

void FieldLongDateVO::unsetdefaultValue()
{
    defaultValueIsSet_ = false;
}

std::vector<OptionEntity>& FieldLongDateVO::getOption()
{
    return option_;
}

void FieldLongDateVO::setOption(const std::vector<OptionEntity>& value)
{
    option_ = value;
    optionIsSet_ = true;
}

bool FieldLongDateVO::optionIsSet() const
{
    return optionIsSet_;
}

void FieldLongDateVO::unsetoption()
{
    optionIsSet_ = false;
}

std::vector<OptionEntity>& FieldLongDateVO::getAllOptions()
{
    return allOptions_;
}

void FieldLongDateVO::setAllOptions(const std::vector<OptionEntity>& value)
{
    allOptions_ = value;
    allOptionsIsSet_ = true;
}

bool FieldLongDateVO::allOptionsIsSet() const
{
    return allOptionsIsSet_;
}

void FieldLongDateVO::unsetallOptions()
{
    allOptionsIsSet_ = false;
}

bool FieldLongDateVO::isHasSameDisplayName() const
{
    return hasSameDisplayName_;
}

void FieldLongDateVO::setHasSameDisplayName(bool value)
{
    hasSameDisplayName_ = value;
    hasSameDisplayNameIsSet_ = true;
}

bool FieldLongDateVO::hasSameDisplayNameIsSet() const
{
    return hasSameDisplayNameIsSet_;
}

void FieldLongDateVO::unsethasSameDisplayName()
{
    hasSameDisplayNameIsSet_ = false;
}

}
}
}
}
}


