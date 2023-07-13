

#include "huaweicloud/ecs/v2/model/ServerFault.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ServerFault::ServerFault()
{
    code_ = 0;
    codeIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    details_ = "";
    detailsIsSet_ = false;
}

ServerFault::~ServerFault() = default;

void ServerFault::validate()
{
}

web::json::value ServerFault::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(createdIsSet_) {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(created_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(detailsIsSet_) {
        val[utility::conversions::to_string_t("details")] = ModelBase::toJson(details_);
    }

    return val;
}

bool ServerFault::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreated(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("details"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetails(refVal);
        }
    }
    return ok;
}

int32_t ServerFault::getCode() const
{
    return code_;
}

void ServerFault::setCode(int32_t value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ServerFault::codeIsSet() const
{
    return codeIsSet_;
}

void ServerFault::unsetcode()
{
    codeIsSet_ = false;
}

std::string ServerFault::getCreated() const
{
    return created_;
}

void ServerFault::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool ServerFault::createdIsSet() const
{
    return createdIsSet_;
}

void ServerFault::unsetcreated()
{
    createdIsSet_ = false;
}

std::string ServerFault::getMessage() const
{
    return message_;
}

void ServerFault::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ServerFault::messageIsSet() const
{
    return messageIsSet_;
}

void ServerFault::unsetmessage()
{
    messageIsSet_ = false;
}

std::string ServerFault::getDetails() const
{
    return details_;
}

void ServerFault::setDetails(const std::string& value)
{
    details_ = value;
    detailsIsSet_ = true;
}

bool ServerFault::detailsIsSet() const
{
    return detailsIsSet_;
}

void ServerFault::unsetdetails()
{
    detailsIsSet_ = false;
}

}
}
}
}
}


