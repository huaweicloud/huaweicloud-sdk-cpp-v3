

#include "huaweicloud/projectman/v4/model/IssueFlowRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueFlowRequest::IssueFlowRequest()
{
    statusId_ = 0;
    statusIdIsSet_ = false;
    assignedToId_ = "";
    assignedToIdIsSet_ = false;
    notes_ = "";
    notesIsSet_ = false;
    projectUUId_ = "";
    projectUUIdIsSet_ = false;
    id_ = 0;
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

IssueFlowRequest::~IssueFlowRequest() = default;

void IssueFlowRequest::validate()
{
}

web::json::value IssueFlowRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIdIsSet_) {
        val[utility::conversions::to_string_t("status_id")] = ModelBase::toJson(statusId_);
    }
    if(assignedToIdIsSet_) {
        val[utility::conversions::to_string_t("assigned_to_id")] = ModelBase::toJson(assignedToId_);
    }
    if(notesIsSet_) {
        val[utility::conversions::to_string_t("notes")] = ModelBase::toJson(notes_);
    }
    if(projectUUIdIsSet_) {
        val[utility::conversions::to_string_t("projectUUId")] = ModelBase::toJson(projectUUId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool IssueFlowRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("assigned_to_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assigned_to_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignedToId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notes"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("projectUUId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("projectUUId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUUId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    return ok;
}


int32_t IssueFlowRequest::getStatusId() const
{
    return statusId_;
}

void IssueFlowRequest::setStatusId(int32_t value)
{
    statusId_ = value;
    statusIdIsSet_ = true;
}

bool IssueFlowRequest::statusIdIsSet() const
{
    return statusIdIsSet_;
}

void IssueFlowRequest::unsetstatusId()
{
    statusIdIsSet_ = false;
}

std::string IssueFlowRequest::getAssignedToId() const
{
    return assignedToId_;
}

void IssueFlowRequest::setAssignedToId(const std::string& value)
{
    assignedToId_ = value;
    assignedToIdIsSet_ = true;
}

bool IssueFlowRequest::assignedToIdIsSet() const
{
    return assignedToIdIsSet_;
}

void IssueFlowRequest::unsetassignedToId()
{
    assignedToIdIsSet_ = false;
}

std::string IssueFlowRequest::getNotes() const
{
    return notes_;
}

void IssueFlowRequest::setNotes(const std::string& value)
{
    notes_ = value;
    notesIsSet_ = true;
}

bool IssueFlowRequest::notesIsSet() const
{
    return notesIsSet_;
}

void IssueFlowRequest::unsetnotes()
{
    notesIsSet_ = false;
}

std::string IssueFlowRequest::getProjectUUId() const
{
    return projectUUId_;
}

void IssueFlowRequest::setProjectUUId(const std::string& value)
{
    projectUUId_ = value;
    projectUUIdIsSet_ = true;
}

bool IssueFlowRequest::projectUUIdIsSet() const
{
    return projectUUIdIsSet_;
}

void IssueFlowRequest::unsetprojectUUId()
{
    projectUUIdIsSet_ = false;
}

int32_t IssueFlowRequest::getId() const
{
    return id_;
}

void IssueFlowRequest::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool IssueFlowRequest::idIsSet() const
{
    return idIsSet_;
}

void IssueFlowRequest::unsetid()
{
    idIsSet_ = false;
}

std::string IssueFlowRequest::getType() const
{
    return type_;
}

void IssueFlowRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool IssueFlowRequest::typeIsSet() const
{
    return typeIsSet_;
}

void IssueFlowRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


