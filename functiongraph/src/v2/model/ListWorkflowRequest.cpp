

#include "huaweicloud/functiongraph/v2/model/ListWorkflowRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListWorkflowRequest::ListWorkflowRequest()
{
    workflowName_ = "";
    workflowNameIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    enterpriseProject_ = "";
    enterpriseProjectIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
}

ListWorkflowRequest::~ListWorkflowRequest() = default;

void ListWorkflowRequest::validate()
{
}

web::json::value ListWorkflowRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowNameIsSet_) {
        val[utility::conversions::to_string_t("workflow_name")] = ModelBase::toJson(workflowName_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(enterpriseProjectIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project")] = ModelBase::toJson(enterpriseProject_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }

    return val;
}
bool ListWorkflowRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("workflow_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflow_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflowName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    return ok;
}


std::string ListWorkflowRequest::getWorkflowName() const
{
    return workflowName_;
}

void ListWorkflowRequest::setWorkflowName(const std::string& value)
{
    workflowName_ = value;
    workflowNameIsSet_ = true;
}

bool ListWorkflowRequest::workflowNameIsSet() const
{
    return workflowNameIsSet_;
}

void ListWorkflowRequest::unsetworkflowName()
{
    workflowNameIsSet_ = false;
}

int32_t ListWorkflowRequest::getLimit() const
{
    return limit_;
}

void ListWorkflowRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListWorkflowRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListWorkflowRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListWorkflowRequest::getOffset() const
{
    return offset_;
}

void ListWorkflowRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListWorkflowRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListWorkflowRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListWorkflowRequest::getEnterpriseProject() const
{
    return enterpriseProject_;
}

void ListWorkflowRequest::setEnterpriseProject(const std::string& value)
{
    enterpriseProject_ = value;
    enterpriseProjectIsSet_ = true;
}

bool ListWorkflowRequest::enterpriseProjectIsSet() const
{
    return enterpriseProjectIsSet_;
}

void ListWorkflowRequest::unsetenterpriseProject()
{
    enterpriseProjectIsSet_ = false;
}

std::string ListWorkflowRequest::getMode() const
{
    return mode_;
}

void ListWorkflowRequest::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool ListWorkflowRequest::modeIsSet() const
{
    return modeIsSet_;
}

void ListWorkflowRequest::unsetmode()
{
    modeIsSet_ = false;
}

}
}
}
}
}


