

#include "huaweicloud/functiongraph/v2/model/BatchDeleteWorkflowsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




BatchDeleteWorkflowsRequest::BatchDeleteWorkflowsRequest()
{
    bodyIsSet_ = false;
}

BatchDeleteWorkflowsRequest::~BatchDeleteWorkflowsRequest() = default;

void BatchDeleteWorkflowsRequest::validate()
{
}

web::json::value BatchDeleteWorkflowsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchDeleteWorkflowsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            WorkflowDeleteBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


WorkflowDeleteBody BatchDeleteWorkflowsRequest::getBody() const
{
    return body_;
}

void BatchDeleteWorkflowsRequest::setBody(const WorkflowDeleteBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteWorkflowsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteWorkflowsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


