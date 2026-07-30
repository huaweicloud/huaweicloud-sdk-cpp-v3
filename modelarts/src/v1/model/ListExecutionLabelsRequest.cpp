

#include "huaweicloud/modelarts/v1/model/ListExecutionLabelsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListExecutionLabelsRequest::ListExecutionLabelsRequest()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
}

ListExecutionLabelsRequest::~ListExecutionLabelsRequest() = default;

void ListExecutionLabelsRequest::validate()
{
}

web::json::value ListExecutionLabelsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }

    return val;
}
bool ListExecutionLabelsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("workflow_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflow_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflowId(refVal);
        }
    }
    return ok;
}


std::string ListExecutionLabelsRequest::getWorkflowId() const
{
    return workflowId_;
}

void ListExecutionLabelsRequest::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool ListExecutionLabelsRequest::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void ListExecutionLabelsRequest::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

}
}
}
}
}


