

#include "huaweicloud/projectman/v4/model/ListIssueCommentsV4Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListIssueCommentsV4Response::ListIssueCommentsV4Response()
{
    total_ = 0;
    totalIsSet_ = false;
    commentsIsSet_ = false;
}

ListIssueCommentsV4Response::~ListIssueCommentsV4Response() = default;

void ListIssueCommentsV4Response::validate()
{
}

web::json::value ListIssueCommentsV4Response::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(commentsIsSet_) {
        val[utility::conversions::to_string_t("comments")] = ModelBase::toJson(comments_);
    }

    return val;
}
bool ListIssueCommentsV4Response::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("comments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comments"));
        if(!fieldValue.is_null())
        {
            std::vector<IssueCommentV4> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComments(refVal);
        }
    }
    return ok;
}


int32_t ListIssueCommentsV4Response::getTotal() const
{
    return total_;
}

void ListIssueCommentsV4Response::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListIssueCommentsV4Response::totalIsSet() const
{
    return totalIsSet_;
}

void ListIssueCommentsV4Response::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<IssueCommentV4>& ListIssueCommentsV4Response::getComments()
{
    return comments_;
}

void ListIssueCommentsV4Response::setComments(const std::vector<IssueCommentV4>& value)
{
    comments_ = value;
    commentsIsSet_ = true;
}

bool ListIssueCommentsV4Response::commentsIsSet() const
{
    return commentsIsSet_;
}

void ListIssueCommentsV4Response::unsetcomments()
{
    commentsIsSet_ = false;
}

}
}
}
}
}


