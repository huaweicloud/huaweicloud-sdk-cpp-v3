

#include "huaweicloud/projectman/v4/model/DeleteIssueNoteParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




DeleteIssueNoteParam::DeleteIssueNoteParam()
{
    id_ = 0;
    idIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

DeleteIssueNoteParam::~DeleteIssueNoteParam() = default;

void DeleteIssueNoteParam::validate()
{
}

web::json::value DeleteIssueNoteParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("projectId")] = ModelBase::toJson(projectId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool DeleteIssueNoteParam::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("projectId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("projectId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
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


int32_t DeleteIssueNoteParam::getId() const
{
    return id_;
}

void DeleteIssueNoteParam::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteIssueNoteParam::idIsSet() const
{
    return idIsSet_;
}

void DeleteIssueNoteParam::unsetid()
{
    idIsSet_ = false;
}

std::string DeleteIssueNoteParam::getProjectId() const
{
    return projectId_;
}

void DeleteIssueNoteParam::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DeleteIssueNoteParam::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DeleteIssueNoteParam::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string DeleteIssueNoteParam::getType() const
{
    return type_;
}

void DeleteIssueNoteParam::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool DeleteIssueNoteParam::typeIsSet() const
{
    return typeIsSet_;
}

void DeleteIssueNoteParam::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


