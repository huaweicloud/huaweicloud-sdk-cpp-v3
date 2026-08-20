

#include "huaweicloud/projectman/v4/model/ProcessInstanceResponse_result_issue_status.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ProcessInstanceResponse_result_issue_status::ProcessInstanceResponse_result_issue_status()
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
    createdDate_ = "";
    createdDateIsSet_ = false;
    modifiedDate_ = "";
    modifiedDateIsSet_ = false;
    modifiedBy_ = "";
    modifiedByIsSet_ = false;
    linkageNodeFields_ = false;
    linkageNodeFieldsIsSet_ = false;
}

ProcessInstanceResponse_result_issue_status::~ProcessInstanceResponse_result_issue_status() = default;

void ProcessInstanceResponse_result_issue_status::validate()
{
}

web::json::value ProcessInstanceResponse_result_issue_status::toJson() const
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
    if(linkageNodeFieldsIsSet_) {
        val[utility::conversions::to_string_t("linkage_node_fields")] = ModelBase::toJson(linkageNodeFields_);
    }

    return val;
}
bool ProcessInstanceResponse_result_issue_status::fromJson(const web::json::value& val)
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedDate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("modified_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("linkage_node_fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("linkage_node_fields"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLinkageNodeFields(refVal);
        }
    }
    return ok;
}


std::string ProcessInstanceResponse_result_issue_status::getId() const
{
    return id_;
}

void ProcessInstanceResponse_result_issue_status::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ProcessInstanceResponse_result_issue_status::idIsSet() const
{
    return idIsSet_;
}

void ProcessInstanceResponse_result_issue_status::unsetid()
{
    idIsSet_ = false;
}

std::string ProcessInstanceResponse_result_issue_status::getBelonging() const
{
    return belonging_;
}

void ProcessInstanceResponse_result_issue_status::setBelonging(const std::string& value)
{
    belonging_ = value;
    belongingIsSet_ = true;
}

bool ProcessInstanceResponse_result_issue_status::belongingIsSet() const
{
    return belongingIsSet_;
}

void ProcessInstanceResponse_result_issue_status::unsetbelonging()
{
    belongingIsSet_ = false;
}

std::string ProcessInstanceResponse_result_issue_status::getSpaceId() const
{
    return spaceId_;
}

void ProcessInstanceResponse_result_issue_status::setSpaceId(const std::string& value)
{
    spaceId_ = value;
    spaceIdIsSet_ = true;
}

bool ProcessInstanceResponse_result_issue_status::spaceIdIsSet() const
{
    return spaceIdIsSet_;
}

void ProcessInstanceResponse_result_issue_status::unsetspaceId()
{
    spaceIdIsSet_ = false;
}

std::string ProcessInstanceResponse_result_issue_status::getName() const
{
    return name_;
}

void ProcessInstanceResponse_result_issue_status::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ProcessInstanceResponse_result_issue_status::nameIsSet() const
{
    return nameIsSet_;
}

void ProcessInstanceResponse_result_issue_status::unsetname()
{
    nameIsSet_ = false;
}

std::string ProcessInstanceResponse_result_issue_status::getCode() const
{
    return code_;
}

void ProcessInstanceResponse_result_issue_status::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ProcessInstanceResponse_result_issue_status::codeIsSet() const
{
    return codeIsSet_;
}

void ProcessInstanceResponse_result_issue_status::unsetcode()
{
    codeIsSet_ = false;
}

std::string ProcessInstanceResponse_result_issue_status::getDefinitionType() const
{
    return definitionType_;
}

void ProcessInstanceResponse_result_issue_status::setDefinitionType(const std::string& value)
{
    definitionType_ = value;
    definitionTypeIsSet_ = true;
}

bool ProcessInstanceResponse_result_issue_status::definitionTypeIsSet() const
{
    return definitionTypeIsSet_;
}

void ProcessInstanceResponse_result_issue_status::unsetdefinitionType()
{
    definitionTypeIsSet_ = false;
}

int32_t ProcessInstanceResponse_result_issue_status::getBelongDefinitionType() const
{
    return belongDefinitionType_;
}

void ProcessInstanceResponse_result_issue_status::setBelongDefinitionType(int32_t value)
{
    belongDefinitionType_ = value;
    belongDefinitionTypeIsSet_ = true;
}

bool ProcessInstanceResponse_result_issue_status::belongDefinitionTypeIsSet() const
{
    return belongDefinitionTypeIsSet_;
}

void ProcessInstanceResponse_result_issue_status::unsetbelongDefinitionType()
{
    belongDefinitionTypeIsSet_ = false;
}

std::string ProcessInstanceResponse_result_issue_status::getDisplayValue() const
{
    return displayValue_;
}

void ProcessInstanceResponse_result_issue_status::setDisplayValue(const std::string& value)
{
    displayValue_ = value;
    displayValueIsSet_ = true;
}

bool ProcessInstanceResponse_result_issue_status::displayValueIsSet() const
{
    return displayValueIsSet_;
}

void ProcessInstanceResponse_result_issue_status::unsetdisplayValue()
{
    displayValueIsSet_ = false;
}

int32_t ProcessInstanceResponse_result_issue_status::getPosition() const
{
    return position_;
}

void ProcessInstanceResponse_result_issue_status::setPosition(int32_t value)
{
    position_ = value;
    positionIsSet_ = true;
}

bool ProcessInstanceResponse_result_issue_status::positionIsSet() const
{
    return positionIsSet_;
}

void ProcessInstanceResponse_result_issue_status::unsetposition()
{
    positionIsSet_ = false;
}

int32_t ProcessInstanceResponse_result_issue_status::getDisplayable() const
{
    return displayable_;
}

void ProcessInstanceResponse_result_issue_status::setDisplayable(int32_t value)
{
    displayable_ = value;
    displayableIsSet_ = true;
}

bool ProcessInstanceResponse_result_issue_status::displayableIsSet() const
{
    return displayableIsSet_;
}

void ProcessInstanceResponse_result_issue_status::unsetdisplayable()
{
    displayableIsSet_ = false;
}

int32_t ProcessInstanceResponse_result_issue_status::getEditable() const
{
    return editable_;
}

void ProcessInstanceResponse_result_issue_status::setEditable(int32_t value)
{
    editable_ = value;
    editableIsSet_ = true;
}

bool ProcessInstanceResponse_result_issue_status::editableIsSet() const
{
    return editableIsSet_;
}

void ProcessInstanceResponse_result_issue_status::unseteditable()
{
    editableIsSet_ = false;
}

int32_t ProcessInstanceResponse_result_issue_status::getDeletable() const
{
    return deletable_;
}

void ProcessInstanceResponse_result_issue_status::setDeletable(int32_t value)
{
    deletable_ = value;
    deletableIsSet_ = true;
}

bool ProcessInstanceResponse_result_issue_status::deletableIsSet() const
{
    return deletableIsSet_;
}

void ProcessInstanceResponse_result_issue_status::unsetdeletable()
{
    deletableIsSet_ = false;
}

int32_t ProcessInstanceResponse_result_issue_status::getMutable() const
{
    return mutable_;
}

void ProcessInstanceResponse_result_issue_status::setMutable(int32_t value)
{
    mutable_ = value;
    mutableIsSet_ = true;
}

bool ProcessInstanceResponse_result_issue_status::mutableIsSet() const
{
    return mutableIsSet_;
}

void ProcessInstanceResponse_result_issue_status::unsetmutable()
{
    mutableIsSet_ = false;
}

std::string ProcessInstanceResponse_result_issue_status::getTitlePy() const
{
    return titlePy_;
}

void ProcessInstanceResponse_result_issue_status::setTitlePy(const std::string& value)
{
    titlePy_ = value;
    titlePyIsSet_ = true;
}

bool ProcessInstanceResponse_result_issue_status::titlePyIsSet() const
{
    return titlePyIsSet_;
}

void ProcessInstanceResponse_result_issue_status::unsettitlePy()
{
    titlePyIsSet_ = false;
}

std::string ProcessInstanceResponse_result_issue_status::getCreatedBy() const
{
    return createdBy_;
}

void ProcessInstanceResponse_result_issue_status::setCreatedBy(const std::string& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool ProcessInstanceResponse_result_issue_status::createdByIsSet() const
{
    return createdByIsSet_;
}

void ProcessInstanceResponse_result_issue_status::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

std::string ProcessInstanceResponse_result_issue_status::getCreatedDate() const
{
    return createdDate_;
}

void ProcessInstanceResponse_result_issue_status::setCreatedDate(const std::string& value)
{
    createdDate_ = value;
    createdDateIsSet_ = true;
}

bool ProcessInstanceResponse_result_issue_status::createdDateIsSet() const
{
    return createdDateIsSet_;
}

void ProcessInstanceResponse_result_issue_status::unsetcreatedDate()
{
    createdDateIsSet_ = false;
}

std::string ProcessInstanceResponse_result_issue_status::getModifiedDate() const
{
    return modifiedDate_;
}

void ProcessInstanceResponse_result_issue_status::setModifiedDate(const std::string& value)
{
    modifiedDate_ = value;
    modifiedDateIsSet_ = true;
}

bool ProcessInstanceResponse_result_issue_status::modifiedDateIsSet() const
{
    return modifiedDateIsSet_;
}

void ProcessInstanceResponse_result_issue_status::unsetmodifiedDate()
{
    modifiedDateIsSet_ = false;
}

std::string ProcessInstanceResponse_result_issue_status::getModifiedBy() const
{
    return modifiedBy_;
}

void ProcessInstanceResponse_result_issue_status::setModifiedBy(const std::string& value)
{
    modifiedBy_ = value;
    modifiedByIsSet_ = true;
}

bool ProcessInstanceResponse_result_issue_status::modifiedByIsSet() const
{
    return modifiedByIsSet_;
}

void ProcessInstanceResponse_result_issue_status::unsetmodifiedBy()
{
    modifiedByIsSet_ = false;
}

bool ProcessInstanceResponse_result_issue_status::isLinkageNodeFields() const
{
    return linkageNodeFields_;
}

void ProcessInstanceResponse_result_issue_status::setLinkageNodeFields(bool value)
{
    linkageNodeFields_ = value;
    linkageNodeFieldsIsSet_ = true;
}

bool ProcessInstanceResponse_result_issue_status::linkageNodeFieldsIsSet() const
{
    return linkageNodeFieldsIsSet_;
}

void ProcessInstanceResponse_result_issue_status::unsetlinkageNodeFields()
{
    linkageNodeFieldsIsSet_ = false;
}

}
}
}
}
}


