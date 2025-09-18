

#include "huaweicloud/projectman/v4/model/CreateIpdProjectIssueAttachmentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateIpdProjectIssueAttachmentResponse::CreateIpdProjectIssueAttachmentResponse()
{
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

CreateIpdProjectIssueAttachmentResponse::~CreateIpdProjectIssueAttachmentResponse() = default;

void CreateIpdProjectIssueAttachmentResponse::validate()
{
}

web::json::value CreateIpdProjectIssueAttachmentResponse::toJson() const
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
bool CreateIpdProjectIssueAttachmentResponse::fromJson(const web::json::value& val)
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
            std::vector<AttachmentVO> refVal;
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


std::string CreateIpdProjectIssueAttachmentResponse::getMessage() const
{
    return message_;
}

void CreateIpdProjectIssueAttachmentResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool CreateIpdProjectIssueAttachmentResponse::messageIsSet() const
{
    return messageIsSet_;
}

void CreateIpdProjectIssueAttachmentResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::vector<AttachmentVO>& CreateIpdProjectIssueAttachmentResponse::getResult()
{
    return result_;
}

void CreateIpdProjectIssueAttachmentResponse::setResult(const std::vector<AttachmentVO>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateIpdProjectIssueAttachmentResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateIpdProjectIssueAttachmentResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string CreateIpdProjectIssueAttachmentResponse::getStatus() const
{
    return status_;
}

void CreateIpdProjectIssueAttachmentResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateIpdProjectIssueAttachmentResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateIpdProjectIssueAttachmentResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


