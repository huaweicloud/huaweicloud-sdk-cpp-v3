

#include "huaweicloud/codeartsartifact/v2/model/ListArtifactoryComponentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ListArtifactoryComponentRequest::ListArtifactoryComponentRequest()
{
    tenantId_ = "";
    tenantIdIsSet_ = false;
    repoName_ = "";
    repoNameIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    format_ = "";
    formatIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ListArtifactoryComponentRequest::~ListArtifactoryComponentRequest() = default;

void ListArtifactoryComponentRequest::validate()
{
}

web::json::value ListArtifactoryComponentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(repoNameIsSet_) {
        val[utility::conversions::to_string_t("repo_name")] = ModelBase::toJson(repoName_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ListArtifactoryComponentRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    return ok;
}


std::string ListArtifactoryComponentRequest::getTenantId() const
{
    return tenantId_;
}

void ListArtifactoryComponentRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool ListArtifactoryComponentRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void ListArtifactoryComponentRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string ListArtifactoryComponentRequest::getRepoName() const
{
    return repoName_;
}

void ListArtifactoryComponentRequest::setRepoName(const std::string& value)
{
    repoName_ = value;
    repoNameIsSet_ = true;
}

bool ListArtifactoryComponentRequest::repoNameIsSet() const
{
    return repoNameIsSet_;
}

void ListArtifactoryComponentRequest::unsetrepoName()
{
    repoNameIsSet_ = false;
}

std::string ListArtifactoryComponentRequest::getPath() const
{
    return path_;
}

void ListArtifactoryComponentRequest::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool ListArtifactoryComponentRequest::pathIsSet() const
{
    return pathIsSet_;
}

void ListArtifactoryComponentRequest::unsetpath()
{
    pathIsSet_ = false;
}

std::string ListArtifactoryComponentRequest::getFormat() const
{
    return format_;
}

void ListArtifactoryComponentRequest::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool ListArtifactoryComponentRequest::formatIsSet() const
{
    return formatIsSet_;
}

void ListArtifactoryComponentRequest::unsetformat()
{
    formatIsSet_ = false;
}

std::string ListArtifactoryComponentRequest::getInstanceId() const
{
    return instanceId_;
}

void ListArtifactoryComponentRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListArtifactoryComponentRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListArtifactoryComponentRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


