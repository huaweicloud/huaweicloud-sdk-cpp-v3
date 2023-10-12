

#include "huaweicloud/gaussdbfornosql/v3/model/RestoreRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




RestoreRequestBody::RestoreRequestBody()
{
    backupId_ = "";
    backupIdIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
}

RestoreRequestBody::~RestoreRequestBody() = default;

void RestoreRequestBody::validate()
{
}

web::json::value RestoreRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }

    return val;
}
bool RestoreRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupId(refVal);
        }
    }
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


std::string RestoreRequestBody::getBackupId() const
{
    return backupId_;
}

void RestoreRequestBody::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool RestoreRequestBody::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void RestoreRequestBody::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string RestoreRequestBody::getPassword() const
{
    return password_;
}

void RestoreRequestBody::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool RestoreRequestBody::passwordIsSet() const
{
    return passwordIsSet_;
}

void RestoreRequestBody::unsetpassword()
{
    passwordIsSet_ = false;
}

}
}
}
}
}


