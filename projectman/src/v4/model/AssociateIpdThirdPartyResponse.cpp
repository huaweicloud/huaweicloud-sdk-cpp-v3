

#include "huaweicloud/projectman/v4/model/AssociateIpdThirdPartyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




AssociateIpdThirdPartyResponse::AssociateIpdThirdPartyResponse()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
}

AssociateIpdThirdPartyResponse::~AssociateIpdThirdPartyResponse() = default;

void AssociateIpdThirdPartyResponse::validate()
{
}

web::json::value AssociateIpdThirdPartyResponse::toJson() const
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
bool AssociateIpdThirdPartyResponse::fromJson(const web::json::value& val)
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
            IssuesAssociationResp_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string AssociateIpdThirdPartyResponse::getStatus() const
{
    return status_;
}

void AssociateIpdThirdPartyResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AssociateIpdThirdPartyResponse::statusIsSet() const
{
    return statusIsSet_;
}

void AssociateIpdThirdPartyResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string AssociateIpdThirdPartyResponse::getMessage() const
{
    return message_;
}

void AssociateIpdThirdPartyResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool AssociateIpdThirdPartyResponse::messageIsSet() const
{
    return messageIsSet_;
}

void AssociateIpdThirdPartyResponse::unsetmessage()
{
    messageIsSet_ = false;
}

IssuesAssociationResp_result AssociateIpdThirdPartyResponse::getResult() const
{
    return result_;
}

void AssociateIpdThirdPartyResponse::setResult(const IssuesAssociationResp_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool AssociateIpdThirdPartyResponse::resultIsSet() const
{
    return resultIsSet_;
}

void AssociateIpdThirdPartyResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


