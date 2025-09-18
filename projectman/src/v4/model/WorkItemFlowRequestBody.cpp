

#include "huaweicloud/projectman/v4/model/WorkItemFlowRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




WorkItemFlowRequestBody::WorkItemFlowRequestBody()
{
    id_ = "";
    idIsSet_ = false;
    issueCategory_ = "";
    issueCategoryIsSet_ = false;
    flowCode_ = "";
    flowCodeIsSet_ = false;
}

WorkItemFlowRequestBody::~WorkItemFlowRequestBody() = default;

void WorkItemFlowRequestBody::validate()
{
}

web::json::value WorkItemFlowRequestBody::toJson() const
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

    return val;
}
bool WorkItemFlowRequestBody::fromJson(const web::json::value& val)
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
    return ok;
}


std::string WorkItemFlowRequestBody::getId() const
{
    return id_;
}

void WorkItemFlowRequestBody::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool WorkItemFlowRequestBody::idIsSet() const
{
    return idIsSet_;
}

void WorkItemFlowRequestBody::unsetid()
{
    idIsSet_ = false;
}

std::string WorkItemFlowRequestBody::getIssueCategory() const
{
    return issueCategory_;
}

void WorkItemFlowRequestBody::setIssueCategory(const std::string& value)
{
    issueCategory_ = value;
    issueCategoryIsSet_ = true;
}

bool WorkItemFlowRequestBody::issueCategoryIsSet() const
{
    return issueCategoryIsSet_;
}

void WorkItemFlowRequestBody::unsetissueCategory()
{
    issueCategoryIsSet_ = false;
}

std::string WorkItemFlowRequestBody::getFlowCode() const
{
    return flowCode_;
}

void WorkItemFlowRequestBody::setFlowCode(const std::string& value)
{
    flowCode_ = value;
    flowCodeIsSet_ = true;
}

bool WorkItemFlowRequestBody::flowCodeIsSet() const
{
    return flowCodeIsSet_;
}

void WorkItemFlowRequestBody::unsetflowCode()
{
    flowCodeIsSet_ = false;
}

}
}
}
}
}


