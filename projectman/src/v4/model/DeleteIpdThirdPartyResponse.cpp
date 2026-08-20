

#include "huaweicloud/projectman/v4/model/DeleteIpdThirdPartyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




DeleteIpdThirdPartyResponse::DeleteIpdThirdPartyResponse()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
}

DeleteIpdThirdPartyResponse::~DeleteIpdThirdPartyResponse() = default;

void DeleteIpdThirdPartyResponse::validate()
{
}

web::json::value DeleteIpdThirdPartyResponse::toJson() const
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
bool DeleteIpdThirdPartyResponse::fromJson(const web::json::value& val)
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
            DeleteThirdPartyAssociateResponse_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string DeleteIpdThirdPartyResponse::getStatus() const
{
    return status_;
}

void DeleteIpdThirdPartyResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteIpdThirdPartyResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteIpdThirdPartyResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string DeleteIpdThirdPartyResponse::getMessage() const
{
    return message_;
}

void DeleteIpdThirdPartyResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool DeleteIpdThirdPartyResponse::messageIsSet() const
{
    return messageIsSet_;
}

void DeleteIpdThirdPartyResponse::unsetmessage()
{
    messageIsSet_ = false;
}

DeleteThirdPartyAssociateResponse_result DeleteIpdThirdPartyResponse::getResult() const
{
    return result_;
}

void DeleteIpdThirdPartyResponse::setResult(const DeleteThirdPartyAssociateResponse_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteIpdThirdPartyResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteIpdThirdPartyResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


