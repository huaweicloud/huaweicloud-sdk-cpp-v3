

#include "huaweicloud/projectman/v4/model/IssueCompletionRateResponseV4.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueCompletionRateResponseV4::IssueCompletionRateResponseV4()
{
    issueStatusIsSet_ = false;
    trackerId_ = 0;
    trackerIdIsSet_ = false;
}

IssueCompletionRateResponseV4::~IssueCompletionRateResponseV4() = default;

void IssueCompletionRateResponseV4::validate()
{
}

web::json::value IssueCompletionRateResponseV4::toJson() const
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
bool IssueCompletionRateResponseV4::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("issue_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_status"));
        if(!fieldValue.is_null())
        {
            IssueStatusResponseV4 refVal;
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


IssueStatusResponseV4 IssueCompletionRateResponseV4::getIssueStatus() const
{
    return issueStatus_;
}

void IssueCompletionRateResponseV4::setIssueStatus(const IssueStatusResponseV4& value)
{
    issueStatus_ = value;
    issueStatusIsSet_ = true;
}

bool IssueCompletionRateResponseV4::issueStatusIsSet() const
{
    return issueStatusIsSet_;
}

void IssueCompletionRateResponseV4::unsetissueStatus()
{
    issueStatusIsSet_ = false;
}

int32_t IssueCompletionRateResponseV4::getTrackerId() const
{
    return trackerId_;
}

void IssueCompletionRateResponseV4::setTrackerId(int32_t value)
{
    trackerId_ = value;
    trackerIdIsSet_ = true;
}

bool IssueCompletionRateResponseV4::trackerIdIsSet() const
{
    return trackerIdIsSet_;
}

void IssueCompletionRateResponseV4::unsettrackerId()
{
    trackerIdIsSet_ = false;
}

}
}
}
}
}


