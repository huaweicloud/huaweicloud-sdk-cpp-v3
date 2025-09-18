

#include "huaweicloud/ga/v1/model/LogtankDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




LogtankDetail::LogtankDetail()
{
    id_ = "";
    idIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    resourceTypeIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
    statusIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
}

LogtankDetail::~LogtankDetail() = default;

void LogtankDetail::validate()
{
}

web::json::value LogtankDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }
    if(logStreamIdIsSet_) {
        val[utility::conversions::to_string_t("log_stream_id")] = ModelBase::toJson(logStreamId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool LogtankDetail::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            LogtankResourceType refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            ConfigStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    return ok;
}


std::string LogtankDetail::getId() const
{
    return id_;
}

void LogtankDetail::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool LogtankDetail::idIsSet() const
{
    return idIsSet_;
}

void LogtankDetail::unsetid()
{
    idIsSet_ = false;
}

std::string LogtankDetail::getDomainId() const
{
    return domainId_;
}

void LogtankDetail::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool LogtankDetail::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void LogtankDetail::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string LogtankDetail::getProjectId() const
{
    return projectId_;
}

void LogtankDetail::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool LogtankDetail::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void LogtankDetail::unsetprojectId()
{
    projectIdIsSet_ = false;
}

LogtankResourceType LogtankDetail::getResourceType() const
{
    return resourceType_;
}

void LogtankDetail::setResourceType(const LogtankResourceType& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool LogtankDetail::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void LogtankDetail::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string LogtankDetail::getResourceId() const
{
    return resourceId_;
}

void LogtankDetail::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool LogtankDetail::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void LogtankDetail::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string LogtankDetail::getLogGroupId() const
{
    return logGroupId_;
}

void LogtankDetail::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool LogtankDetail::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void LogtankDetail::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string LogtankDetail::getLogStreamId() const
{
    return logStreamId_;
}

void LogtankDetail::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool LogtankDetail::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void LogtankDetail::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

ConfigStatus LogtankDetail::getStatus() const
{
    return status_;
}

void LogtankDetail::setStatus(const ConfigStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool LogtankDetail::statusIsSet() const
{
    return statusIsSet_;
}

void LogtankDetail::unsetstatus()
{
    statusIsSet_ = false;
}

utility::datetime LogtankDetail::getCreatedAt() const
{
    return createdAt_;
}

void LogtankDetail::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool LogtankDetail::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void LogtankDetail::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string LogtankDetail::getUpdatedAt() const
{
    return updatedAt_;
}

void LogtankDetail::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool LogtankDetail::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void LogtankDetail::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


