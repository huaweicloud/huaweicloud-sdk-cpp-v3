

#include "huaweicloud/dbss/v1/model/SetAuditBackupSwitchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SetAuditBackupSwitchResponse::SetAuditBackupSwitchResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

SetAuditBackupSwitchResponse::~SetAuditBackupSwitchResponse() = default;

void SetAuditBackupSwitchResponse::validate()
{
}

web::json::value SetAuditBackupSwitchResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool SetAuditBackupSwitchResponse::fromJson(const web::json::value& val)
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


std::string SetAuditBackupSwitchResponse::getResult() const
{
    return result_;
}

void SetAuditBackupSwitchResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool SetAuditBackupSwitchResponse::resultIsSet() const
{
    return resultIsSet_;
}

void SetAuditBackupSwitchResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


