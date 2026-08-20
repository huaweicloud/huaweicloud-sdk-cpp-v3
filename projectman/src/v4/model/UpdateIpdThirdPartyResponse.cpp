

#include "huaweicloud/projectman/v4/model/UpdateIpdThirdPartyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UpdateIpdThirdPartyResponse::UpdateIpdThirdPartyResponse()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
}

UpdateIpdThirdPartyResponse::~UpdateIpdThirdPartyResponse() = default;

void UpdateIpdThirdPartyResponse::validate()
{
}

web::json::value UpdateIpdThirdPartyResponse::toJson() const
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
bool UpdateIpdThirdPartyResponse::fromJson(const web::json::value& val)
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
            UpdateThirdPartyAssociateResponse_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string UpdateIpdThirdPartyResponse::getStatus() const
{
    return status_;
}

void UpdateIpdThirdPartyResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateIpdThirdPartyResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateIpdThirdPartyResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdateIpdThirdPartyResponse::getMessage() const
{
    return message_;
}

void UpdateIpdThirdPartyResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool UpdateIpdThirdPartyResponse::messageIsSet() const
{
    return messageIsSet_;
}

void UpdateIpdThirdPartyResponse::unsetmessage()
{
    messageIsSet_ = false;
}

UpdateThirdPartyAssociateResponse_result UpdateIpdThirdPartyResponse::getResult() const
{
    return result_;
}

void UpdateIpdThirdPartyResponse::setResult(const UpdateThirdPartyAssociateResponse_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateIpdThirdPartyResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateIpdThirdPartyResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


