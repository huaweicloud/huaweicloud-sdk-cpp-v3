

#include "huaweicloud/projectman/v4/model/DeleteIpdImageInIssueResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




DeleteIpdImageInIssueResponse::DeleteIpdImageInIssueResponse()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
}

DeleteIpdImageInIssueResponse::~DeleteIpdImageInIssueResponse() = default;

void DeleteIpdImageInIssueResponse::validate()
{
}

web::json::value DeleteIpdImageInIssueResponse::toJson() const
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
bool DeleteIpdImageInIssueResponse::fromJson(const web::json::value& val)
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
            IssueEntity refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string DeleteIpdImageInIssueResponse::getStatus() const
{
    return status_;
}

void DeleteIpdImageInIssueResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteIpdImageInIssueResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteIpdImageInIssueResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string DeleteIpdImageInIssueResponse::getMessage() const
{
    return message_;
}

void DeleteIpdImageInIssueResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool DeleteIpdImageInIssueResponse::messageIsSet() const
{
    return messageIsSet_;
}

void DeleteIpdImageInIssueResponse::unsetmessage()
{
    messageIsSet_ = false;
}

IssueEntity DeleteIpdImageInIssueResponse::getResult() const
{
    return result_;
}

void DeleteIpdImageInIssueResponse::setResult(const IssueEntity& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteIpdImageInIssueResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteIpdImageInIssueResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


