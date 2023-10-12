

#include "huaweicloud/rds/v3/model/ModifyPostgresqlHbaConfResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ModifyPostgresqlHbaConfResponse::ModifyPostgresqlHbaConfResponse()
{
    code_ = "";
    codeIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

ModifyPostgresqlHbaConfResponse::~ModifyPostgresqlHbaConfResponse() = default;

void ModifyPostgresqlHbaConfResponse::validate()
{
}

web::json::value ModifyPostgresqlHbaConfResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool ModifyPostgresqlHbaConfResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string ModifyPostgresqlHbaConfResponse::getCode() const
{
    return code_;
}

void ModifyPostgresqlHbaConfResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ModifyPostgresqlHbaConfResponse::codeIsSet() const
{
    return codeIsSet_;
}

void ModifyPostgresqlHbaConfResponse::unsetcode()
{
    codeIsSet_ = false;
}

std::string ModifyPostgresqlHbaConfResponse::getMessage() const
{
    return message_;
}

void ModifyPostgresqlHbaConfResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ModifyPostgresqlHbaConfResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ModifyPostgresqlHbaConfResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


