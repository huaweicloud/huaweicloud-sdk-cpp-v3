

#include "huaweicloud/projectman/v4/model/CreateIpdIssueCommentsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateIpdIssueCommentsResponse::CreateIpdIssueCommentsResponse()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
}

CreateIpdIssueCommentsResponse::~CreateIpdIssueCommentsResponse() = default;

void CreateIpdIssueCommentsResponse::validate()
{
}

web::json::value CreateIpdIssueCommentsResponse::toJson() const
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
bool CreateIpdIssueCommentsResponse::fromJson(const web::json::value& val)
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


std::string CreateIpdIssueCommentsResponse::getStatus() const
{
    return status_;
}

void CreateIpdIssueCommentsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateIpdIssueCommentsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateIpdIssueCommentsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateIpdIssueCommentsResponse::getMessage() const
{
    return message_;
}

void CreateIpdIssueCommentsResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool CreateIpdIssueCommentsResponse::messageIsSet() const
{
    return messageIsSet_;
}

void CreateIpdIssueCommentsResponse::unsetmessage()
{
    messageIsSet_ = false;
}

CommentEntity CreateIpdIssueCommentsResponse::getResult() const
{
    return result_;
}

void CreateIpdIssueCommentsResponse::setResult(const CommentEntity& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateIpdIssueCommentsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateIpdIssueCommentsResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


