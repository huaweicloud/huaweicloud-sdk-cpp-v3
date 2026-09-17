

#include "huaweicloud/projectman/v4/model/ListIpdIssueCommentsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListIpdIssueCommentsResponse::ListIpdIssueCommentsResponse()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
}

ListIpdIssueCommentsResponse::~ListIpdIssueCommentsResponse() = default;

void ListIpdIssueCommentsResponse::validate()
{
}

web::json::value ListIpdIssueCommentsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ListIpdIssueCommentsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            CommentResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ListIpdIssueCommentsResponse::getStatus() const
{
    return status_;
}

void ListIpdIssueCommentsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListIpdIssueCommentsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListIpdIssueCommentsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListIpdIssueCommentsResponse::getMessage() const
{
    return message_;
}

void ListIpdIssueCommentsResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ListIpdIssueCommentsResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ListIpdIssueCommentsResponse::unsetmessage()
{
    messageIsSet_ = false;
}

CommentResult ListIpdIssueCommentsResponse::getResult() const
{
    return result_;
}

void ListIpdIssueCommentsResponse::setResult(const CommentResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListIpdIssueCommentsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListIpdIssueCommentsResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


