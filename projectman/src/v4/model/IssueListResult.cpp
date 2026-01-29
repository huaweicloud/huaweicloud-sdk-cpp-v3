

#include "huaweicloud/projectman/v4/model/IssueListResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueListResult::IssueListResult()
{
    issuesIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

IssueListResult::~IssueListResult() = default;

void IssueListResult::validate()
{
}

web::json::value IssueListResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(issuesIsSet_) {
        val[utility::conversions::to_string_t("issues")] = ModelBase::toJson(issues_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool IssueListResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("issues"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issues"));
        if(!fieldValue.is_null())
        {
            std::vector<IssueVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssues(refVal);
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


std::vector<IssueVO>& IssueListResult::getIssues()
{
    return issues_;
}

void IssueListResult::setIssues(const std::vector<IssueVO>& value)
{
    issues_ = value;
    issuesIsSet_ = true;
}

bool IssueListResult::issuesIsSet() const
{
    return issuesIsSet_;
}

void IssueListResult::unsetissues()
{
    issuesIsSet_ = false;
}

int32_t IssueListResult::getTotal() const
{
    return total_;
}

void IssueListResult::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool IssueListResult::totalIsSet() const
{
    return totalIsSet_;
}

void IssueListResult::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


