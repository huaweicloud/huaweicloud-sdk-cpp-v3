

#include "huaweicloud/dbss/v1/model/DeleteAuditBackupTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DeleteAuditBackupTaskResponse::DeleteAuditBackupTaskResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

DeleteAuditBackupTaskResponse::~DeleteAuditBackupTaskResponse() = default;

void DeleteAuditBackupTaskResponse::validate()
{
}

web::json::value DeleteAuditBackupTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool DeleteAuditBackupTaskResponse::fromJson(const web::json::value& val)
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


std::string DeleteAuditBackupTaskResponse::getResult() const
{
    return result_;
}

void DeleteAuditBackupTaskResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteAuditBackupTaskResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteAuditBackupTaskResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


