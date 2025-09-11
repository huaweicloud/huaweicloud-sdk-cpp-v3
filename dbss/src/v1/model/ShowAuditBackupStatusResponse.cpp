

#include "huaweicloud/dbss/v1/model/ShowAuditBackupStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ShowAuditBackupStatusResponse::ShowAuditBackupStatusResponse()
{
    status_ = 0;
    statusIsSet_ = false;
}

ShowAuditBackupStatusResponse::~ShowAuditBackupStatusResponse() = default;

void ShowAuditBackupStatusResponse::validate()
{
}

web::json::value ShowAuditBackupStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ShowAuditBackupStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


int32_t ShowAuditBackupStatusResponse::getStatus() const
{
    return status_;
}

void ShowAuditBackupStatusResponse::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowAuditBackupStatusResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowAuditBackupStatusResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


