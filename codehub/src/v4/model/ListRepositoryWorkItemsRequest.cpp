

#include "huaweicloud/codehub/v4/model/ListRepositoryWorkItemsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListRepositoryWorkItemsRequest::ListRepositoryWorkItemsRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    isIpd_ = false;
    isIpdIsSet_ = false;
    subject_ = "";
    subjectIsSet_ = false;
    targetBranch_ = "";
    targetBranchIsSet_ = false;
}

ListRepositoryWorkItemsRequest::~ListRepositoryWorkItemsRequest() = default;

void ListRepositoryWorkItemsRequest::validate()
{
}

web::json::value ListRepositoryWorkItemsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(isIpdIsSet_) {
        val[utility::conversions::to_string_t("is_ipd")] = ModelBase::toJson(isIpd_);
    }
    if(subjectIsSet_) {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(subject_);
    }
    if(targetBranchIsSet_) {
        val[utility::conversions::to_string_t("target_branch")] = ModelBase::toJson(targetBranch_);
    }

    return val;
}
bool ListRepositoryWorkItemsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_ipd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_ipd"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsIpd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subject"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subject"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetBranch(refVal);
        }
    }
    return ok;
}


int32_t ListRepositoryWorkItemsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListRepositoryWorkItemsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListRepositoryWorkItemsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListRepositoryWorkItemsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t ListRepositoryWorkItemsRequest::getOffset() const
{
    return offset_;
}

void ListRepositoryWorkItemsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRepositoryWorkItemsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRepositoryWorkItemsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRepositoryWorkItemsRequest::getLimit() const
{
    return limit_;
}

void ListRepositoryWorkItemsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRepositoryWorkItemsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRepositoryWorkItemsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListRepositoryWorkItemsRequest::getProjectId() const
{
    return projectId_;
}

void ListRepositoryWorkItemsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListRepositoryWorkItemsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListRepositoryWorkItemsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

bool ListRepositoryWorkItemsRequest::isIsIpd() const
{
    return isIpd_;
}

void ListRepositoryWorkItemsRequest::setIsIpd(bool value)
{
    isIpd_ = value;
    isIpdIsSet_ = true;
}

bool ListRepositoryWorkItemsRequest::isIpdIsSet() const
{
    return isIpdIsSet_;
}

void ListRepositoryWorkItemsRequest::unsetisIpd()
{
    isIpdIsSet_ = false;
}

std::string ListRepositoryWorkItemsRequest::getSubject() const
{
    return subject_;
}

void ListRepositoryWorkItemsRequest::setSubject(const std::string& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool ListRepositoryWorkItemsRequest::subjectIsSet() const
{
    return subjectIsSet_;
}

void ListRepositoryWorkItemsRequest::unsetsubject()
{
    subjectIsSet_ = false;
}

std::string ListRepositoryWorkItemsRequest::getTargetBranch() const
{
    return targetBranch_;
}

void ListRepositoryWorkItemsRequest::setTargetBranch(const std::string& value)
{
    targetBranch_ = value;
    targetBranchIsSet_ = true;
}

bool ListRepositoryWorkItemsRequest::targetBranchIsSet() const
{
    return targetBranchIsSet_;
}

void ListRepositoryWorkItemsRequest::unsettargetBranch()
{
    targetBranchIsSet_ = false;
}

}
}
}
}
}


