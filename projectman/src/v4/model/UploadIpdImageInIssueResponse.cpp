

#include "huaweicloud/projectman/v4/model/UploadIpdImageInIssueResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UploadIpdImageInIssueResponse::UploadIpdImageInIssueResponse()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
}

UploadIpdImageInIssueResponse::~UploadIpdImageInIssueResponse() = default;

void UploadIpdImageInIssueResponse::validate()
{
}

web::json::value UploadIpdImageInIssueResponse::toJson() const
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
bool UploadIpdImageInIssueResponse::fromJson(const web::json::value& val)
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


std::string UploadIpdImageInIssueResponse::getStatus() const
{
    return status_;
}

void UploadIpdImageInIssueResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UploadIpdImageInIssueResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UploadIpdImageInIssueResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UploadIpdImageInIssueResponse::getMessage() const
{
    return message_;
}

void UploadIpdImageInIssueResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool UploadIpdImageInIssueResponse::messageIsSet() const
{
    return messageIsSet_;
}

void UploadIpdImageInIssueResponse::unsetmessage()
{
    messageIsSet_ = false;
}

IssueEntity UploadIpdImageInIssueResponse::getResult() const
{
    return result_;
}

void UploadIpdImageInIssueResponse::setResult(const IssueEntity& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UploadIpdImageInIssueResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UploadIpdImageInIssueResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


