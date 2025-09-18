

#include "huaweicloud/projectman/v4/model/SearchIssuesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




SearchIssuesResponse::SearchIssuesResponse()
{
    issueListIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

SearchIssuesResponse::~SearchIssuesResponse() = default;

void SearchIssuesResponse::validate()
{
}

web::json::value SearchIssuesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(issueListIsSet_) {
        val[utility::conversions::to_string_t("issue_list")] = ModelBase::toJson(issueList_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool SearchIssuesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("issue_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_list"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkTableIssuseListResponseBody_issue_list> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueList(refVal);
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


std::vector<WorkTableIssuseListResponseBody_issue_list>& SearchIssuesResponse::getIssueList()
{
    return issueList_;
}

void SearchIssuesResponse::setIssueList(const std::vector<WorkTableIssuseListResponseBody_issue_list>& value)
{
    issueList_ = value;
    issueListIsSet_ = true;
}

bool SearchIssuesResponse::issueListIsSet() const
{
    return issueListIsSet_;
}

void SearchIssuesResponse::unsetissueList()
{
    issueListIsSet_ = false;
}

int32_t SearchIssuesResponse::getTotal() const
{
    return total_;
}

void SearchIssuesResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool SearchIssuesResponse::totalIsSet() const
{
    return totalIsSet_;
}

void SearchIssuesResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


