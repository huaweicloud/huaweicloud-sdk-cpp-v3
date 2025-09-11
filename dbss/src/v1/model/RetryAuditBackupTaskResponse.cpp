

#include "huaweicloud/dbss/v1/model/RetryAuditBackupTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




RetryAuditBackupTaskResponse::RetryAuditBackupTaskResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

RetryAuditBackupTaskResponse::~RetryAuditBackupTaskResponse() = default;

void RetryAuditBackupTaskResponse::validate()
{
}

web::json::value RetryAuditBackupTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool RetryAuditBackupTaskResponse::fromJson(const web::json::value& val)
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


std::string RetryAuditBackupTaskResponse::getResult() const
{
    return result_;
}

void RetryAuditBackupTaskResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RetryAuditBackupTaskResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RetryAuditBackupTaskResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


