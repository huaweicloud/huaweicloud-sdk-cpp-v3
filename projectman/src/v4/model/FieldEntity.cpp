

#include "huaweicloud/projectman/v4/model/FieldEntity.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




FieldEntity::FieldEntity()
{
    displayName_ = "";
    displayNameIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    createdBy_ = "";
    createdByIsSet_ = false;
    createdDate_ = 0L;
    createdDateIsSet_ = false;
    modifiedBy_ = "";
    modifiedByIsSet_ = false;
    definitionType_ = "";
    definitionTypeIsSet_ = false;
    fieldTypeName_ = "";
    fieldTypeNameIsSet_ = false;
    required_ = false;
    requiredIsSet_ = false;
    controlled_ = false;
    controlledIsSet_ = false;
    immutable_ = false;
    immutableIsSet_ = false;
    no_ = 0;
    noIsSet_ = false;
    allOptionsIsSet_ = false;
}

FieldEntity::~FieldEntity() = default;

void FieldEntity::validate()
{
}

web::json::value FieldEntity::toJson() const
{
    web::json::value val = web::json::value::object();

    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
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
    if(definitionTypeIsSet_) {
        val[utility::conversions::to_string_t("definition_type")] = ModelBase::toJson(definitionType_);
    }
    if(fieldTypeNameIsSet_) {
        val[utility::conversions::to_string_t("field_type_name")] = ModelBase::toJson(fieldTypeName_);
    }
    if(requiredIsSet_) {
        val[utility::conversions::to_string_t("required")] = ModelBase::toJson(required_);
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
    if(allOptionsIsSet_) {
        val[utility::conversions::to_string_t("all_options")] = ModelBase::toJson(allOptions_);
    }

    return val;
}
bool FieldEntity::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("definition_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("definition_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefinitionType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("required"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("required"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequired(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("all_options"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("all_options"));
        if(!fieldValue.is_null())
        {
            std::vector<OptionEntity> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllOptions(refVal);
        }
    }
    return ok;
}


std::string FieldEntity::getDisplayName() const
{
    return displayName_;
}

void FieldEntity::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool FieldEntity::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void FieldEntity::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string FieldEntity::getCode() const
{
    return code_;
}

void FieldEntity::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool FieldEntity::codeIsSet() const
{
    return codeIsSet_;
}

void FieldEntity::unsetcode()
{
    codeIsSet_ = false;
}

std::string FieldEntity::getId() const
{
    return id_;
}

void FieldEntity::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool FieldEntity::idIsSet() const
{
    return idIsSet_;
}

void FieldEntity::unsetid()
{
    idIsSet_ = false;
}

std::string FieldEntity::getDescription() const
{
    return description_;
}

void FieldEntity::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool FieldEntity::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void FieldEntity::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string FieldEntity::getCreatedBy() const
{
    return createdBy_;
}

void FieldEntity::setCreatedBy(const std::string& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool FieldEntity::createdByIsSet() const
{
    return createdByIsSet_;
}

void FieldEntity::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

int64_t FieldEntity::getCreatedDate() const
{
    return createdDate_;
}

void FieldEntity::setCreatedDate(int64_t value)
{
    createdDate_ = value;
    createdDateIsSet_ = true;
}

bool FieldEntity::createdDateIsSet() const
{
    return createdDateIsSet_;
}

void FieldEntity::unsetcreatedDate()
{
    createdDateIsSet_ = false;
}

std::string FieldEntity::getModifiedBy() const
{
    return modifiedBy_;
}

void FieldEntity::setModifiedBy(const std::string& value)
{
    modifiedBy_ = value;
    modifiedByIsSet_ = true;
}

bool FieldEntity::modifiedByIsSet() const
{
    return modifiedByIsSet_;
}

void FieldEntity::unsetmodifiedBy()
{
    modifiedByIsSet_ = false;
}

std::string FieldEntity::getDefinitionType() const
{
    return definitionType_;
}

void FieldEntity::setDefinitionType(const std::string& value)
{
    definitionType_ = value;
    definitionTypeIsSet_ = true;
}

bool FieldEntity::definitionTypeIsSet() const
{
    return definitionTypeIsSet_;
}

void FieldEntity::unsetdefinitionType()
{
    definitionTypeIsSet_ = false;
}

std::string FieldEntity::getFieldTypeName() const
{
    return fieldTypeName_;
}

void FieldEntity::setFieldTypeName(const std::string& value)
{
    fieldTypeName_ = value;
    fieldTypeNameIsSet_ = true;
}

bool FieldEntity::fieldTypeNameIsSet() const
{
    return fieldTypeNameIsSet_;
}

void FieldEntity::unsetfieldTypeName()
{
    fieldTypeNameIsSet_ = false;
}

bool FieldEntity::isRequired() const
{
    return required_;
}

void FieldEntity::setRequired(bool value)
{
    required_ = value;
    requiredIsSet_ = true;
}

bool FieldEntity::requiredIsSet() const
{
    return requiredIsSet_;
}

void FieldEntity::unsetrequired()
{
    requiredIsSet_ = false;
}

bool FieldEntity::isControlled() const
{
    return controlled_;
}

void FieldEntity::setControlled(bool value)
{
    controlled_ = value;
    controlledIsSet_ = true;
}

bool FieldEntity::controlledIsSet() const
{
    return controlledIsSet_;
}

void FieldEntity::unsetcontrolled()
{
    controlledIsSet_ = false;
}

bool FieldEntity::isImmutable() const
{
    return immutable_;
}

void FieldEntity::setImmutable(bool value)
{
    immutable_ = value;
    immutableIsSet_ = true;
}

bool FieldEntity::immutableIsSet() const
{
    return immutableIsSet_;
}

void FieldEntity::unsetimmutable()
{
    immutableIsSet_ = false;
}

int32_t FieldEntity::getNo() const
{
    return no_;
}

void FieldEntity::setNo(int32_t value)
{
    no_ = value;
    noIsSet_ = true;
}

bool FieldEntity::noIsSet() const
{
    return noIsSet_;
}

void FieldEntity::unsetno()
{
    noIsSet_ = false;
}

std::vector<OptionEntity>& FieldEntity::getAllOptions()
{
    return allOptions_;
}

void FieldEntity::setAllOptions(const std::vector<OptionEntity>& value)
{
    allOptions_ = value;
    allOptionsIsSet_ = true;
}

bool FieldEntity::allOptionsIsSet() const
{
    return allOptionsIsSet_;
}

void FieldEntity::unsetallOptions()
{
    allOptionsIsSet_ = false;
}

}
}
}
}
}


