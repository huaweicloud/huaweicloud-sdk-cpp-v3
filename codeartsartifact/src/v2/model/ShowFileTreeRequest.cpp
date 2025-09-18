

#include "huaweicloud/codeartsartifact/v2/model/ShowFileTreeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ShowFileTreeRequest::ShowFileTreeRequest()
{
    tenantId_ = "";
    tenantIdIsSet_ = false;
    repoName_ = "";
    repoNameIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    isRecycleBin_ = false;
    isRecycleBinIsSet_ = false;
}

ShowFileTreeRequest::~ShowFileTreeRequest() = default;

void ShowFileTreeRequest::validate()
{
}

web::json::value ShowFileTreeRequest::toJson() const
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
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(isRecycleBinIsSet_) {
        val[utility::conversions::to_string_t("is_recycle_bin")] = ModelBase::toJson(isRecycleBin_);
    }

    return val;
}
bool ShowFileTreeRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_recycle_bin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_recycle_bin"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsRecycleBin(refVal);
        }
    }
    return ok;
}


std::string ShowFileTreeRequest::getTenantId() const
{
    return tenantId_;
}

void ShowFileTreeRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool ShowFileTreeRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void ShowFileTreeRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string ShowFileTreeRequest::getRepoName() const
{
    return repoName_;
}

void ShowFileTreeRequest::setRepoName(const std::string& value)
{
    repoName_ = value;
    repoNameIsSet_ = true;
}

bool ShowFileTreeRequest::repoNameIsSet() const
{
    return repoNameIsSet_;
}

void ShowFileTreeRequest::unsetrepoName()
{
    repoNameIsSet_ = false;
}

std::string ShowFileTreeRequest::getPath() const
{
    return path_;
}

void ShowFileTreeRequest::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool ShowFileTreeRequest::pathIsSet() const
{
    return pathIsSet_;
}

void ShowFileTreeRequest::unsetpath()
{
    pathIsSet_ = false;
}

std::string ShowFileTreeRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowFileTreeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowFileTreeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowFileTreeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

bool ShowFileTreeRequest::isIsRecycleBin() const
{
    return isRecycleBin_;
}

void ShowFileTreeRequest::setIsRecycleBin(bool value)
{
    isRecycleBin_ = value;
    isRecycleBinIsSet_ = true;
}

bool ShowFileTreeRequest::isRecycleBinIsSet() const
{
    return isRecycleBinIsSet_;
}

void ShowFileTreeRequest::unsetisRecycleBin()
{
    isRecycleBinIsSet_ = false;
}

}
}
}
}
}


