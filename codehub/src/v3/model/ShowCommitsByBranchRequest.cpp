

#include "huaweicloud/codehub/v3/model/ShowCommitsByBranchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ShowCommitsByBranchRequest::ShowCommitsByBranchRequest()
{
    groupName_ = "";
    groupNameIsSet_ = false;
    pageIndex_ = 0;
    pageIndexIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    refName_ = "";
    refNameIsSet_ = false;
    repositoryName_ = "";
    repositoryNameIsSet_ = false;
}

ShowCommitsByBranchRequest::~ShowCommitsByBranchRequest() = default;

void ShowCommitsByBranchRequest::validate()
{
}

web::json::value ShowCommitsByBranchRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }
    if(pageIndexIsSet_) {
        val[utility::conversions::to_string_t("page_index")] = ModelBase::toJson(pageIndex_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(refNameIsSet_) {
        val[utility::conversions::to_string_t("ref_name")] = ModelBase::toJson(refName_);
    }
    if(repositoryNameIsSet_) {
        val[utility::conversions::to_string_t("repository_name")] = ModelBase::toJson(repositoryName_);
    }

    return val;
}
bool ShowCommitsByBranchRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_index"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageIndex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ref_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ref_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRefName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryName(refVal);
        }
    }
    return ok;
}


std::string ShowCommitsByBranchRequest::getGroupName() const
{
    return groupName_;
}

void ShowCommitsByBranchRequest::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool ShowCommitsByBranchRequest::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void ShowCommitsByBranchRequest::unsetgroupName()
{
    groupNameIsSet_ = false;
}

int32_t ShowCommitsByBranchRequest::getPageIndex() const
{
    return pageIndex_;
}

void ShowCommitsByBranchRequest::setPageIndex(int32_t value)
{
    pageIndex_ = value;
    pageIndexIsSet_ = true;
}

bool ShowCommitsByBranchRequest::pageIndexIsSet() const
{
    return pageIndexIsSet_;
}

void ShowCommitsByBranchRequest::unsetpageIndex()
{
    pageIndexIsSet_ = false;
}

int32_t ShowCommitsByBranchRequest::getPageSize() const
{
    return pageSize_;
}

void ShowCommitsByBranchRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ShowCommitsByBranchRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ShowCommitsByBranchRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string ShowCommitsByBranchRequest::getRefName() const
{
    return refName_;
}

void ShowCommitsByBranchRequest::setRefName(const std::string& value)
{
    refName_ = value;
    refNameIsSet_ = true;
}

bool ShowCommitsByBranchRequest::refNameIsSet() const
{
    return refNameIsSet_;
}

void ShowCommitsByBranchRequest::unsetrefName()
{
    refNameIsSet_ = false;
}

std::string ShowCommitsByBranchRequest::getRepositoryName() const
{
    return repositoryName_;
}

void ShowCommitsByBranchRequest::setRepositoryName(const std::string& value)
{
    repositoryName_ = value;
    repositoryNameIsSet_ = true;
}

bool ShowCommitsByBranchRequest::repositoryNameIsSet() const
{
    return repositoryNameIsSet_;
}

void ShowCommitsByBranchRequest::unsetrepositoryName()
{
    repositoryNameIsSet_ = false;
}

}
}
}
}
}


