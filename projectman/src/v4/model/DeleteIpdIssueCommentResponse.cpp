

#include "huaweicloud/projectman/v4/model/DeleteIpdIssueCommentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




DeleteIpdIssueCommentResponse::DeleteIpdIssueCommentResponse()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
}

DeleteIpdIssueCommentResponse::~DeleteIpdIssueCommentResponse() = default;

void DeleteIpdIssueCommentResponse::validate()
{
}

web::json::value DeleteIpdIssueCommentResponse::toJson() const
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
bool DeleteIpdIssueCommentResponse::fromJson(const web::json::value& val)
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


std::string DeleteIpdIssueCommentResponse::getStatus() const
{
    return status_;
}

void DeleteIpdIssueCommentResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteIpdIssueCommentResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteIpdIssueCommentResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string DeleteIpdIssueCommentResponse::getMessage() const
{
    return message_;
}

void DeleteIpdIssueCommentResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool DeleteIpdIssueCommentResponse::messageIsSet() const
{
    return messageIsSet_;
}

void DeleteIpdIssueCommentResponse::unsetmessage()
{
    messageIsSet_ = false;
}

CommentEntity DeleteIpdIssueCommentResponse::getResult() const
{
    return result_;
}

void DeleteIpdIssueCommentResponse::setResult(const CommentEntity& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteIpdIssueCommentResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteIpdIssueCommentResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


