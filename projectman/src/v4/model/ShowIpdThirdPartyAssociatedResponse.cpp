

#include "huaweicloud/projectman/v4/model/ShowIpdThirdPartyAssociatedResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowIpdThirdPartyAssociatedResponse::ShowIpdThirdPartyAssociatedResponse()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
}

ShowIpdThirdPartyAssociatedResponse::~ShowIpdThirdPartyAssociatedResponse() = default;

void ShowIpdThirdPartyAssociatedResponse::validate()
{
}

web::json::value ShowIpdThirdPartyAssociatedResponse::toJson() const
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
bool ShowIpdThirdPartyAssociatedResponse::fromJson(const web::json::value& val)
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
            ThirdPartyAssociatedResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowIpdThirdPartyAssociatedResponse::getStatus() const
{
    return status_;
}

void ShowIpdThirdPartyAssociatedResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowIpdThirdPartyAssociatedResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowIpdThirdPartyAssociatedResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowIpdThirdPartyAssociatedResponse::getMessage() const
{
    return message_;
}

void ShowIpdThirdPartyAssociatedResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowIpdThirdPartyAssociatedResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowIpdThirdPartyAssociatedResponse::unsetmessage()
{
    messageIsSet_ = false;
}

ThirdPartyAssociatedResult ShowIpdThirdPartyAssociatedResponse::getResult() const
{
    return result_;
}

void ShowIpdThirdPartyAssociatedResponse::setResult(const ThirdPartyAssociatedResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowIpdThirdPartyAssociatedResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowIpdThirdPartyAssociatedResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


