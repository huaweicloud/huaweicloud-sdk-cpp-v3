

#include "huaweicloud/projectman/v4/model/ListIssuesV4Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListIssuesV4Response::ListIssuesV4Response()
{
    issuesIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListIssuesV4Response::~ListIssuesV4Response() = default;

void ListIssuesV4Response::validate()
{
}

web::json::value ListIssuesV4Response::toJson() const
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
bool ListIssuesV4Response::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("issues"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issues"));
        if(!fieldValue.is_null())
        {
            std::vector<ListIssueItemResponse> refVal;
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


std::vector<ListIssueItemResponse>& ListIssuesV4Response::getIssues()
{
    return issues_;
}

void ListIssuesV4Response::setIssues(const std::vector<ListIssueItemResponse>& value)
{
    issues_ = value;
    issuesIsSet_ = true;
}

bool ListIssuesV4Response::issuesIsSet() const
{
    return issuesIsSet_;
}

void ListIssuesV4Response::unsetissues()
{
    issuesIsSet_ = false;
}

int32_t ListIssuesV4Response::getTotal() const
{
    return total_;
}

void ListIssuesV4Response::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListIssuesV4Response::totalIsSet() const
{
    return totalIsSet_;
}

void ListIssuesV4Response::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


