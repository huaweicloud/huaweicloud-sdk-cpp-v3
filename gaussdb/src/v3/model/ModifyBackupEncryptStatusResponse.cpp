

#include "huaweicloud/gaussdb/v3/model/ModifyBackupEncryptStatusResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ModifyBackupEncryptStatusResponse::ModifyBackupEncryptStatusResponse()
{
    encryptionStatus_ = "";
    encryptionStatusIsSet_ = false;
}

ModifyBackupEncryptStatusResponse::~ModifyBackupEncryptStatusResponse() = default;

void ModifyBackupEncryptStatusResponse::validate()
{
}

web::json::value ModifyBackupEncryptStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(encryptionStatusIsSet_) {
        val[utility::conversions::to_string_t("encryption_status")] = ModelBase::toJson(encryptionStatus_);
    }

    return val;
}

bool ModifyBackupEncryptStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("encryption_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encryption_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncryptionStatus(refVal);
        }
    }
    return ok;
}

std::string ModifyBackupEncryptStatusResponse::getEncryptionStatus() const
{
    return encryptionStatus_;
}

void ModifyBackupEncryptStatusResponse::setEncryptionStatus(const std::string& value)
{
    encryptionStatus_ = value;
    encryptionStatusIsSet_ = true;
}

bool ModifyBackupEncryptStatusResponse::encryptionStatusIsSet() const
{
    return encryptionStatusIsSet_;
}

void ModifyBackupEncryptStatusResponse::unsetencryptionStatus()
{
    encryptionStatusIsSet_ = false;
}

}
}
}
}
}


