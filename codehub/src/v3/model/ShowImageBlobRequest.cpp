

#include "huaweicloud/codehub/v3/model/ShowImageBlobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ShowImageBlobRequest::ShowImageBlobRequest()
{
    repositoryUuid_ = "";
    repositoryUuidIsSet_ = false;
    branchName_ = "";
    branchNameIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
}

ShowImageBlobRequest::~ShowImageBlobRequest() = default;

void ShowImageBlobRequest::validate()
{
}

web::json::value ShowImageBlobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryUuidIsSet_) {
        val[utility::conversions::to_string_t("repository_uuid")] = ModelBase::toJson(repositoryUuid_);
    }
    if(branchNameIsSet_) {
        val[utility::conversions::to_string_t("branch_name")] = ModelBase::toJson(branchName_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }

    return val;
}
bool ShowImageBlobRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchName(refVal);
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


std::string ShowImageBlobRequest::getRepositoryUuid() const
{
    return repositoryUuid_;
}

void ShowImageBlobRequest::setRepositoryUuid(const std::string& value)
{
    repositoryUuid_ = value;
    repositoryUuidIsSet_ = true;
}

bool ShowImageBlobRequest::repositoryUuidIsSet() const
{
    return repositoryUuidIsSet_;
}

void ShowImageBlobRequest::unsetrepositoryUuid()
{
    repositoryUuidIsSet_ = false;
}

std::string ShowImageBlobRequest::getBranchName() const
{
    return branchName_;
}

void ShowImageBlobRequest::setBranchName(const std::string& value)
{
    branchName_ = value;
    branchNameIsSet_ = true;
}

bool ShowImageBlobRequest::branchNameIsSet() const
{
    return branchNameIsSet_;
}

void ShowImageBlobRequest::unsetbranchName()
{
    branchNameIsSet_ = false;
}

std::string ShowImageBlobRequest::getPath() const
{
    return path_;
}

void ShowImageBlobRequest::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool ShowImageBlobRequest::pathIsSet() const
{
    return pathIsSet_;
}

void ShowImageBlobRequest::unsetpath()
{
    pathIsSet_ = false;
}

}
}
}
}
}


