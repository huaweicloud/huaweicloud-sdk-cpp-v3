

#include "huaweicloud/projectman/v4/model/ListIpdReviewFormsByIssueIdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListIpdReviewFormsByIssueIdResponse::ListIpdReviewFormsByIssueIdResponse()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
}

ListIpdReviewFormsByIssueIdResponse::~ListIpdReviewFormsByIssueIdResponse() = default;

void ListIpdReviewFormsByIssueIdResponse::validate()
{
}

web::json::value ListIpdReviewFormsByIssueIdResponse::toJson() const
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
bool ListIpdReviewFormsByIssueIdResponse::fromJson(const web::json::value& val)
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
            ShowIpdProcessInstancesResponse_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ListIpdReviewFormsByIssueIdResponse::getStatus() const
{
    return status_;
}

void ListIpdReviewFormsByIssueIdResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListIpdReviewFormsByIssueIdResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListIpdReviewFormsByIssueIdResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListIpdReviewFormsByIssueIdResponse::getMessage() const
{
    return message_;
}

void ListIpdReviewFormsByIssueIdResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ListIpdReviewFormsByIssueIdResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ListIpdReviewFormsByIssueIdResponse::unsetmessage()
{
    messageIsSet_ = false;
}

ShowIpdProcessInstancesResponse_result ListIpdReviewFormsByIssueIdResponse::getResult() const
{
    return result_;
}

void ListIpdReviewFormsByIssueIdResponse::setResult(const ShowIpdProcessInstancesResponse_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListIpdReviewFormsByIssueIdResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListIpdReviewFormsByIssueIdResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


