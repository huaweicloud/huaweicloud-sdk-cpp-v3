

#include "huaweicloud/cce/v3/model/SnapshotTaskStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




SnapshotTaskStatus::SnapshotTaskStatus()
{
    latestBackupTime_ = "";
    latestBackupTimeIsSet_ = false;
}

SnapshotTaskStatus::~SnapshotTaskStatus() = default;

void SnapshotTaskStatus::validate()
{
}

web::json::value SnapshotTaskStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(latestBackupTimeIsSet_) {
        val[utility::conversions::to_string_t("latestBackupTime")] = ModelBase::toJson(latestBackupTime_);
    }

    return val;
}
bool SnapshotTaskStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("latestBackupTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("latestBackupTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLatestBackupTime(refVal);
        }
    }
    return ok;
}


std::string SnapshotTaskStatus::getLatestBackupTime() const
{
    return latestBackupTime_;
}

void SnapshotTaskStatus::setLatestBackupTime(const std::string& value)
{
    latestBackupTime_ = value;
    latestBackupTimeIsSet_ = true;
}

bool SnapshotTaskStatus::latestBackupTimeIsSet() const
{
    return latestBackupTimeIsSet_;
}

void SnapshotTaskStatus::unsetlatestBackupTime()
{
    latestBackupTimeIsSet_ = false;
}

}
}
}
}
}


