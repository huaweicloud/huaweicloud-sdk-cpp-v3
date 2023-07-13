

#include "huaweicloud/cbr/v1/model/DeleteBackupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




DeleteBackupRequest::DeleteBackupRequest()
{
    backupId_ = "";
    backupIdIsSet_ = false;
}

DeleteBackupRequest::~DeleteBackupRequest() = default;

void DeleteBackupRequest::validate()
{
}

web::json::value DeleteBackupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }

    return val;
}

bool DeleteBackupRequest::fromJson(const web::json::value& val)
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
    return ok;
}

std::string DeleteBackupRequest::getBackupId() const
{
    return backupId_;
}

void DeleteBackupRequest::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool DeleteBackupRequest::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void DeleteBackupRequest::unsetbackupId()
{
    backupIdIsSet_ = false;
}

}
}
}
}
}


