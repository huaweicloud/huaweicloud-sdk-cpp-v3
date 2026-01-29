

#include "huaweicloud/projectman/v4/model/AlmStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




AlmStatus::AlmStatus()
{
    id_ = "";
    idIsSet_ = false;
    belonging_ = "";
    belongingIsSet_ = false;
    spaceId_ = "";
    spaceIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
    definitionType_ = "";
    definitionTypeIsSet_ = false;
    belongDefinitionType_ = 0;
    belongDefinitionTypeIsSet_ = false;
    displayValue_ = "";
    displayValueIsSet_ = false;
    position_ = 0;
    positionIsSet_ = false;
    displayable_ = 0;
    displayableIsSet_ = false;
    editable_ = 0;
    editableIsSet_ = false;
    deletable_ = 0;
    deletableIsSet_ = false;
    mutable_ = 0;
    mutableIsSet_ = false;
    titlePy_ = "";
    titlePyIsSet_ = false;
    createdBy_ = "";
    createdByIsSet_ = false;
    createdDate_ = 0L;
    createdDateIsSet_ = false;
    modifiedDate_ = 0L;
    modifiedDateIsSet_ = false;
    modifiedBy_ = "";
    modifiedByIsSet_ = false;
}

AlmStatus::~AlmStatus() = default;

void AlmStatus::validate()
{
}

web::json::value AlmStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(belongingIsSet_) {
        val[utility::conversions::to_string_t("belonging")] = ModelBase::toJson(belonging_);
    }
    if(spaceIdIsSet_) {
        val[utility::conversions::to_string_t("space_id")] = ModelBase::toJson(spaceId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(definitionTypeIsSet_) {
        val[utility::conversions::to_string_t("definition_type")] = ModelBase::toJson(definitionType_);
    }
    if(belongDefinitionTypeIsSet_) {
        val[utility::conversions::to_string_t("belong_definition_type")] = ModelBase::toJson(belongDefinitionType_);
    }
    if(displayValueIsSet_) {
        val[utility::conversions::to_string_t("display_value")] = ModelBase::toJson(displayValue_);
    }
    if(positionIsSet_) {
        val[utility::conversions::to_string_t("position")] = ModelBase::toJson(position_);
    }
    if(displayableIsSet_) {
        val[utility::conversions::to_string_t("displayable")] = ModelBase::toJson(displayable_);
    }
    if(editableIsSet_) {
        val[utility::conversions::to_string_t("editable")] = ModelBase::toJson(editable_);
    }
    if(deletableIsSet_) {
        val[utility::conversions::to_string_t("deletable")] = ModelBase::toJson(deletable_);
    }
    if(mutableIsSet_) {
        val[utility::conversions::to_string_t("mutable")] = ModelBase::toJson(mutable_);
    }
    if(titlePyIsSet_) {
        val[utility::conversions::to_string_t("title_py")] = ModelBase::toJson(titlePy_);
    }
    if(createdByIsSet_) {
        val[utility::conversions::to_string_t("created_by")] = ModelBase::toJson(createdBy_);
    }
    if(createdDateIsSet_) {
        val[utility::conversions::to_string_t("created_date")] = ModelBase::toJson(createdDate_);
    }
    if(modifiedDateIsSet_) {
        val[utility::conversions::to_string_t("modified_date")] = ModelBase::toJson(modifiedDate_);
    }
    if(modifiedByIsSet_) {
        val[utility::conversions::to_string_t("modified_by")] = ModelBase::toJson(modifiedBy_);
    }

    return val;
}
bool AlmStatus::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("belonging"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("belonging"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBelonging(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("space_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("space_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpaceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("belong_definition_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("belong_definition_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBelongDefinitionType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("position"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("position"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPosition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("displayable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("displayable"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("editable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("editable"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEditable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deletable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deletable"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeletable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mutable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mutable"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMutable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title_py"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title_py"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitlePy(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("modified_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_date"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedDate(refVal);
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
    return ok;
}


std::string AlmStatus::getId() const
{
    return id_;
}

void AlmStatus::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AlmStatus::idIsSet() const
{
    return idIsSet_;
}

void AlmStatus::unsetid()
{
    idIsSet_ = false;
}

std::string AlmStatus::getBelonging() const
{
    return belonging_;
}

void AlmStatus::setBelonging(const std::string& value)
{
    belonging_ = value;
    belongingIsSet_ = true;
}

bool AlmStatus::belongingIsSet() const
{
    return belongingIsSet_;
}

void AlmStatus::unsetbelonging()
{
    belongingIsSet_ = false;
}

std::string AlmStatus::getSpaceId() const
{
    return spaceId_;
}

void AlmStatus::setSpaceId(const std::string& value)
{
    spaceId_ = value;
    spaceIdIsSet_ = true;
}

bool AlmStatus::spaceIdIsSet() const
{
    return spaceIdIsSet_;
}

void AlmStatus::unsetspaceId()
{
    spaceIdIsSet_ = false;
}

std::string AlmStatus::getName() const
{
    return name_;
}

void AlmStatus::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AlmStatus::nameIsSet() const
{
    return nameIsSet_;
}

void AlmStatus::unsetname()
{
    nameIsSet_ = false;
}

std::string AlmStatus::getCode() const
{
    return code_;
}

void AlmStatus::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool AlmStatus::codeIsSet() const
{
    return codeIsSet_;
}

void AlmStatus::unsetcode()
{
    codeIsSet_ = false;
}

std::string AlmStatus::getDefinitionType() const
{
    return definitionType_;
}

void AlmStatus::setDefinitionType(const std::string& value)
{
    definitionType_ = value;
    definitionTypeIsSet_ = true;
}

bool AlmStatus::definitionTypeIsSet() const
{
    return definitionTypeIsSet_;
}

void AlmStatus::unsetdefinitionType()
{
    definitionTypeIsSet_ = false;
}

int32_t AlmStatus::getBelongDefinitionType() const
{
    return belongDefinitionType_;
}

void AlmStatus::setBelongDefinitionType(int32_t value)
{
    belongDefinitionType_ = value;
    belongDefinitionTypeIsSet_ = true;
}

bool AlmStatus::belongDefinitionTypeIsSet() const
{
    return belongDefinitionTypeIsSet_;
}

void AlmStatus::unsetbelongDefinitionType()
{
    belongDefinitionTypeIsSet_ = false;
}

std::string AlmStatus::getDisplayValue() const
{
    return displayValue_;
}

void AlmStatus::setDisplayValue(const std::string& value)
{
    displayValue_ = value;
    displayValueIsSet_ = true;
}

bool AlmStatus::displayValueIsSet() const
{
    return displayValueIsSet_;
}

void AlmStatus::unsetdisplayValue()
{
    displayValueIsSet_ = false;
}

int32_t AlmStatus::getPosition() const
{
    return position_;
}

void AlmStatus::setPosition(int32_t value)
{
    position_ = value;
    positionIsSet_ = true;
}

bool AlmStatus::positionIsSet() const
{
    return positionIsSet_;
}

void AlmStatus::unsetposition()
{
    positionIsSet_ = false;
}

int32_t AlmStatus::getDisplayable() const
{
    return displayable_;
}

void AlmStatus::setDisplayable(int32_t value)
{
    displayable_ = value;
    displayableIsSet_ = true;
}

bool AlmStatus::displayableIsSet() const
{
    return displayableIsSet_;
}

void AlmStatus::unsetdisplayable()
{
    displayableIsSet_ = false;
}

int32_t AlmStatus::getEditable() const
{
    return editable_;
}

void AlmStatus::setEditable(int32_t value)
{
    editable_ = value;
    editableIsSet_ = true;
}

bool AlmStatus::editableIsSet() const
{
    return editableIsSet_;
}

void AlmStatus::unseteditable()
{
    editableIsSet_ = false;
}

int32_t AlmStatus::getDeletable() const
{
    return deletable_;
}

void AlmStatus::setDeletable(int32_t value)
{
    deletable_ = value;
    deletableIsSet_ = true;
}

bool AlmStatus::deletableIsSet() const
{
    return deletableIsSet_;
}

void AlmStatus::unsetdeletable()
{
    deletableIsSet_ = false;
}

int32_t AlmStatus::getMutable() const
{
    return mutable_;
}

void AlmStatus::setMutable(int32_t value)
{
    mutable_ = value;
    mutableIsSet_ = true;
}

bool AlmStatus::mutableIsSet() const
{
    return mutableIsSet_;
}

void AlmStatus::unsetmutable()
{
    mutableIsSet_ = false;
}

std::string AlmStatus::getTitlePy() const
{
    return titlePy_;
}

void AlmStatus::setTitlePy(const std::string& value)
{
    titlePy_ = value;
    titlePyIsSet_ = true;
}

bool AlmStatus::titlePyIsSet() const
{
    return titlePyIsSet_;
}

void AlmStatus::unsettitlePy()
{
    titlePyIsSet_ = false;
}

std::string AlmStatus::getCreatedBy() const
{
    return createdBy_;
}

void AlmStatus::setCreatedBy(const std::string& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool AlmStatus::createdByIsSet() const
{
    return createdByIsSet_;
}

void AlmStatus::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

int64_t AlmStatus::getCreatedDate() const
{
    return createdDate_;
}

void AlmStatus::setCreatedDate(int64_t value)
{
    createdDate_ = value;
    createdDateIsSet_ = true;
}

bool AlmStatus::createdDateIsSet() const
{
    return createdDateIsSet_;
}

void AlmStatus::unsetcreatedDate()
{
    createdDateIsSet_ = false;
}

int64_t AlmStatus::getModifiedDate() const
{
    return modifiedDate_;
}

void AlmStatus::setModifiedDate(int64_t value)
{
    modifiedDate_ = value;
    modifiedDateIsSet_ = true;
}

bool AlmStatus::modifiedDateIsSet() const
{
    return modifiedDateIsSet_;
}

void AlmStatus::unsetmodifiedDate()
{
    modifiedDateIsSet_ = false;
}

std::string AlmStatus::getModifiedBy() const
{
    return modifiedBy_;
}

void AlmStatus::setModifiedBy(const std::string& value)
{
    modifiedBy_ = value;
    modifiedByIsSet_ = true;
}

bool AlmStatus::modifiedByIsSet() const
{
    return modifiedByIsSet_;
}

void AlmStatus::unsetmodifiedBy()
{
    modifiedByIsSet_ = false;
}

}
}
}
}
}


