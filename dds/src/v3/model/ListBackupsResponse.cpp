

#include "huaweicloud/dds/v3/model/ListBackupsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListBackupsResponse::ListBackupsResponse()
{
    backupsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListBackupsResponse::~ListBackupsResponse() = default;

void ListBackupsResponse::validate()
{
}

web::json::value ListBackupsResponse::toJson() const
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
bool ListBackupsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backups"));
        if(!fieldValue.is_null())
        {
            std::vector<BackupForList> refVal;
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


std::vector<BackupForList>& ListBackupsResponse::getBackups()
{
    return backups_;
}

void ListBackupsResponse::setBackups(const std::vector<BackupForList>& value)
{
    backups_ = value;
    backupsIsSet_ = true;
}

bool ListBackupsResponse::backupsIsSet() const
{
    return backupsIsSet_;
}

void ListBackupsResponse::unsetbackups()
{
    backupsIsSet_ = false;
}

int32_t ListBackupsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListBackupsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListBackupsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListBackupsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


