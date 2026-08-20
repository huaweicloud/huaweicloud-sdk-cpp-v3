

#include "huaweicloud/projectman/v4/model/QueryIssueAssociatedItemResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




QueryIssueAssociatedItemResponse::QueryIssueAssociatedItemResponse()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
}

QueryIssueAssociatedItemResponse::~QueryIssueAssociatedItemResponse() = default;

void QueryIssueAssociatedItemResponse::validate()
{
}

web::json::value QueryIssueAssociatedItemResponse::toJson() const
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
bool QueryIssueAssociatedItemResponse::fromJson(const web::json::value& val)
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
            IssueListResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string QueryIssueAssociatedItemResponse::getStatus() const
{
    return status_;
}

void QueryIssueAssociatedItemResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool QueryIssueAssociatedItemResponse::statusIsSet() const
{
    return statusIsSet_;
}

void QueryIssueAssociatedItemResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string QueryIssueAssociatedItemResponse::getMessage() const
{
    return message_;
}

void QueryIssueAssociatedItemResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool QueryIssueAssociatedItemResponse::messageIsSet() const
{
    return messageIsSet_;
}

void QueryIssueAssociatedItemResponse::unsetmessage()
{
    messageIsSet_ = false;
}

IssueListResult QueryIssueAssociatedItemResponse::getResult() const
{
    return result_;
}

void QueryIssueAssociatedItemResponse::setResult(const IssueListResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool QueryIssueAssociatedItemResponse::resultIsSet() const
{
    return resultIsSet_;
}

void QueryIssueAssociatedItemResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


