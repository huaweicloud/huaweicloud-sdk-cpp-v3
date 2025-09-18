

#include "huaweicloud/projectman/v4/model/ListChildIssuesV4Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListChildIssuesV4Response::ListChildIssuesV4Response()
{
    issuesIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListChildIssuesV4Response::~ListChildIssuesV4Response() = default;

void ListChildIssuesV4Response::validate()
{
}

web::json::value ListChildIssuesV4Response::toJson() const
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
bool ListChildIssuesV4Response::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("issues"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issues"));
        if(!fieldValue.is_null())
        {
            std::vector<IssueResponseV4> refVal;
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


std::vector<IssueResponseV4>& ListChildIssuesV4Response::getIssues()
{
    return issues_;
}

void ListChildIssuesV4Response::setIssues(const std::vector<IssueResponseV4>& value)
{
    issues_ = value;
    issuesIsSet_ = true;
}

bool ListChildIssuesV4Response::issuesIsSet() const
{
    return issuesIsSet_;
}

void ListChildIssuesV4Response::unsetissues()
{
    issuesIsSet_ = false;
}

int32_t ListChildIssuesV4Response::getTotal() const
{
    return total_;
}

void ListChildIssuesV4Response::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListChildIssuesV4Response::totalIsSet() const
{
    return totalIsSet_;
}

void ListChildIssuesV4Response::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


