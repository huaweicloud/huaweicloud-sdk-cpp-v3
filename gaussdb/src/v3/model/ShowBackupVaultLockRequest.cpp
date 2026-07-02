

#include "huaweicloud/gaussdb/v3/model/ShowBackupVaultLockRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowBackupVaultLockRequest::ShowBackupVaultLockRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowBackupVaultLockRequest::~ShowBackupVaultLockRequest() = default;

void ShowBackupVaultLockRequest::validate()
{
}

web::json::value ShowBackupVaultLockRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ShowBackupVaultLockRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    return ok;
}


std::string ShowBackupVaultLockRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowBackupVaultLockRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowBackupVaultLockRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowBackupVaultLockRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowBackupVaultLockRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowBackupVaultLockRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowBackupVaultLockRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowBackupVaultLockRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


