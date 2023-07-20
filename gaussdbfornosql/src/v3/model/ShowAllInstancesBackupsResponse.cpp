

#include "huaweicloud/gaussdbfornosql/v3/model/ShowAllInstancesBackupsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowAllInstancesBackupsResponse::ShowAllInstancesBackupsResponse()
{
    totalCount_ = 0L;
    totalCountIsSet_ = false;
    backupsIsSet_ = false;
}

ShowAllInstancesBackupsResponse::~ShowAllInstancesBackupsResponse() = default;

void ShowAllInstancesBackupsResponse::validate()
{
}

web::json::value ShowAllInstancesBackupsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(backupsIsSet_) {
        val[utility::conversions::to_string_t("backups")] = ModelBase::toJson(backups_);
    }

    return val;
}

bool ShowAllInstancesBackupsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backups"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryInstanceBackupResponseBody_backups> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackups(refVal);
        }
    }
    return ok;
}

int64_t ShowAllInstancesBackupsResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowAllInstancesBackupsResponse::setTotalCount(int64_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowAllInstancesBackupsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowAllInstancesBackupsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<QueryInstanceBackupResponseBody_backups>& ShowAllInstancesBackupsResponse::getBackups()
{
    return backups_;
}

void ShowAllInstancesBackupsResponse::setBackups(const std::vector<QueryInstanceBackupResponseBody_backups>& value)
{
    backups_ = value;
    backupsIsSet_ = true;
}

bool ShowAllInstancesBackupsResponse::backupsIsSet() const
{
    return backupsIsSet_;
}

void ShowAllInstancesBackupsResponse::unsetbackups()
{
    backupsIsSet_ = false;
}

}
}
}
}
}


