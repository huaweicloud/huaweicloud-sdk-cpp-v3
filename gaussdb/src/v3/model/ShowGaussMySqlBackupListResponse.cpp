

#include "huaweicloud/gaussdb/v3/model/ShowGaussMySqlBackupListResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowGaussMySqlBackupListResponse::ShowGaussMySqlBackupListResponse()
{
    backupsIsSet_ = false;
    totalCount_ = 0L;
    totalCountIsSet_ = false;
}

ShowGaussMySqlBackupListResponse::~ShowGaussMySqlBackupListResponse() = default;

void ShowGaussMySqlBackupListResponse::validate()
{
}

web::json::value ShowGaussMySqlBackupListResponse::toJson() const
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

bool ShowGaussMySqlBackupListResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backups"));
        if(!fieldValue.is_null())
        {
            std::vector<Backups> refVal;
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

std::vector<Backups>& ShowGaussMySqlBackupListResponse::getBackups()
{
    return backups_;
}

void ShowGaussMySqlBackupListResponse::setBackups(const std::vector<Backups>& value)
{
    backups_ = value;
    backupsIsSet_ = true;
}

bool ShowGaussMySqlBackupListResponse::backupsIsSet() const
{
    return backupsIsSet_;
}

void ShowGaussMySqlBackupListResponse::unsetbackups()
{
    backupsIsSet_ = false;
}

int64_t ShowGaussMySqlBackupListResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowGaussMySqlBackupListResponse::setTotalCount(int64_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowGaussMySqlBackupListResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowGaussMySqlBackupListResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


