

#include "huaweicloud/gaussdb/v3/model/MysqlResetPasswordRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlResetPasswordRequest::MysqlResetPasswordRequest()
{
    password_ = "";
    passwordIsSet_ = false;
}

MysqlResetPasswordRequest::~MysqlResetPasswordRequest() = default;

void MysqlResetPasswordRequest::validate()
{
}

web::json::value MysqlResetPasswordRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }

    return val;
}

bool MysqlResetPasswordRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPassword(refVal);
        }
    }
    return ok;
}

std::string MysqlResetPasswordRequest::getPassword() const
{
    return password_;
}

void MysqlResetPasswordRequest::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool MysqlResetPasswordRequest::passwordIsSet() const
{
    return passwordIsSet_;
}

void MysqlResetPasswordRequest::unsetpassword()
{
    passwordIsSet_ = false;
}

}
}
}
}
}


