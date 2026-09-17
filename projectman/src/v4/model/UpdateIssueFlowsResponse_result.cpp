

#include "huaweicloud/projectman/v4/model/UpdateIssueFlowsResponse_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UpdateIssueFlowsResponse_result::UpdateIssueFlowsResponse_result()
{
    issueIsSet_ = false;
}

UpdateIssueFlowsResponse_result::~UpdateIssueFlowsResponse_result() = default;

void UpdateIssueFlowsResponse_result::validate()
{
}

web::json::value UpdateIssueFlowsResponse_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(issueIsSet_) {
        val[utility::conversions::to_string_t("issue")] = ModelBase::toJson(issue_);
    }

    return val;
}
bool UpdateIssueFlowsResponse_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("issue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue"));
        if(!fieldValue.is_null())
        {
            IssueNew refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssue(refVal);
        }
    }
    return ok;
}


IssueNew UpdateIssueFlowsResponse_result::getIssue() const
{
    return issue_;
}

void UpdateIssueFlowsResponse_result::setIssue(const IssueNew& value)
{
    issue_ = value;
    issueIsSet_ = true;
}

bool UpdateIssueFlowsResponse_result::issueIsSet() const
{
    return issueIsSet_;
}

void UpdateIssueFlowsResponse_result::unsetissue()
{
    issueIsSet_ = false;
}

}
}
}
}
}


