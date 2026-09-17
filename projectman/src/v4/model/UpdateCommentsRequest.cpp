

#include "huaweicloud/projectman/v4/model/UpdateCommentsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UpdateCommentsRequest::UpdateCommentsRequest()
{
    id_ = 0;
    idIsSet_ = false;
    notes_ = "";
    notesIsSet_ = false;
    innerText_ = "";
    innerTextIsSet_ = false;
    projectUUId_ = "";
    projectUUIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    noteId_ = 0;
    noteIdIsSet_ = false;
}

UpdateCommentsRequest::~UpdateCommentsRequest() = default;

void UpdateCommentsRequest::validate()
{
}

web::json::value UpdateCommentsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(notesIsSet_) {
        val[utility::conversions::to_string_t("notes")] = ModelBase::toJson(notes_);
    }
    if(innerTextIsSet_) {
        val[utility::conversions::to_string_t("innerText")] = ModelBase::toJson(innerText_);
    }
    if(projectUUIdIsSet_) {
        val[utility::conversions::to_string_t("projectUUId")] = ModelBase::toJson(projectUUId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(noteIdIsSet_) {
        val[utility::conversions::to_string_t("noteId")] = ModelBase::toJson(noteId_);
    }

    return val;
}
bool UpdateCommentsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("innerText"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("innerText"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInnerText(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("noteId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("noteId"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNoteId(refVal);
        }
    }
    return ok;
}


int32_t UpdateCommentsRequest::getId() const
{
    return id_;
}

void UpdateCommentsRequest::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateCommentsRequest::idIsSet() const
{
    return idIsSet_;
}

void UpdateCommentsRequest::unsetid()
{
    idIsSet_ = false;
}

std::string UpdateCommentsRequest::getNotes() const
{
    return notes_;
}

void UpdateCommentsRequest::setNotes(const std::string& value)
{
    notes_ = value;
    notesIsSet_ = true;
}

bool UpdateCommentsRequest::notesIsSet() const
{
    return notesIsSet_;
}

void UpdateCommentsRequest::unsetnotes()
{
    notesIsSet_ = false;
}

std::string UpdateCommentsRequest::getInnerText() const
{
    return innerText_;
}

void UpdateCommentsRequest::setInnerText(const std::string& value)
{
    innerText_ = value;
    innerTextIsSet_ = true;
}

bool UpdateCommentsRequest::innerTextIsSet() const
{
    return innerTextIsSet_;
}

void UpdateCommentsRequest::unsetinnerText()
{
    innerTextIsSet_ = false;
}

std::string UpdateCommentsRequest::getProjectUUId() const
{
    return projectUUId_;
}

void UpdateCommentsRequest::setProjectUUId(const std::string& value)
{
    projectUUId_ = value;
    projectUUIdIsSet_ = true;
}

bool UpdateCommentsRequest::projectUUIdIsSet() const
{
    return projectUUIdIsSet_;
}

void UpdateCommentsRequest::unsetprojectUUId()
{
    projectUUIdIsSet_ = false;
}

std::string UpdateCommentsRequest::getType() const
{
    return type_;
}

void UpdateCommentsRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool UpdateCommentsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void UpdateCommentsRequest::unsettype()
{
    typeIsSet_ = false;
}

int32_t UpdateCommentsRequest::getNoteId() const
{
    return noteId_;
}

void UpdateCommentsRequest::setNoteId(int32_t value)
{
    noteId_ = value;
    noteIdIsSet_ = true;
}

bool UpdateCommentsRequest::noteIdIsSet() const
{
    return noteIdIsSet_;
}

void UpdateCommentsRequest::unsetnoteId()
{
    noteIdIsSet_ = false;
}

}
}
}
}
}


