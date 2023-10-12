

#include "huaweicloud/rds/v3/model/AddPostgresqlHbaConfResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




AddPostgresqlHbaConfResponse::AddPostgresqlHbaConfResponse()
{
    code_ = "";
    codeIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

AddPostgresqlHbaConfResponse::~AddPostgresqlHbaConfResponse() = default;

void AddPostgresqlHbaConfResponse::validate()
{
}

web::json::value AddPostgresqlHbaConfResponse::toJson() const
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
bool AddPostgresqlHbaConfResponse::fromJson(const web::json::value& val)
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


std::string AddPostgresqlHbaConfResponse::getCode() const
{
    return code_;
}

void AddPostgresqlHbaConfResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool AddPostgresqlHbaConfResponse::codeIsSet() const
{
    return codeIsSet_;
}

void AddPostgresqlHbaConfResponse::unsetcode()
{
    codeIsSet_ = false;
}

std::string AddPostgresqlHbaConfResponse::getMessage() const
{
    return message_;
}

void AddPostgresqlHbaConfResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool AddPostgresqlHbaConfResponse::messageIsSet() const
{
    return messageIsSet_;
}

void AddPostgresqlHbaConfResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


