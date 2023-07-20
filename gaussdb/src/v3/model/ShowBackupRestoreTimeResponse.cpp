

#include "huaweicloud/gaussdb/v3/model/ShowBackupRestoreTimeResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowBackupRestoreTimeResponse::ShowBackupRestoreTimeResponse()
{
    restoreTimesIsSet_ = false;
}

ShowBackupRestoreTimeResponse::~ShowBackupRestoreTimeResponse() = default;

void ShowBackupRestoreTimeResponse::validate()
{
}

web::json::value ShowBackupRestoreTimeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(restoreTimesIsSet_) {
        val[utility::conversions::to_string_t("restore_times")] = ModelBase::toJson(restoreTimes_);
    }

    return val;
}

bool ShowBackupRestoreTimeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("restore_times"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_times"));
        if(!fieldValue.is_null())
        {
            std::vector<RestoreTimeInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoreTimes(refVal);
        }
    }
    return ok;
}

std::vector<RestoreTimeInfo>& ShowBackupRestoreTimeResponse::getRestoreTimes()
{
    return restoreTimes_;
}

void ShowBackupRestoreTimeResponse::setRestoreTimes(const std::vector<RestoreTimeInfo>& value)
{
    restoreTimes_ = value;
    restoreTimesIsSet_ = true;
}

bool ShowBackupRestoreTimeResponse::restoreTimesIsSet() const
{
    return restoreTimesIsSet_;
}

void ShowBackupRestoreTimeResponse::unsetrestoreTimes()
{
    restoreTimesIsSet_ = false;
}

}
}
}
}
}


