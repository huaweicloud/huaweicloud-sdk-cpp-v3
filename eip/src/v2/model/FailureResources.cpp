

#include "huaweicloud/eip/v2/model/FailureResources.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




FailureResources::FailureResources()
{
    id_ = "";
    idIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

FailureResources::~FailureResources() = default;

void FailureResources::validate()
{
}

web::json::value FailureResources::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool FailureResources::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
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
    return ok;
}


std::string FailureResources::getId() const
{
    return id_;
}

void FailureResources::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool FailureResources::idIsSet() const
{
    return idIsSet_;
}

void FailureResources::unsetid()
{
    idIsSet_ = false;
}

std::string FailureResources::getCode() const
{
    return code_;
}

void FailureResources::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool FailureResources::codeIsSet() const
{
    return codeIsSet_;
}

void FailureResources::unsetcode()
{
    codeIsSet_ = false;
}

std::string FailureResources::getMessage() const
{
    return message_;
}

void FailureResources::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool FailureResources::messageIsSet() const
{
    return messageIsSet_;
}

void FailureResources::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


