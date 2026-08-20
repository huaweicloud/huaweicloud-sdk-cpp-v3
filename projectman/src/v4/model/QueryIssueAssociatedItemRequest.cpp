

#include "huaweicloud/projectman/v4/model/QueryIssueAssociatedItemRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




QueryIssueAssociatedItemRequest::QueryIssueAssociatedItemRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    issueId_ = "";
    issueIdIsSet_ = false;
    issueType_ = "";
    issueTypeIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    targetProjectId_ = "";
    targetProjectIdIsSet_ = false;
    linkFieldCode_ = "";
    linkFieldCodeIsSet_ = false;
    pageNo_ = "";
    pageNoIsSet_ = false;
    pageSize_ = "";
    pageSizeIsSet_ = false;
}

QueryIssueAssociatedItemRequest::~QueryIssueAssociatedItemRequest() = default;

void QueryIssueAssociatedItemRequest::validate()
{
}

web::json::value QueryIssueAssociatedItemRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(issueTypeIsSet_) {
        val[utility::conversions::to_string_t("issue_type")] = ModelBase::toJson(issueType_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(targetProjectIdIsSet_) {
        val[utility::conversions::to_string_t("target_project_id")] = ModelBase::toJson(targetProjectId_);
    }
    if(linkFieldCodeIsSet_) {
        val[utility::conversions::to_string_t("link_field_code")] = ModelBase::toJson(linkFieldCode_);
    }
    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }

    return val;
}
bool QueryIssueAssociatedItemRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("target_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("link_field_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("link_field_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLinkFieldCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_no"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
        }
    }
    return ok;
}


std::string QueryIssueAssociatedItemRequest::getProjectId() const
{
    return projectId_;
}

void QueryIssueAssociatedItemRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool QueryIssueAssociatedItemRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void QueryIssueAssociatedItemRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string QueryIssueAssociatedItemRequest::getIssueId() const
{
    return issueId_;
}

void QueryIssueAssociatedItemRequest::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool QueryIssueAssociatedItemRequest::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void QueryIssueAssociatedItemRequest::unsetissueId()
{
    issueIdIsSet_ = false;
}

std::string QueryIssueAssociatedItemRequest::getIssueType() const
{
    return issueType_;
}

void QueryIssueAssociatedItemRequest::setIssueType(const std::string& value)
{
    issueType_ = value;
    issueTypeIsSet_ = true;
}

bool QueryIssueAssociatedItemRequest::issueTypeIsSet() const
{
    return issueTypeIsSet_;
}

void QueryIssueAssociatedItemRequest::unsetissueType()
{
    issueTypeIsSet_ = false;
}

std::string QueryIssueAssociatedItemRequest::getDomainId() const
{
    return domainId_;
}

void QueryIssueAssociatedItemRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool QueryIssueAssociatedItemRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void QueryIssueAssociatedItemRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string QueryIssueAssociatedItemRequest::getTargetProjectId() const
{
    return targetProjectId_;
}

void QueryIssueAssociatedItemRequest::setTargetProjectId(const std::string& value)
{
    targetProjectId_ = value;
    targetProjectIdIsSet_ = true;
}

bool QueryIssueAssociatedItemRequest::targetProjectIdIsSet() const
{
    return targetProjectIdIsSet_;
}

void QueryIssueAssociatedItemRequest::unsettargetProjectId()
{
    targetProjectIdIsSet_ = false;
}

std::string QueryIssueAssociatedItemRequest::getLinkFieldCode() const
{
    return linkFieldCode_;
}

void QueryIssueAssociatedItemRequest::setLinkFieldCode(const std::string& value)
{
    linkFieldCode_ = value;
    linkFieldCodeIsSet_ = true;
}

bool QueryIssueAssociatedItemRequest::linkFieldCodeIsSet() const
{
    return linkFieldCodeIsSet_;
}

void QueryIssueAssociatedItemRequest::unsetlinkFieldCode()
{
    linkFieldCodeIsSet_ = false;
}

std::string QueryIssueAssociatedItemRequest::getPageNo() const
{
    return pageNo_;
}

void QueryIssueAssociatedItemRequest::setPageNo(const std::string& value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool QueryIssueAssociatedItemRequest::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void QueryIssueAssociatedItemRequest::unsetpageNo()
{
    pageNoIsSet_ = false;
}

std::string QueryIssueAssociatedItemRequest::getPageSize() const
{
    return pageSize_;
}

void QueryIssueAssociatedItemRequest::setPageSize(const std::string& value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool QueryIssueAssociatedItemRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void QueryIssueAssociatedItemRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

}
}
}
}
}


