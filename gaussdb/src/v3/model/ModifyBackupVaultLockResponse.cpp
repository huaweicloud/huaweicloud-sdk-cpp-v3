

#include "huaweicloud/gaussdb/v3/model/ModifyBackupVaultLockResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ModifyBackupVaultLockResponse::ModifyBackupVaultLockResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

ModifyBackupVaultLockResponse::~ModifyBackupVaultLockResponse() = default;

void ModifyBackupVaultLockResponse::validate()
{
}

web::json::value ModifyBackupVaultLockResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ModifyBackupVaultLockResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ModifyBackupVaultLockResponse::getResult() const
{
    return result_;
}

void ModifyBackupVaultLockResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ModifyBackupVaultLockResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ModifyBackupVaultLockResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


