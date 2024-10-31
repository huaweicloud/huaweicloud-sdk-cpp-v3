

#include "huaweicloud/cfw/v1/model/ErInstance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ErInstance::ErInstance()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    attachmentId_ = "";
    attachmentIdIsSet_ = false;
}

ErInstance::~ErInstance() = default;

void ErInstance::validate()
{
}

web::json::value ErInstance::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(attachmentIdIsSet_) {
        val[utility::conversions::to_string_t("attachment_id")] = ModelBase::toJson(attachmentId_);
    }

    return val;
}
bool ErInstance::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("attachment_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attachment_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttachmentId(refVal);
        }
    }
    return ok;
}


std::string ErInstance::getId() const
{
    return id_;
}

void ErInstance::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ErInstance::idIsSet() const
{
    return idIsSet_;
}

void ErInstance::unsetid()
{
    idIsSet_ = false;
}

std::string ErInstance::getName() const
{
    return name_;
}

void ErInstance::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ErInstance::nameIsSet() const
{
    return nameIsSet_;
}

void ErInstance::unsetname()
{
    nameIsSet_ = false;
}

std::string ErInstance::getProjectId() const
{
    return projectId_;
}

void ErInstance::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ErInstance::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ErInstance::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ErInstance::getAttachmentId() const
{
    return attachmentId_;
}

void ErInstance::setAttachmentId(const std::string& value)
{
    attachmentId_ = value;
    attachmentIdIsSet_ = true;
}

bool ErInstance::attachmentIdIsSet() const
{
    return attachmentIdIsSet_;
}

void ErInstance::unsetattachmentId()
{
    attachmentIdIsSet_ = false;
}

}
}
}
}
}


