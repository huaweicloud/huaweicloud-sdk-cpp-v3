

#include "huaweicloud/projectman/v4/model/ListIpdProjectIssuesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListIpdProjectIssuesResponse::ListIpdProjectIssuesResponse()
{
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListIpdProjectIssuesResponse::~ListIpdProjectIssuesResponse() = default;

void ListIpdProjectIssuesResponse::validate()
{
}

web::json::value ListIpdProjectIssuesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ListIpdProjectIssuesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            IssueListResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string ListIpdProjectIssuesResponse::getMessage() const
{
    return message_;
}

void ListIpdProjectIssuesResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ListIpdProjectIssuesResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ListIpdProjectIssuesResponse::unsetmessage()
{
    messageIsSet_ = false;
}

IssueListResult ListIpdProjectIssuesResponse::getResult() const
{
    return result_;
}

void ListIpdProjectIssuesResponse::setResult(const IssueListResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListIpdProjectIssuesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListIpdProjectIssuesResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListIpdProjectIssuesResponse::getStatus() const
{
    return status_;
}

void ListIpdProjectIssuesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListIpdProjectIssuesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListIpdProjectIssuesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


