

#include "huaweicloud/projectman/v4/model/IssueCompletionRateV4_issue_completion_rates.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueCompletionRateV4_issue_completion_rates::IssueCompletionRateV4_issue_completion_rates()
{
    issueStatusIsSet_ = false;
    trackerId_ = 0;
    trackerIdIsSet_ = false;
}

IssueCompletionRateV4_issue_completion_rates::~IssueCompletionRateV4_issue_completion_rates() = default;

void IssueCompletionRateV4_issue_completion_rates::validate()
{
}

web::json::value IssueCompletionRateV4_issue_completion_rates::toJson() const
{
    web::json::value val = web::json::value::object();

    if(issueStatusIsSet_) {
        val[utility::conversions::to_string_t("issue_status")] = ModelBase::toJson(issueStatus_);
    }
    if(trackerIdIsSet_) {
        val[utility::conversions::to_string_t("tracker_id")] = ModelBase::toJson(trackerId_);
    }

    return val;
}
bool IssueCompletionRateV4_issue_completion_rates::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("issue_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_status"));
        if(!fieldValue.is_null())
        {
            IssueCompletionRateV4_issue_status refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tracker_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracker_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrackerId(refVal);
        }
    }
    return ok;
}


IssueCompletionRateV4_issue_status IssueCompletionRateV4_issue_completion_rates::getIssueStatus() const
{
    return issueStatus_;
}

void IssueCompletionRateV4_issue_completion_rates::setIssueStatus(const IssueCompletionRateV4_issue_status& value)
{
    issueStatus_ = value;
    issueStatusIsSet_ = true;
}

bool IssueCompletionRateV4_issue_completion_rates::issueStatusIsSet() const
{
    return issueStatusIsSet_;
}

void IssueCompletionRateV4_issue_completion_rates::unsetissueStatus()
{
    issueStatusIsSet_ = false;
}

int32_t IssueCompletionRateV4_issue_completion_rates::getTrackerId() const
{
    return trackerId_;
}

void IssueCompletionRateV4_issue_completion_rates::setTrackerId(int32_t value)
{
    trackerId_ = value;
    trackerIdIsSet_ = true;
}

bool IssueCompletionRateV4_issue_completion_rates::trackerIdIsSet() const
{
    return trackerIdIsSet_;
}

void IssueCompletionRateV4_issue_completion_rates::unsettrackerId()
{
    trackerIdIsSet_ = false;
}

}
}
}
}
}


