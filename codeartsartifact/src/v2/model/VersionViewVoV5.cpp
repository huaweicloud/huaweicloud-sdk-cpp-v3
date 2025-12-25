

#include "huaweicloud/codeartsartifact/v2/model/VersionViewVoV5.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




VersionViewVoV5::VersionViewVoV5()
{
    id_ = "";
    idIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    fileId_ = "";
    fileIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
}

VersionViewVoV5::~VersionViewVoV5() = default;

void VersionViewVoV5::validate()
{
}

web::json::value VersionViewVoV5::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(fileIdIsSet_) {
        val[utility::conversions::to_string_t("file_id")] = ModelBase::toJson(fileId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }

    return val;
}
bool VersionViewVoV5::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPath(refVal);
        }
    }
    return ok;
}


std::string VersionViewVoV5::getId() const
{
    return id_;
}

void VersionViewVoV5::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool VersionViewVoV5::idIsSet() const
{
    return idIsSet_;
}

void VersionViewVoV5::unsetid()
{
    idIsSet_ = false;
}

std::string VersionViewVoV5::getProjectId() const
{
    return projectId_;
}

void VersionViewVoV5::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool VersionViewVoV5::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void VersionViewVoV5::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string VersionViewVoV5::getFileId() const
{
    return fileId_;
}

void VersionViewVoV5::setFileId(const std::string& value)
{
    fileId_ = value;
    fileIdIsSet_ = true;
}

bool VersionViewVoV5::fileIdIsSet() const
{
    return fileIdIsSet_;
}

void VersionViewVoV5::unsetfileId()
{
    fileIdIsSet_ = false;
}

std::string VersionViewVoV5::getName() const
{
    return name_;
}

void VersionViewVoV5::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool VersionViewVoV5::nameIsSet() const
{
    return nameIsSet_;
}

void VersionViewVoV5::unsetname()
{
    nameIsSet_ = false;
}

std::string VersionViewVoV5::getPath() const
{
    return path_;
}

void VersionViewVoV5::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool VersionViewVoV5::pathIsSet() const
{
    return pathIsSet_;
}

void VersionViewVoV5::unsetpath()
{
    pathIsSet_ = false;
}

}
}
}
}
}


