

#include "huaweicloud/rds/v3/model/DeletePostgresqlHbaConfResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeletePostgresqlHbaConfResponse::DeletePostgresqlHbaConfResponse()
{
    code_ = "";
    codeIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

DeletePostgresqlHbaConfResponse::~DeletePostgresqlHbaConfResponse() = default;

void DeletePostgresqlHbaConfResponse::validate()
{
}

web::json::value DeletePostgresqlHbaConfResponse::toJson() const
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
bool DeletePostgresqlHbaConfResponse::fromJson(const web::json::value& val)
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


std::string DeletePostgresqlHbaConfResponse::getCode() const
{
    return code_;
}

void DeletePostgresqlHbaConfResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool DeletePostgresqlHbaConfResponse::codeIsSet() const
{
    return codeIsSet_;
}

void DeletePostgresqlHbaConfResponse::unsetcode()
{
    codeIsSet_ = false;
}

std::string DeletePostgresqlHbaConfResponse::getMessage() const
{
    return message_;
}

void DeletePostgresqlHbaConfResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool DeletePostgresqlHbaConfResponse::messageIsSet() const
{
    return messageIsSet_;
}

void DeletePostgresqlHbaConfResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


