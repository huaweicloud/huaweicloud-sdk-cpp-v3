

#include "huaweicloud/projectman/v4/model/ListIssuesSfV4Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListIssuesSfV4Response::ListIssuesSfV4Response()
{
    issuesIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListIssuesSfV4Response::~ListIssuesSfV4Response() = default;

void ListIssuesSfV4Response::validate()
{
}

web::json::value ListIssuesSfV4Response::toJson() const
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
bool ListIssuesSfV4Response::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("issues"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issues"));
        if(!fieldValue.is_null())
        {
            std::vector<IssueItemSfV4> refVal;
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


std::vector<IssueItemSfV4>& ListIssuesSfV4Response::getIssues()
{
    return issues_;
}

void ListIssuesSfV4Response::setIssues(const std::vector<IssueItemSfV4>& value)
{
    issues_ = value;
    issuesIsSet_ = true;
}

bool ListIssuesSfV4Response::issuesIsSet() const
{
    return issuesIsSet_;
}

void ListIssuesSfV4Response::unsetissues()
{
    issuesIsSet_ = false;
}

int32_t ListIssuesSfV4Response::getTotal() const
{
    return total_;
}

void ListIssuesSfV4Response::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListIssuesSfV4Response::totalIsSet() const
{
    return totalIsSet_;
}

void ListIssuesSfV4Response::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


