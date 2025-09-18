

#include "huaweicloud/projectman/v4/model/ListScrumProjectStatusesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListScrumProjectStatusesResponse::ListScrumProjectStatusesResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    issueStatusesIsSet_ = false;
}

ListScrumProjectStatusesResponse::~ListScrumProjectStatusesResponse() = default;

void ListScrumProjectStatusesResponse::validate()
{
}

web::json::value ListScrumProjectStatusesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(issueStatusesIsSet_) {
        val[utility::conversions::to_string_t("issue_statuses")] = ModelBase::toJson(issueStatuses_);
    }

    return val;
}
bool ListScrumProjectStatusesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_statuses"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_statuses"));
        if(!fieldValue.is_null())
        {
            std::vector<IssueStatus> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueStatuses(refVal);
        }
    }
    return ok;
}


int32_t ListScrumProjectStatusesResponse::getTotal() const
{
    return total_;
}

void ListScrumProjectStatusesResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListScrumProjectStatusesResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListScrumProjectStatusesResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<IssueStatus>& ListScrumProjectStatusesResponse::getIssueStatuses()
{
    return issueStatuses_;
}

void ListScrumProjectStatusesResponse::setIssueStatuses(const std::vector<IssueStatus>& value)
{
    issueStatuses_ = value;
    issueStatusesIsSet_ = true;
}

bool ListScrumProjectStatusesResponse::issueStatusesIsSet() const
{
    return issueStatusesIsSet_;
}

void ListScrumProjectStatusesResponse::unsetissueStatuses()
{
    issueStatusesIsSet_ = false;
}

}
}
}
}
}


