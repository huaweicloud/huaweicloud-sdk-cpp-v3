

#include "huaweicloud/functiongraph/v2/model/ListWorkflowResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListWorkflowResponse::ListWorkflowResponse()
{
    total_ = 0L;
    totalIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    workflowsIsSet_ = false;
}

ListWorkflowResponse::~ListWorkflowResponse() = default;

void ListWorkflowResponse::validate()
{
}

web::json::value ListWorkflowResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(workflowsIsSet_) {
        val[utility::conversions::to_string_t("workflows")] = ModelBase::toJson(workflows_);
    }

    return val;
}
bool ListWorkflowResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workflows"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflows"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkflowSimpleInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflows(refVal);
        }
    }
    return ok;
}


int64_t ListWorkflowResponse::getTotal() const
{
    return total_;
}

void ListWorkflowResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListWorkflowResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListWorkflowResponse::unsettotal()
{
    totalIsSet_ = false;
}

int32_t ListWorkflowResponse::getSize() const
{
    return size_;
}

void ListWorkflowResponse::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListWorkflowResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListWorkflowResponse::unsetsize()
{
    sizeIsSet_ = false;
}

std::vector<WorkflowSimpleInfo>& ListWorkflowResponse::getWorkflows()
{
    return workflows_;
}

void ListWorkflowResponse::setWorkflows(const std::vector<WorkflowSimpleInfo>& value)
{
    workflows_ = value;
    workflowsIsSet_ = true;
}

bool ListWorkflowResponse::workflowsIsSet() const
{
    return workflowsIsSet_;
}

void ListWorkflowResponse::unsetworkflows()
{
    workflowsIsSet_ = false;
}

}
}
}
}
}


