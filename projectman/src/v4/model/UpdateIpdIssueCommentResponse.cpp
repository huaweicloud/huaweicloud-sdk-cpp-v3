

#include "huaweicloud/projectman/v4/model/UpdateIpdIssueCommentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UpdateIpdIssueCommentResponse::UpdateIpdIssueCommentResponse()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
}

UpdateIpdIssueCommentResponse::~UpdateIpdIssueCommentResponse() = default;

void UpdateIpdIssueCommentResponse::validate()
{
}

web::json::value UpdateIpdIssueCommentResponse::toJson() const
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
bool UpdateIpdIssueCommentResponse::fromJson(const web::json::value& val)
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
            CommentEntity refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string UpdateIpdIssueCommentResponse::getStatus() const
{
    return status_;
}

void UpdateIpdIssueCommentResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateIpdIssueCommentResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateIpdIssueCommentResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdateIpdIssueCommentResponse::getMessage() const
{
    return message_;
}

void UpdateIpdIssueCommentResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool UpdateIpdIssueCommentResponse::messageIsSet() const
{
    return messageIsSet_;
}

void UpdateIpdIssueCommentResponse::unsetmessage()
{
    messageIsSet_ = false;
}

CommentEntity UpdateIpdIssueCommentResponse::getResult() const
{
    return result_;
}

void UpdateIpdIssueCommentResponse::setResult(const CommentEntity& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateIpdIssueCommentResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateIpdIssueCommentResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


