

#include "huaweicloud/rds/v3/model/ListOffSiteBackupsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListOffSiteBackupsResponse::ListOffSiteBackupsResponse()
{
    backupsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListOffSiteBackupsResponse::~ListOffSiteBackupsResponse() = default;

void ListOffSiteBackupsResponse::validate()
{
}

web::json::value ListOffSiteBackupsResponse::toJson() const
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

bool ListOffSiteBackupsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backups"));
        if(!fieldValue.is_null())
        {
            std::vector<OffSiteBackupForList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}

std::vector<OffSiteBackupForList>& ListOffSiteBackupsResponse::getBackups()
{
    return backups_;
}

void ListOffSiteBackupsResponse::setBackups(const std::vector<OffSiteBackupForList>& value)
{
    backups_ = value;
    backupsIsSet_ = true;
}

bool ListOffSiteBackupsResponse::backupsIsSet() const
{
    return backupsIsSet_;
}

void ListOffSiteBackupsResponse::unsetbackups()
{
    backupsIsSet_ = false;
}

int32_t ListOffSiteBackupsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListOffSiteBackupsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListOffSiteBackupsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListOffSiteBackupsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


