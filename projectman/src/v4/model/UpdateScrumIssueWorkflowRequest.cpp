

#include "huaweicloud/projectman/v4/model/UpdateScrumIssueWorkflowRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UpdateScrumIssueWorkflowRequest::UpdateScrumIssueWorkflowRequest()
{
    bodyIsSet_ = false;
}

UpdateScrumIssueWorkflowRequest::~UpdateScrumIssueWorkflowRequest() = default;

void UpdateScrumIssueWorkflowRequest::validate()
{
}

web::json::value UpdateScrumIssueWorkflowRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateScrumIssueWorkflowRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            IssueFlowRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


IssueFlowRequest UpdateScrumIssueWorkflowRequest::getBody() const
{
    return body_;
}

void UpdateScrumIssueWorkflowRequest::setBody(const IssueFlowRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateScrumIssueWorkflowRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateScrumIssueWorkflowRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


