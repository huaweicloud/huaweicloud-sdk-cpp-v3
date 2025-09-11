

#include "huaweicloud/dbss/v1/model/SetAuditBackupRiskSwitchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SetAuditBackupRiskSwitchResponse::SetAuditBackupRiskSwitchResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

SetAuditBackupRiskSwitchResponse::~SetAuditBackupRiskSwitchResponse() = default;

void SetAuditBackupRiskSwitchResponse::validate()
{
}

web::json::value SetAuditBackupRiskSwitchResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool SetAuditBackupRiskSwitchResponse::fromJson(const web::json::value& val)
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


std::string SetAuditBackupRiskSwitchResponse::getResult() const
{
    return result_;
}

void SetAuditBackupRiskSwitchResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool SetAuditBackupRiskSwitchResponse::resultIsSet() const
{
    return resultIsSet_;
}

void SetAuditBackupRiskSwitchResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


