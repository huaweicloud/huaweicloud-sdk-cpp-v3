

#include "huaweicloud/gaussdb/v3/model/ShowGaussMySqlIncrementalBackupListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowGaussMySqlIncrementalBackupListResponse::ShowGaussMySqlIncrementalBackupListResponse()
{
    backupsIsSet_ = false;
    totalCount_ = 0L;
    totalCountIsSet_ = false;
}

ShowGaussMySqlIncrementalBackupListResponse::~ShowGaussMySqlIncrementalBackupListResponse() = default;

void ShowGaussMySqlIncrementalBackupListResponse::validate()
{
}

web::json::value ShowGaussMySqlIncrementalBackupListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupsIsSet_) {
        val[utility::conversions::to_string_t("backups")] = ModelBase::toJson(backups_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ShowGaussMySqlIncrementalBackupListResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backups"));
        if(!fieldValue.is_null())
        {
            std::vector<IncrementalBackups> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<IncrementalBackups>& ShowGaussMySqlIncrementalBackupListResponse::getBackups()
{
    return backups_;
}

void ShowGaussMySqlIncrementalBackupListResponse::setBackups(const std::vector<IncrementalBackups>& value)
{
    backups_ = value;
    backupsIsSet_ = true;
}

bool ShowGaussMySqlIncrementalBackupListResponse::backupsIsSet() const
{
    return backupsIsSet_;
}

void ShowGaussMySqlIncrementalBackupListResponse::unsetbackups()
{
    backupsIsSet_ = false;
}

int64_t ShowGaussMySqlIncrementalBackupListResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowGaussMySqlIncrementalBackupListResponse::setTotalCount(int64_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowGaussMySqlIncrementalBackupListResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowGaussMySqlIncrementalBackupListResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


