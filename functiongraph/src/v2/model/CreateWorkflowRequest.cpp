

#include "huaweicloud/functiongraph/v2/model/CreateWorkflowRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




CreateWorkflowRequest::CreateWorkflowRequest()
{
    bodyIsSet_ = false;
}

CreateWorkflowRequest::~CreateWorkflowRequest() = default;

void CreateWorkflowRequest::validate()
{
}

web::json::value CreateWorkflowRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateWorkflowRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            WorkflowCreateBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


WorkflowCreateBody CreateWorkflowRequest::getBody() const
{
    return body_;
}

void CreateWorkflowRequest::setBody(const WorkflowCreateBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateWorkflowRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateWorkflowRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


