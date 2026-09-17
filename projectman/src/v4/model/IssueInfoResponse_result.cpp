

#include "huaweicloud/projectman/v4/model/IssueInfoResponse_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueInfoResponse_result::IssueInfoResponse_result()
{
    issueIsSet_ = false;
}

IssueInfoResponse_result::~IssueInfoResponse_result() = default;

void IssueInfoResponse_result::validate()
{
}

web::json::value IssueInfoResponse_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(issueIsSet_) {
        val[utility::conversions::to_string_t("issue")] = ModelBase::toJson(issue_);
    }

    return val;
}
bool IssueInfoResponse_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("issue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue"));
        if(!fieldValue.is_null())
        {
            IssueDetailResponseV2 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssue(refVal);
        }
    }
    return ok;
}


IssueDetailResponseV2 IssueInfoResponse_result::getIssue() const
{
    return issue_;
}

void IssueInfoResponse_result::setIssue(const IssueDetailResponseV2& value)
{
    issue_ = value;
    issueIsSet_ = true;
}

bool IssueInfoResponse_result::issueIsSet() const
{
    return issueIsSet_;
}

void IssueInfoResponse_result::unsetissue()
{
    issueIsSet_ = false;
}

}
}
}
}
}


