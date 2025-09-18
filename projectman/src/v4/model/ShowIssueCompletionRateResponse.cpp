

#include "huaweicloud/projectman/v4/model/ShowIssueCompletionRateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowIssueCompletionRateResponse::ShowIssueCompletionRateResponse()
{
    issueCompletionRatesIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ShowIssueCompletionRateResponse::~ShowIssueCompletionRateResponse() = default;

void ShowIssueCompletionRateResponse::validate()
{
}

web::json::value ShowIssueCompletionRateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(issueCompletionRatesIsSet_) {
        val[utility::conversions::to_string_t("issue_completion_rates")] = ModelBase::toJson(issueCompletionRates_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ShowIssueCompletionRateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("issue_completion_rates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_completion_rates"));
        if(!fieldValue.is_null())
        {
            std::vector<IssueCompletionRateV4_issue_completion_rates> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueCompletionRates(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<IssueCompletionRateV4_issue_completion_rates>& ShowIssueCompletionRateResponse::getIssueCompletionRates()
{
    return issueCompletionRates_;
}

void ShowIssueCompletionRateResponse::setIssueCompletionRates(const std::vector<IssueCompletionRateV4_issue_completion_rates>& value)
{
    issueCompletionRates_ = value;
    issueCompletionRatesIsSet_ = true;
}

bool ShowIssueCompletionRateResponse::issueCompletionRatesIsSet() const
{
    return issueCompletionRatesIsSet_;
}

void ShowIssueCompletionRateResponse::unsetissueCompletionRates()
{
    issueCompletionRatesIsSet_ = false;
}

int32_t ShowIssueCompletionRateResponse::getTotal() const
{
    return total_;
}

void ShowIssueCompletionRateResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowIssueCompletionRateResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowIssueCompletionRateResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


