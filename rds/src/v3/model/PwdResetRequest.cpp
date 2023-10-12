

#include "huaweicloud/rds/v3/model/PwdResetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




PwdResetRequest::PwdResetRequest()
{
    dbUserPwd_ = "";
    dbUserPwdIsSet_ = false;
}

PwdResetRequest::~PwdResetRequest() = default;

void PwdResetRequest::validate()
{
}

web::json::value PwdResetRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbUserPwdIsSet_) {
        val[utility::conversions::to_string_t("db_user_pwd")] = ModelBase::toJson(dbUserPwd_);
    }

    return val;
}
bool PwdResetRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_user_pwd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_user_pwd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbUserPwd(refVal);
        }
    }
    return ok;
}


std::string PwdResetRequest::getDbUserPwd() const
{
    return dbUserPwd_;
}

void PwdResetRequest::setDbUserPwd(const std::string& value)
{
    dbUserPwd_ = value;
    dbUserPwdIsSet_ = true;
}

bool PwdResetRequest::dbUserPwdIsSet() const
{
    return dbUserPwdIsSet_;
}

void PwdResetRequest::unsetdbUserPwd()
{
    dbUserPwdIsSet_ = false;
}

}
}
}
}
}


