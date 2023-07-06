

#include "huaweicloud/cbr/v1/model/ShowBackupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ShowBackupRequest::ShowBackupRequest()
{
    backupId_ = "";
    backupIdIsSet_ = false;
}

ShowBackupRequest::~ShowBackupRequest() = default;

void ShowBackupRequest::validate()
{
}

web::json::value ShowBackupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }

    return val;
}

bool ShowBackupRequest::fromJson(const web::json::value& val)
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

std::string ShowBackupRequest::getBackupId() const
{
    return backupId_;
}

void ShowBackupRequest::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool ShowBackupRequest::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void ShowBackupRequest::unsetbackupId()
{
    backupIdIsSet_ = false;
}

}
}
}
}
}


