

#include "huaweicloud/projectman/v4/model/AssociateIpdIssuesResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




AssociateIpdIssuesResp::AssociateIpdIssuesResp()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
}

AssociateIpdIssuesResp::~AssociateIpdIssuesResp() = default;

void AssociateIpdIssuesResp::validate()
{
}

web::json::value AssociateIpdIssuesResp::toJson() const
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
bool AssociateIpdIssuesResp::fromJson(const web::json::value& val)
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
            std::map<std::string, std::vector<AssociateRespDetail>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string AssociateIpdIssuesResp::getStatus() const
{
    return status_;
}

void AssociateIpdIssuesResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AssociateIpdIssuesResp::statusIsSet() const
{
    return statusIsSet_;
}

void AssociateIpdIssuesResp::unsetstatus()
{
    statusIsSet_ = false;
}

std::string AssociateIpdIssuesResp::getMessage() const
{
    return message_;
}

void AssociateIpdIssuesResp::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool AssociateIpdIssuesResp::messageIsSet() const
{
    return messageIsSet_;
}

void AssociateIpdIssuesResp::unsetmessage()
{
    messageIsSet_ = false;
}

std::map<std::string, std::vector<AssociateRespDetail>>& AssociateIpdIssuesResp::getResult()
{
    return result_;
}

void AssociateIpdIssuesResp::setResult(const std::map<std::string, std::vector<AssociateRespDetail>>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool AssociateIpdIssuesResp::resultIsSet() const
{
    return resultIsSet_;
}

void AssociateIpdIssuesResp::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


