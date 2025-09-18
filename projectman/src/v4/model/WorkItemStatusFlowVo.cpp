

#include "huaweicloud/projectman/v4/model/WorkItemStatusFlowVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




WorkItemStatusFlowVo::WorkItemStatusFlowVo()
{
    parentName_ = "";
    parentNameIsSet_ = false;
    parentType_ = "";
    parentTypeIsSet_ = false;
    statusId_ = "";
    statusIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    statusType_ = "";
    statusTypeIsSet_ = false;
    directToIsSet_ = false;
    assignTo_ = "";
    assignToIsSet_ = false;
    comment_ = "";
    commentIsSet_ = false;
    requiredAssign_ = false;
    requiredAssignIsSet_ = false;
    requiredNotes_ = false;
    requiredNotesIsSet_ = false;
    fieldType_ = false;
    fieldTypeIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
}

WorkItemStatusFlowVo::~WorkItemStatusFlowVo() = default;

void WorkItemStatusFlowVo::validate()
{
}

web::json::value WorkItemStatusFlowVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(parentNameIsSet_) {
        val[utility::conversions::to_string_t("parent_name")] = ModelBase::toJson(parentName_);
    }
    if(parentTypeIsSet_) {
        val[utility::conversions::to_string_t("parent_type")] = ModelBase::toJson(parentType_);
    }
    if(statusIdIsSet_) {
        val[utility::conversions::to_string_t("status_id")] = ModelBase::toJson(statusId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusTypeIsSet_) {
        val[utility::conversions::to_string_t("status_type")] = ModelBase::toJson(statusType_);
    }
    if(directToIsSet_) {
        val[utility::conversions::to_string_t("direct_to")] = ModelBase::toJson(directTo_);
    }
    if(assignToIsSet_) {
        val[utility::conversions::to_string_t("assign_to")] = ModelBase::toJson(assignTo_);
    }
    if(commentIsSet_) {
        val[utility::conversions::to_string_t("comment")] = ModelBase::toJson(comment_);
    }
    if(requiredAssignIsSet_) {
        val[utility::conversions::to_string_t("required_assign")] = ModelBase::toJson(requiredAssign_);
    }
    if(requiredNotesIsSet_) {
        val[utility::conversions::to_string_t("required_notes")] = ModelBase::toJson(requiredNotes_);
    }
    if(fieldTypeIsSet_) {
        val[utility::conversions::to_string_t("field_type")] = ModelBase::toJson(fieldType_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }

    return val;
}
bool WorkItemStatusFlowVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("parent_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("direct_to"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("direct_to"));
        if(!fieldValue.is_null())
        {
            std::vector<StatusFlowDirectToVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDirectTo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("assign_to"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assign_to"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignTo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("comment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comment"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComment(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("required_assign"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("required_assign"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequiredAssign(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("required_notes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("required_notes"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequiredNotes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("field_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("field_type"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFieldType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
        }
    }
    return ok;
}


std::string WorkItemStatusFlowVo::getParentName() const
{
    return parentName_;
}

void WorkItemStatusFlowVo::setParentName(const std::string& value)
{
    parentName_ = value;
    parentNameIsSet_ = true;
}

bool WorkItemStatusFlowVo::parentNameIsSet() const
{
    return parentNameIsSet_;
}

void WorkItemStatusFlowVo::unsetparentName()
{
    parentNameIsSet_ = false;
}

std::string WorkItemStatusFlowVo::getParentType() const
{
    return parentType_;
}

void WorkItemStatusFlowVo::setParentType(const std::string& value)
{
    parentType_ = value;
    parentTypeIsSet_ = true;
}

bool WorkItemStatusFlowVo::parentTypeIsSet() const
{
    return parentTypeIsSet_;
}

void WorkItemStatusFlowVo::unsetparentType()
{
    parentTypeIsSet_ = false;
}

std::string WorkItemStatusFlowVo::getStatusId() const
{
    return statusId_;
}

void WorkItemStatusFlowVo::setStatusId(const std::string& value)
{
    statusId_ = value;
    statusIdIsSet_ = true;
}

bool WorkItemStatusFlowVo::statusIdIsSet() const
{
    return statusIdIsSet_;
}

void WorkItemStatusFlowVo::unsetstatusId()
{
    statusIdIsSet_ = false;
}

std::string WorkItemStatusFlowVo::getName() const
{
    return name_;
}

void WorkItemStatusFlowVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool WorkItemStatusFlowVo::nameIsSet() const
{
    return nameIsSet_;
}

void WorkItemStatusFlowVo::unsetname()
{
    nameIsSet_ = false;
}

std::string WorkItemStatusFlowVo::getStatusType() const
{
    return statusType_;
}

void WorkItemStatusFlowVo::setStatusType(const std::string& value)
{
    statusType_ = value;
    statusTypeIsSet_ = true;
}

bool WorkItemStatusFlowVo::statusTypeIsSet() const
{
    return statusTypeIsSet_;
}

void WorkItemStatusFlowVo::unsetstatusType()
{
    statusTypeIsSet_ = false;
}

std::vector<StatusFlowDirectToVo>& WorkItemStatusFlowVo::getDirectTo()
{
    return directTo_;
}

void WorkItemStatusFlowVo::setDirectTo(const std::vector<StatusFlowDirectToVo>& value)
{
    directTo_ = value;
    directToIsSet_ = true;
}

bool WorkItemStatusFlowVo::directToIsSet() const
{
    return directToIsSet_;
}

void WorkItemStatusFlowVo::unsetdirectTo()
{
    directToIsSet_ = false;
}

std::string WorkItemStatusFlowVo::getAssignTo() const
{
    return assignTo_;
}

void WorkItemStatusFlowVo::setAssignTo(const std::string& value)
{
    assignTo_ = value;
    assignToIsSet_ = true;
}

bool WorkItemStatusFlowVo::assignToIsSet() const
{
    return assignToIsSet_;
}

void WorkItemStatusFlowVo::unsetassignTo()
{
    assignToIsSet_ = false;
}

std::string WorkItemStatusFlowVo::getComment() const
{
    return comment_;
}

void WorkItemStatusFlowVo::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool WorkItemStatusFlowVo::commentIsSet() const
{
    return commentIsSet_;
}

void WorkItemStatusFlowVo::unsetcomment()
{
    commentIsSet_ = false;
}

bool WorkItemStatusFlowVo::isRequiredAssign() const
{
    return requiredAssign_;
}

void WorkItemStatusFlowVo::setRequiredAssign(bool value)
{
    requiredAssign_ = value;
    requiredAssignIsSet_ = true;
}

bool WorkItemStatusFlowVo::requiredAssignIsSet() const
{
    return requiredAssignIsSet_;
}

void WorkItemStatusFlowVo::unsetrequiredAssign()
{
    requiredAssignIsSet_ = false;
}

bool WorkItemStatusFlowVo::isRequiredNotes() const
{
    return requiredNotes_;
}

void WorkItemStatusFlowVo::setRequiredNotes(bool value)
{
    requiredNotes_ = value;
    requiredNotesIsSet_ = true;
}

bool WorkItemStatusFlowVo::requiredNotesIsSet() const
{
    return requiredNotesIsSet_;
}

void WorkItemStatusFlowVo::unsetrequiredNotes()
{
    requiredNotesIsSet_ = false;
}

bool WorkItemStatusFlowVo::isFieldType() const
{
    return fieldType_;
}

void WorkItemStatusFlowVo::setFieldType(bool value)
{
    fieldType_ = value;
    fieldTypeIsSet_ = true;
}

bool WorkItemStatusFlowVo::fieldTypeIsSet() const
{
    return fieldTypeIsSet_;
}

void WorkItemStatusFlowVo::unsetfieldType()
{
    fieldTypeIsSet_ = false;
}

std::string WorkItemStatusFlowVo::getParentId() const
{
    return parentId_;
}

void WorkItemStatusFlowVo::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool WorkItemStatusFlowVo::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void WorkItemStatusFlowVo::unsetparentId()
{
    parentIdIsSet_ = false;
}

}
}
}
}
}


