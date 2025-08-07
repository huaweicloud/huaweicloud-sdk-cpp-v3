

#include "huaweicloud/organizations/v1/model/CreateAccountStatusDto_failure_detail_msg.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




CreateAccountStatusDto_failure_detail_msg::CreateAccountStatusDto_failure_detail_msg()
{
    errorMsg_ = "";
    errorMsgIsSet_ = false;
    encodedAuthorizationMessage_ = "";
    encodedAuthorizationMessageIsSet_ = false;
}

CreateAccountStatusDto_failure_detail_msg::~CreateAccountStatusDto_failure_detail_msg() = default;

void CreateAccountStatusDto_failure_detail_msg::validate()
{
}

web::json::value CreateAccountStatusDto_failure_detail_msg::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }
    if(encodedAuthorizationMessageIsSet_) {
        val[utility::conversions::to_string_t("encoded_authorization_message")] = ModelBase::toJson(encodedAuthorizationMessage_);
    }

    return val;
}
bool CreateAccountStatusDto_failure_detail_msg::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("encoded_authorization_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encoded_authorization_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncodedAuthorizationMessage(refVal);
        }
    }
    return ok;
}


std::string CreateAccountStatusDto_failure_detail_msg::getErrorMsg() const
{
    return errorMsg_;
}

void CreateAccountStatusDto_failure_detail_msg::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool CreateAccountStatusDto_failure_detail_msg::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void CreateAccountStatusDto_failure_detail_msg::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

std::string CreateAccountStatusDto_failure_detail_msg::getEncodedAuthorizationMessage() const
{
    return encodedAuthorizationMessage_;
}

void CreateAccountStatusDto_failure_detail_msg::setEncodedAuthorizationMessage(const std::string& value)
{
    encodedAuthorizationMessage_ = value;
    encodedAuthorizationMessageIsSet_ = true;
}

bool CreateAccountStatusDto_failure_detail_msg::encodedAuthorizationMessageIsSet() const
{
    return encodedAuthorizationMessageIsSet_;
}

void CreateAccountStatusDto_failure_detail_msg::unsetencodedAuthorizationMessage()
{
    encodedAuthorizationMessageIsSet_ = false;
}

}
}
}
}
}


