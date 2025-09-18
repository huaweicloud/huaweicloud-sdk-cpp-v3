

#include "huaweicloud/projectman/v4/model/ListIssueAssociatedCommitsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListIssueAssociatedCommitsResponse::ListIssueAssociatedCommitsResponse()
{
    commitsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListIssueAssociatedCommitsResponse::~ListIssueAssociatedCommitsResponse() = default;

void ListIssueAssociatedCommitsResponse::validate()
{
}

web::json::value ListIssueAssociatedCommitsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(commitsIsSet_) {
        val[utility::conversions::to_string_t("commits")] = ModelBase::toJson(commits_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListIssueAssociatedCommitsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("commits"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commits"));
        if(!fieldValue.is_null())
        {
            std::vector<CommitRecordDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommits(refVal);
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


std::vector<CommitRecordDetail>& ListIssueAssociatedCommitsResponse::getCommits()
{
    return commits_;
}

void ListIssueAssociatedCommitsResponse::setCommits(const std::vector<CommitRecordDetail>& value)
{
    commits_ = value;
    commitsIsSet_ = true;
}

bool ListIssueAssociatedCommitsResponse::commitsIsSet() const
{
    return commitsIsSet_;
}

void ListIssueAssociatedCommitsResponse::unsetcommits()
{
    commitsIsSet_ = false;
}

int32_t ListIssueAssociatedCommitsResponse::getTotal() const
{
    return total_;
}

void ListIssueAssociatedCommitsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListIssueAssociatedCommitsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListIssueAssociatedCommitsResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


