

#include "huaweicloud/projectman/v4/model/WorkItemFlowVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




WorkItemFlowVO::WorkItemFlowVO()
{
    id_ = "";
    idIsSet_ = false;
    issueCategory_ = "";
    issueCategoryIsSet_ = false;
    flowCode_ = "";
    flowCodeIsSet_ = false;
    issueIdsIsSet_ = false;
    processContextIsSet_ = false;
}

WorkItemFlowVO::~WorkItemFlowVO() = default;

void WorkItemFlowVO::validate()
{
}

web::json::value WorkItemFlowVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(issueCategoryIsSet_) {
        val[utility::conversions::to_string_t("issue_category")] = ModelBase::toJson(issueCategory_);
    }
    if(flowCodeIsSet_) {
        val[utility::conversions::to_string_t("flow_code")] = ModelBase::toJson(flowCode_);
    }
    if(issueIdsIsSet_) {
        val[utility::conversions::to_string_t("issue_ids")] = ModelBase::toJson(issueIds_);
    }
    if(processContextIsSet_) {
        val[utility::conversions::to_string_t("process_context")] = ModelBase::toJson(processContext_);
    }

    return val;
}
bool WorkItemFlowVO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("issue_category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flow_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flow_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlowCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("process_context"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("process_context"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcessContext(refVal);
        }
    }
    return ok;
}


std::string WorkItemFlowVO::getId() const
{
    return id_;
}

void WorkItemFlowVO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool WorkItemFlowVO::idIsSet() const
{
    return idIsSet_;
}

void WorkItemFlowVO::unsetid()
{
    idIsSet_ = false;
}

std::string WorkItemFlowVO::getIssueCategory() const
{
    return issueCategory_;
}

void WorkItemFlowVO::setIssueCategory(const std::string& value)
{
    issueCategory_ = value;
    issueCategoryIsSet_ = true;
}

bool WorkItemFlowVO::issueCategoryIsSet() const
{
    return issueCategoryIsSet_;
}

void WorkItemFlowVO::unsetissueCategory()
{
    issueCategoryIsSet_ = false;
}

std::string WorkItemFlowVO::getFlowCode() const
{
    return flowCode_;
}

void WorkItemFlowVO::setFlowCode(const std::string& value)
{
    flowCode_ = value;
    flowCodeIsSet_ = true;
}

bool WorkItemFlowVO::flowCodeIsSet() const
{
    return flowCodeIsSet_;
}

void WorkItemFlowVO::unsetflowCode()
{
    flowCodeIsSet_ = false;
}

std::vector<std::string>& WorkItemFlowVO::getIssueIds()
{
    return issueIds_;
}

void WorkItemFlowVO::setIssueIds(const std::vector<std::string>& value)
{
    issueIds_ = value;
    issueIdsIsSet_ = true;
}

bool WorkItemFlowVO::issueIdsIsSet() const
{
    return issueIdsIsSet_;
}

void WorkItemFlowVO::unsetissueIds()
{
    issueIdsIsSet_ = false;
}

std::map<std::string, Object>& WorkItemFlowVO::getProcessContext()
{
    return processContext_;
}

void WorkItemFlowVO::setProcessContext(const std::map<std::string, Object>& value)
{
    processContext_ = value;
    processContextIsSet_ = true;
}

bool WorkItemFlowVO::processContextIsSet() const
{
    return processContextIsSet_;
}

void WorkItemFlowVO::unsetprocessContext()
{
    processContextIsSet_ = false;
}

}
}
}
}
}


