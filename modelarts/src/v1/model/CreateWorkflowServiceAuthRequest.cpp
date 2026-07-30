

#include "huaweicloud/modelarts/v1/model/CreateWorkflowServiceAuthRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateWorkflowServiceAuthRequest::CreateWorkflowServiceAuthRequest()
{
    bodyIsSet_ = false;
}

CreateWorkflowServiceAuthRequest::~CreateWorkflowServiceAuthRequest() = default;

void CreateWorkflowServiceAuthRequest::validate()
{
}

web::json::value CreateWorkflowServiceAuthRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateWorkflowServiceAuthRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            WorkflowMainServiceAuthReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


WorkflowMainServiceAuthReq CreateWorkflowServiceAuthRequest::getBody() const
{
    return body_;
}

void CreateWorkflowServiceAuthRequest::setBody(const WorkflowMainServiceAuthReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateWorkflowServiceAuthRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateWorkflowServiceAuthRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


