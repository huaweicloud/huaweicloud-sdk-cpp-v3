

#include "huaweicloud/projectman/v4/model/BatchListAssociatedIssuesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchListAssociatedIssuesResponse::BatchListAssociatedIssuesResponse()
{
    issuesIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

BatchListAssociatedIssuesResponse::~BatchListAssociatedIssuesResponse() = default;

void BatchListAssociatedIssuesResponse::validate()
{
}

web::json::value BatchListAssociatedIssuesResponse::toJson() const
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
bool BatchListAssociatedIssuesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("issues"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issues"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchAssociatedIssue> refVal;
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


std::vector<BatchAssociatedIssue>& BatchListAssociatedIssuesResponse::getIssues()
{
    return issues_;
}

void BatchListAssociatedIssuesResponse::setIssues(const std::vector<BatchAssociatedIssue>& value)
{
    issues_ = value;
    issuesIsSet_ = true;
}

bool BatchListAssociatedIssuesResponse::issuesIsSet() const
{
    return issuesIsSet_;
}

void BatchListAssociatedIssuesResponse::unsetissues()
{
    issuesIsSet_ = false;
}

int32_t BatchListAssociatedIssuesResponse::getTotal() const
{
    return total_;
}

void BatchListAssociatedIssuesResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool BatchListAssociatedIssuesResponse::totalIsSet() const
{
    return totalIsSet_;
}

void BatchListAssociatedIssuesResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


