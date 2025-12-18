

#include "huaweicloud/meeting/v1/model/VerifyCodeCheckDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




VerifyCodeCheckDTO::VerifyCodeCheckDTO()
{
    user_ = "";
    userIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
}

VerifyCodeCheckDTO::~VerifyCodeCheckDTO() = default;

void VerifyCodeCheckDTO::validate()
{
}

web::json::value VerifyCodeCheckDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIsSet_) {
        val[utility::conversions::to_string_t("user")] = ModelBase::toJson(user_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }

    return val;
}
bool VerifyCodeCheckDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUser(refVal);
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
    return ok;
}


std::string VerifyCodeCheckDTO::getUser() const
{
    return user_;
}

void VerifyCodeCheckDTO::setUser(const std::string& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool VerifyCodeCheckDTO::userIsSet() const
{
    return userIsSet_;
}

void VerifyCodeCheckDTO::unsetuser()
{
    userIsSet_ = false;
}

std::string VerifyCodeCheckDTO::getCode() const
{
    return code_;
}

void VerifyCodeCheckDTO::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool VerifyCodeCheckDTO::codeIsSet() const
{
    return codeIsSet_;
}

void VerifyCodeCheckDTO::unsetcode()
{
    codeIsSet_ = false;
}

}
}
}
}
}


