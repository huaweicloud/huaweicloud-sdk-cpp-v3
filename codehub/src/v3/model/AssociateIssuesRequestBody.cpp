

#include "huaweicloud/codehub/v3/model/AssociateIssuesRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




AssociateIssuesRequestBody::AssociateIssuesRequestBody()
{
    branch_ = "";
    branchIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    relatedIdIsSet_ = false;
    repoId_ = "";
    repoIdIsSet_ = false;
}

AssociateIssuesRequestBody::~AssociateIssuesRequestBody() = default;

void AssociateIssuesRequestBody::validate()
{
}

web::json::value AssociateIssuesRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(branchIsSet_) {
        val[utility::conversions::to_string_t("branch")] = ModelBase::toJson(branch_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(relatedIdIsSet_) {
        val[utility::conversions::to_string_t("related_id")] = ModelBase::toJson(relatedId_);
    }
    if(repoIdIsSet_) {
        val[utility::conversions::to_string_t("repo_id")] = ModelBase::toJson(repoId_);
    }

    return val;
}
bool AssociateIssuesRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranch(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("related_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("related_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelatedId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoId(refVal);
        }
    }
    return ok;
}


std::string AssociateIssuesRequestBody::getBranch() const
{
    return branch_;
}

void AssociateIssuesRequestBody::setBranch(const std::string& value)
{
    branch_ = value;
    branchIsSet_ = true;
}

bool AssociateIssuesRequestBody::branchIsSet() const
{
    return branchIsSet_;
}

void AssociateIssuesRequestBody::unsetbranch()
{
    branchIsSet_ = false;
}

std::string AssociateIssuesRequestBody::getProjectId() const
{
    return projectId_;
}

void AssociateIssuesRequestBody::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool AssociateIssuesRequestBody::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void AssociateIssuesRequestBody::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::vector<std::string>& AssociateIssuesRequestBody::getRelatedId()
{
    return relatedId_;
}

void AssociateIssuesRequestBody::setRelatedId(const std::vector<std::string>& value)
{
    relatedId_ = value;
    relatedIdIsSet_ = true;
}

bool AssociateIssuesRequestBody::relatedIdIsSet() const
{
    return relatedIdIsSet_;
}

void AssociateIssuesRequestBody::unsetrelatedId()
{
    relatedIdIsSet_ = false;
}

std::string AssociateIssuesRequestBody::getRepoId() const
{
    return repoId_;
}

void AssociateIssuesRequestBody::setRepoId(const std::string& value)
{
    repoId_ = value;
    repoIdIsSet_ = true;
}

bool AssociateIssuesRequestBody::repoIdIsSet() const
{
    return repoIdIsSet_;
}

void AssociateIssuesRequestBody::unsetrepoId()
{
    repoIdIsSet_ = false;
}

}
}
}
}
}


