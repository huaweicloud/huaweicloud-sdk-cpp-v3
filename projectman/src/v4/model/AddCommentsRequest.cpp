

#include "huaweicloud/projectman/v4/model/AddCommentsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




AddCommentsRequest::AddCommentsRequest()
{
    id_ = "";
    idIsSet_ = false;
    notes_ = "";
    notesIsSet_ = false;
    innerText_ = "";
    innerTextIsSet_ = false;
    projectUUId_ = "";
    projectUUIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

AddCommentsRequest::~AddCommentsRequest() = default;

void AddCommentsRequest::validate()
{
}

web::json::value AddCommentsRequest::toJson() const
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

    return val;
}
bool AddCommentsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string AddCommentsRequest::getId() const
{
    return id_;
}

void AddCommentsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AddCommentsRequest::idIsSet() const
{
    return idIsSet_;
}

void AddCommentsRequest::unsetid()
{
    idIsSet_ = false;
}

std::string AddCommentsRequest::getNotes() const
{
    return notes_;
}

void AddCommentsRequest::setNotes(const std::string& value)
{
    notes_ = value;
    notesIsSet_ = true;
}

bool AddCommentsRequest::notesIsSet() const
{
    return notesIsSet_;
}

void AddCommentsRequest::unsetnotes()
{
    notesIsSet_ = false;
}

std::string AddCommentsRequest::getInnerText() const
{
    return innerText_;
}

void AddCommentsRequest::setInnerText(const std::string& value)
{
    innerText_ = value;
    innerTextIsSet_ = true;
}

bool AddCommentsRequest::innerTextIsSet() const
{
    return innerTextIsSet_;
}

void AddCommentsRequest::unsetinnerText()
{
    innerTextIsSet_ = false;
}

std::string AddCommentsRequest::getProjectUUId() const
{
    return projectUUId_;
}

void AddCommentsRequest::setProjectUUId(const std::string& value)
{
    projectUUId_ = value;
    projectUUIdIsSet_ = true;
}

bool AddCommentsRequest::projectUUIdIsSet() const
{
    return projectUUIdIsSet_;
}

void AddCommentsRequest::unsetprojectUUId()
{
    projectUUIdIsSet_ = false;
}

std::string AddCommentsRequest::getType() const
{
    return type_;
}

void AddCommentsRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool AddCommentsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void AddCommentsRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


