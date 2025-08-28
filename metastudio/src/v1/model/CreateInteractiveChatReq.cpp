

#include "huaweicloud/metastudio/v1/model/CreateInteractiveChatReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateInteractiveChatReq::CreateInteractiveChatReq()
{
    roleId_ = "";
    roleIdIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    sessionId_ = "";
    sessionIdIsSet_ = false;
    languageIsSet_ = false;
}

CreateInteractiveChatReq::~CreateInteractiveChatReq() = default;

void CreateInteractiveChatReq::validate()
{
}

web::json::value CreateInteractiveChatReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roleIdIsSet_) {
        val[utility::conversions::to_string_t("role_id")] = ModelBase::toJson(roleId_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(sessionIdIsSet_) {
        val[utility::conversions::to_string_t("session_id")] = ModelBase::toJson(sessionId_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }

    return val;
}
bool CreateInteractiveChatReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("role_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("session_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("session_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            LanguageEnum refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    return ok;
}


std::string CreateInteractiveChatReq::getRoleId() const
{
    return roleId_;
}

void CreateInteractiveChatReq::setRoleId(const std::string& value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool CreateInteractiveChatReq::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void CreateInteractiveChatReq::unsetroleId()
{
    roleIdIsSet_ = false;
}

std::string CreateInteractiveChatReq::getMessage() const
{
    return message_;
}

void CreateInteractiveChatReq::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool CreateInteractiveChatReq::messageIsSet() const
{
    return messageIsSet_;
}

void CreateInteractiveChatReq::unsetmessage()
{
    messageIsSet_ = false;
}

std::string CreateInteractiveChatReq::getSessionId() const
{
    return sessionId_;
}

void CreateInteractiveChatReq::setSessionId(const std::string& value)
{
    sessionId_ = value;
    sessionIdIsSet_ = true;
}

bool CreateInteractiveChatReq::sessionIdIsSet() const
{
    return sessionIdIsSet_;
}

void CreateInteractiveChatReq::unsetsessionId()
{
    sessionIdIsSet_ = false;
}

LanguageEnum CreateInteractiveChatReq::getLanguage() const
{
    return language_;
}

void CreateInteractiveChatReq::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool CreateInteractiveChatReq::languageIsSet() const
{
    return languageIsSet_;
}

void CreateInteractiveChatReq::unsetlanguage()
{
    languageIsSet_ = false;
}

}
}
}
}
}


