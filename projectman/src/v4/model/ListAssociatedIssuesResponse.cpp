

#include "huaweicloud/projectman/v4/model/ListAssociatedIssuesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListAssociatedIssuesResponse::ListAssociatedIssuesResponse()
{
    issuesIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListAssociatedIssuesResponse::~ListAssociatedIssuesResponse() = default;

void ListAssociatedIssuesResponse::validate()
{
}

web::json::value ListAssociatedIssuesResponse::toJson() const
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
bool ListAssociatedIssuesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("issues"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issues"));
        if(!fieldValue.is_null())
        {
            std::vector<AssociateIssueDetail> refVal;
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


std::vector<AssociateIssueDetail>& ListAssociatedIssuesResponse::getIssues()
{
    return issues_;
}

void ListAssociatedIssuesResponse::setIssues(const std::vector<AssociateIssueDetail>& value)
{
    issues_ = value;
    issuesIsSet_ = true;
}

bool ListAssociatedIssuesResponse::issuesIsSet() const
{
    return issuesIsSet_;
}

void ListAssociatedIssuesResponse::unsetissues()
{
    issuesIsSet_ = false;
}

int32_t ListAssociatedIssuesResponse::getTotal() const
{
    return total_;
}

void ListAssociatedIssuesResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListAssociatedIssuesResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListAssociatedIssuesResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


