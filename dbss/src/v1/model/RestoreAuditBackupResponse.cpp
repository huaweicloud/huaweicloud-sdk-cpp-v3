

#include "huaweicloud/dbss/v1/model/RestoreAuditBackupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




RestoreAuditBackupResponse::RestoreAuditBackupResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

RestoreAuditBackupResponse::~RestoreAuditBackupResponse() = default;

void RestoreAuditBackupResponse::validate()
{
}

web::json::value RestoreAuditBackupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool RestoreAuditBackupResponse::fromJson(const web::json::value& val)
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


std::string RestoreAuditBackupResponse::getResult() const
{
    return result_;
}

void RestoreAuditBackupResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RestoreAuditBackupResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RestoreAuditBackupResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


