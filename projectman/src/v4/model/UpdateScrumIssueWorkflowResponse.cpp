

#include "huaweicloud/projectman/v4/model/UpdateScrumIssueWorkflowResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UpdateScrumIssueWorkflowResponse::UpdateScrumIssueWorkflowResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

UpdateScrumIssueWorkflowResponse::~UpdateScrumIssueWorkflowResponse() = default;

void UpdateScrumIssueWorkflowResponse::validate()
{
}

web::json::value UpdateScrumIssueWorkflowResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool UpdateScrumIssueWorkflowResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            UpdateIssueFlowsResponse_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


UpdateIssueFlowsResponse_result UpdateScrumIssueWorkflowResponse::getResult() const
{
    return result_;
}

void UpdateScrumIssueWorkflowResponse::setResult(const UpdateIssueFlowsResponse_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateScrumIssueWorkflowResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateScrumIssueWorkflowResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string UpdateScrumIssueWorkflowResponse::getStatus() const
{
    return status_;
}

void UpdateScrumIssueWorkflowResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateScrumIssueWorkflowResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateScrumIssueWorkflowResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


