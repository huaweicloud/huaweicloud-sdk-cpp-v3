

#include "huaweicloud/projectman/v4/model/CreateIpdProjectIssueResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateIpdProjectIssueResponse::CreateIpdProjectIssueResponse()
{
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

CreateIpdProjectIssueResponse::~CreateIpdProjectIssueResponse() = default;

void CreateIpdProjectIssueResponse::validate()
{
}

web::json::value CreateIpdProjectIssueResponse::toJson() const
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
bool CreateIpdProjectIssueResponse::fromJson(const web::json::value& val)
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
            std::vector<Object> refVal;
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


std::string CreateIpdProjectIssueResponse::getMessage() const
{
    return message_;
}

void CreateIpdProjectIssueResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool CreateIpdProjectIssueResponse::messageIsSet() const
{
    return messageIsSet_;
}

void CreateIpdProjectIssueResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::vector<Object>& CreateIpdProjectIssueResponse::getResult()
{
    return result_;
}

void CreateIpdProjectIssueResponse::setResult(const std::vector<Object>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateIpdProjectIssueResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateIpdProjectIssueResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string CreateIpdProjectIssueResponse::getStatus() const
{
    return status_;
}

void CreateIpdProjectIssueResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateIpdProjectIssueResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateIpdProjectIssueResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


